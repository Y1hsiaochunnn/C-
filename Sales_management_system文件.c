#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 99 //预计销售员数量
void catalogue();//菜单函数
void input();//输入销售员信息功能函数
void scan(int a);//浏览功能函数
    /*查询功能函数*/
void query();
void query1();
void query2();

void alter(int a);//修改功能函数
void detele(int a);//删除功能函数
void save(int a);//保存学生信息到文件
void load();//从已有文件中获取销售员信息
void denglu();//系统登录
void count();
void count1();
void count2();
void count3();
void count4();
void count5();

    /*销售员的结构体*/
struct node//销售员信息数组
{
	char no[12];/*代号*/
	char name[40];/*姓名*/
	int month[12];/*月份*/
	float sales[12];/*月销售额*/
	float total;/*年度总销售额*/
}Node[N];
    /*主函数*/
int main()
{
	system("color 80");
	denglu();
	return 0;
}

void catalogue()
{
	int a;

	 printf("******************菜单*****************\n");
	 printf("1：浏览销售员信息        2：查询销售员信息\n");
	 printf("3：输入销售员信息        4：统计销售员信息\n");
	 printf("5：退出\n");
	 printf("**************************************\n");
	 printf("请输入1~5的数：" );

	do
	{
		scanf("%d",&a);
		if(a<1&&a>5){printf("输入错误\n");}
	}while(a<1&&a>5);

	switch(a)
	{
	case 1:
		scan(0);break;
	case 2:
		query();break;
	case 3:
		input();break;
	case 4:
		count();break;
	case 5:
		exit(1);
	}
}
void input()
{
	int a,b,c;
	printf("要输入多少个销售员的信息：");
	scanf("%d",&a);
	if(a==1)
	{
		c=1;
	goto sign;
	}
	else{
	printf("从哪号员工开始：");
	scanf("%d",&c);
	}
	    /*重置储存空间数据*/
sign:	for(b=c;b<c+a;b++)
	{
		strcpy(Node[b].no,"0");
		strcpy(Node[b].name,"无");
		memset(Node[b].month,0,12*sizeof(int));
		memset(Node[b].sales,0,12*sizeof(float));
		Node[b].total=0;
	}
	for(b=c-1;b<c+a-1;b++)
	{
		printf("*********销售员*********\n");
		printf("代号：");
		scanf("%s",Node[b].no);
		printf("\n");
		printf("姓名：");
		scanf("%s",Node[b].name);
		printf("\n");
		printf("月份：");
		scanf("%d",&Node[b].month);
		printf("\n");
		printf("月销售额：");
		scanf("%f",&Node[b].sales);
		printf("\n");
		printf("年度销售额：");
		scanf("%f",&Node[b].total);
		printf("\n");
	}
	save(a);//保存销售员系
	printf("输入成功！！\n");
	system("cls");//清屏
	catalogue();
}
void scan(int a)
{
	int b;
	    load(); //导入销售员信息

	printf("*********销售员%d*********\n",a+1);
	printf("代号：%s",Node[a+1].no);
	printf("\n");
	printf("姓名：%s",Node[a+1].name);
	printf("\n");
	printf("月份：%d",Node[a+1].month);
	printf("\n");
	printf("月销售额：%.2f",Node[a+1].sales);
	printf("\n");
	printf("年度销售额：%.2f",Node[a+1].total);
	printf("\n");
	if(strcmp(Node[a+1].no,"0")==0)
	{
		printf("没有销售员了\n");
		system("pause");
	}
	printf("输入 0 返回菜单，输入 1 修改信息，输入 2 删除信息 其他则下一个：");
	scanf("%d",&b);
	switch(b)
	{
	case 0:
		break;
	case 1:
		alter(a);
		break;
	case 2:
		detele(a);
		break;
	default:
		scan(a+1);
	}
	system("cls");

	catalogue();
}
void scan1(int a)
{
	int b;
	printf("*********销售员%d*********\n",a+1);
	printf("代号：",Node[a].no);
	printf("\n");
	printf("姓名：",Node[a].name);
	printf("\n");
	printf("月份：",Node[a].month);
	printf("\n");
	printf("月销售额",Node[a].sales);
	printf("\n");
	printf("年度销售额：",Node[a].total);
	printf("\n");
	printf("输入 0 返回，其他则下一个：");
	scanf("%d",&b);
	if(b==0){count();}

	scan1(a+1);
	system("cls");
}
void query()
{//查询功能
	int a;
	load();
	printf("1：按代号查询      2：按名字查询\n");
	printf("3：返回菜单\n");
	printf("请输入数字：");
	do{
		scanf("%d",&a);
		if(a<1&&a>4){printf("输入错误！！");}
	}while(a<1&&a>4);
	printf("\n");
	switch(a)
	{
	case 1:
		query1();break;
	case 2:
		query2();break;
	case 3:
		load();
		catalogue();break;
	}
}
void query1()
{
	char dh[12];
	int a;
	printf("请输入代号：");
	scanf("%s",dh);
	printf("\n");
	for(a=0;a<N;a++)
	{
		if((strcmp(Node[a].no,dh))==0){ printf("查找成功！！\n");break;}
	}
	scan(a);
}
void query2()
{
	char name[20];
	int a;
	printf("请输入名字：");
	scanf("%s",name);
	printf("\n");
	for(a=0;a<N;a++)
	{
		if((strcmp(Node[a].name,name))==0){ printf("查找成功！！\n");break;}
	}
	scan(a);
}
void alter(int a)
{
	int x;
	char xg[20];
	printf("1：修改代号          2：修改名字\n");
	printf("3：修改月销售额      4：修改年度总销售额");
	do{
		scanf("%d",&x);
		if(x<1&&x>5){printf("输入错误！！\n");}
	}while(x<1&&x>5);
	switch(x)
	{
	case 1:
		printf("代号改为：");
		scanf("%s",xg);
		strcpy(Node[a].no,xg);
		break;
	case 2:
		printf("名字改为：");
		scanf("%s",xg);
		strcpy(Node[a].name,xg);
		break;

	case 3:
		printf("月销售额改为：");
		scanf("%f",Node[a].sales);
		break;
	case 4:
		printf("年度总销售额改为：");
		scanf("%f",Node[a].total);
		break;
	}
	save(a+1);
	printf("修改成功！！\n");
	scan(a);
}
void detele(int a)
{
	int x;
	x=a;
	for(;a<N-1;a++)
	{
		strcpy(Node[a].no,Node[a+1].no);
		strcpy(Node[a].name,Node[a+1].name);
		memcpy(Node[a].month,Node[a+1].month,sizeof(int)*12);
		memcpy(Node[a].sales,Node[a+1].sales,sizeof(float)*12);
		Node[a].total=Node[a+1].total;
	}//后一位销售员信息覆盖前面一位，使之信息被删除

	//清除最后一位销售员信息
	memset(Node[N-1].no,0,sizeof(Node[N-1].no)*12);
	memset(Node[N-1].name,0,sizeof(Node[N-1].name)*20);
	memcpy(Node[N-1].month,0,sizeof(int)*12);
	memcpy(Node[N-1].sales,0,sizeof(float)*12);
	Node[N-1].total=0;

	save(x+1);
	printf("删除成功！！\n");
	scan(x-1);
}
void denglu()
{
	int time;
	char name[20],mima[20];
	for(time=1;time<=5;time++)
	{
		printf("\t\t\t\n\n账号：\n");
		scanf("%s",name);
		printf("\n");
		printf("\t\t\t\n\n密码：\n");
		scanf("%s",mima);
		if(strcmp(name,"3190705205")==0&&strcmp(mima,"123456")==0)
		{
			system("cls");
			catalogue();break;
		}
		else if(strcmp(name,"3190705205")!=0)
		{
			printf("账号输入错误！请重新输入");
			printf("还剩%d次机会",5-time);
		}
		else if(strcmp(mima,"123456")!=0)
		{
			printf("密码输入错误！请重新输入");
			printf("还剩%d次机会",5-time);
		}
	}
	if(time==6);
	{
		exit(1);
	}
}
void count()
{
	int x;
	system("cls");
	printf("1：统计所有销售员的年度总销售额\n2：找出最大月销售额\n");
	printf("3：找出最大年度总销售额\n4：找出最小月销售额\n");
	printf("5：找出最小年度总销售额\n0：返回菜单\n");
	printf("请输入一个数：");
sign1:	scanf("%d",&x);
	if(x<0||x>5)
	{
		printf("输入错误！！请重新输入：\n");
		goto sign1;
	}
	else
	{
		switch(x)
		{
		case 1:
			count1();
			break;
		case 2:
			count2();
			break;
		case 3:
			count3();
			break;
		case 4:
			count4();
			break;
		case 5:
			count5();
			break;
		case 0:
			catalogue();
		}
	}
}
void count1()
{
	int a;
	float sum;
	for(a=1;a<N;a++)
	{
		sum+=Node[a].total;
	}
	printf("所有销售员的年度总销售额=%f",sum);
	printf("\n");
	system("pause");
	count();
}
void count2()
{
	int a,b;
	float max[12];
	for(a=1;a<N-1;a++)
	{
		if(Node[a].sales>Node[a+1].sales)
		{
			memcpy(max,Node[a].sales,sizeof(float)*12);
			b=a;
		}
		else
		{
			memcpy(max,Node[a+1].sales,sizeof(float)*12);
			b=a+1;
		}
	}
	printf("销售员%s最大月销售额=%f",Node[b].name,max);
	printf("\n");
	system("pause");
	count();
}
void count3()
{
	int a,b;
	float max;
	for(a=1;a<N-1;a++)
	{
		if(Node[a].total>Node[a+1].total)
		{
			max=Node[a].total;
			b=a;
		}
		else
		{
			max=Node[a+1].total;
			b=a;
		}
	}
	printf("销售员%s最大年度总销售额=%f",Node[b].name,max);
	printf("\n");
	system("pause");
	count();
}
void count4()
{
	int a,b;
	float min[12];
	for(a=1;a<N-1;a++)
	{
		if(Node[a].sales>Node[a+1].sales)
		{
			memcpy(min,Node[a+1].sales,sizeof(float)*12);
			b=a+1;
		}
		else
		{
			memcpy(min,Node[a].sales,sizeof(float)*12);
			b=a;
		}
	}
	printf("销售员%s最小月销售额=%f",Node[b].name,min);
	printf("\n");
	system("pause");
	count();
}
void count5()
{
	int a,b;
	float min;
	for(a=1;a<N-1;a++)
	{
		if(Node[a].total>Node[a+1].total)
		{
			min=Node[a+1].total;
			b=a+1;
		}
		else
		{
			min=Node[a].total;
			b=a;
		}
	}
	printf("销售员%s最大月销售额=%f",Node[b].name,min);
	printf("\n");
	system("pause");
	count();
}
void save(int a)
{
	int b;
	FILE *fp = fopen("销售员信息.md","ab");
	if(fp == NULL)
	{
		printf("cannot open this file\n");
		system("cls");
		catalogue();
		return;
	}
	else
	{
		for(b=0;b<a+1;b++)
		{
			rewind(fp);
			fwrite(&Node[b],sizeof(struct node),1,fp);
		}
		fclose(fp);
	}
}
void load()
{
	int b;
	FILE *fp;
	fp=fopen("销售员信息.md","r");
	if((fp==NULL))
	{
		printf("cannot open this file\n");
		system("cls");//清屏
		catalogue();
	}
	else
	{
		for(b=0;b<N;b++)
		{
			rewind(fp);
			fread(&Node[b],sizeof(struct node),1,fp);
		}
		fclose(fp);
	}
}