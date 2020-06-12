#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <malloc.h>
#define N 99 //预计销售员数量
/*void catalogue();//菜单函数
void input();//输入销售员信息功能函数
void scan(int a);//浏览功能函数
    /*查询功能函数*/
/*void query();
void query1();
void query2();
void Addone(char no[12], char name[40], float total, float sales[12]);
void alter(int a);//修改功能函数
void detele(int a);//删除功能函数
void save(int a);//保存销售员信息
void load();//从已有信息中获取销售员信息
void denglu();//系统登录
void count();
void count1();
void count2();
void count3();
void count4();
void count5();*/
/*void input()
{
	//初始化
	int Ad = -1;
	int i = -1;
	
	char no[12] = { 0 };
	char name[40] = { 0 };
	float total = 0;
	float sales[12] = { 0 };
	system("cls");
	printf("请输入销售员代号：");
	scanf("%s", no);
	//查重
	if(CheckBack(no));
	else
	{
		printf("与现有记录重复，请重新输入！\n");
		system("pause");
		input();
	}
	printf("请输入销售员姓名：");
	scanf("%s", name);
	printf("\t1：录入销售额\n\t0：继续\n请输入指令：");
	scanf("%d", &Ad);
	switch (Ad)
	{
	case 1:
		printf("请输入该销售员%d月的销售额", i + 1);
		scanf("%f", &sales[i]);
		total += sales[i];
	case 0:
		Addone(no, name, total, sales);
		break;
	default:
		printf("输入的指令不对！\n");
	}
}*/
/*void Addone(char no[12], char name[40], float total, float sales[12])
{
	int i;
	//创建一个节点
	Linklist* Target = malloc(sizeof(Linklist));

	//第一步，检验参数的合法性
	if (NULL == no || NULL == name)
	{
		printf("销售信息输入错误\n");
		return;
	}
	//节点成员赋初始值
	strcpy(Target->no ,no);
	strcpy(Target->name ,name);
	for (i = 0;i < 12;i++)
	{
		Target->sales[i] = sales[i];
	}
	Target->total = total;
	Target->next = NULL;
	printf("%s,%s,%f", Target->no, Target->name, Target->total);
	//接在链表上
	if (NULL == Head || NULL == End)
	{
		Head = Target;
	}
	else
	{
		End->next = Target;	//链接
	}
	End = Target;
	printf("添加成功！%f\n",total);
	system("pause");
	system("cls");
}*/
	/*int a,b,c;
	printf("要输入多少个销售员的信息：");
	scanf("%d",&a);
	if(a==1)
		c=1;
	goto sign;
	printf("从哪号员工开始：");
	scanf("%d",&c);*/
	    /*重置储存空间数据
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
}*/
/*void scan(int a)
{
	Linklist* Target = NULL;
	char no[12] = { '\0' };
	printf("请输入要查询的销售员代号：\n");
	scanf("%s", no);
	system("cls");
	Target = searchNo(no);
	if (NULL != Target)
	{
	
		printf("*********销售员%d*********\n",a+1);
		printf("代号：%s",Target->no);
		printf("\n");
		printf("姓名：%s",Target->name);
		printf("\n");
		printf("月份：%d",Target->month);
		printf("\n");
		printf("月销售额：%f",Target->sales);
		printf("\n");
		printf("年度销售额：%f",Target->total);
		printf("\n");
	}
	else if(strcmp(Target->no,"0")==0)
	{
		printf("没有销售员了\n");
		system("pause");
	}
	printf("输入 0 返回菜单，输入 1 修改信息，输入 2 删除信息 其他则下一个：");
	int b; 
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
		a++;
		scan(a);
	}
	system("cls");

	catalogue();
}*/
/*void scan1(int a)
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
}*/
/*void query()
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
}*/
/*void query1()
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
}*/
/*void query2()
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
	scan(a);*/
/*void alter(int a)
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
}*/
/*void detele(int a)
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
}*/
/*void count()
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
}*/
/*void count1()
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
}*/
/*void count2()
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
}*/
/*void count3()
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
}*/
/*void count4()
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
}*/
/*void count5()
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
}*/
//文件保存转为链表 
/*void save(int a)
{
	int b;
	FILE *fp = fopen("销售员信息.md","ab+");
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
}*/
/*void load()
{
	int b;
	FILE *fp;
	fp=fopen("销售员信息.md","rb");
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
}*/

    /*销售员的结构体
struct node//销售员信息数组
{
	char no[12];代号
	char name[40];姓名
	int month[12];月份
	float sales[12];月销售额
	float total;/*年度总销售额
}Node[N];*/
void AddOne(char no[12], char name[40], float total, float sales[12]);
//销售员节点
typedef struct salesman
{
	char no[12];    	/*代号*/
	char name[40];  	/*姓名*/
	int month[12];		/*月份*/
	float sales[12];	/*月销售额*/
	float total;		/*年度总销售额*/
	struct salesman* next;
} Linklist;

Linklist* Head = NULL;	//0 
Linklist* End = NULL;

void Sales_management_system();
//代号查询
Linklist* query1(char* no)
{
	Linklist* Target = Head;
	if (NULL == no)
	{
		printf("代号输入错误\n");
		return NULL;
	}
	if (NULL == Head || NULL == End)
	{
		printf("链表为空！\n");
		return NULL;
	}
	while (Target != NULL)
	{
		if (0 == strcmp(Target->no, no))
		{
			return Target;
		}
		Target = Target->next;
	}
	printf("该代号不存在！\n");
	return NULL;
}
//查重 
int reboot_check(char* no)
{
	Linklist* Target = Head;
	if (NULL == Head || NULL == End)
	{
		return 1;
	}
	while (Target != NULL)
	{
		if (0 == strcmp(Target->no, no))
		{
			return 0;
		}
		Target = Target->next;
	}
	return 1;
}
//删除 
void Delete(Linklist* Node)
{
	//一个节点时
	if (Head == End)
	{
		free(Head);
		End = NULL;
		Head = NULL;
	}
	//两个节点时
	else if (Head->next == End)
	{
		if (Head == Node)
		{
			free(Head);
			Head = End;
		}
		else
		{
			free(End);
			End = Head;
			Head->next = NULL;
		}
	}
	//节点多于2时 
	else
	{
		Linklist* Target = Head;
		if (Head == Node)
		{
			Target = Head;
			Head = Head->next;
			free(Target);
			Target = NULL;
			return ;
		}
		while (Target)
		{
			if (Target->next == Node)
			{
				if (Node == End)
				{
					free(Node);
					Node = NULL;
					End = Target;
					End->next = NULL;
					return ;
				}
				else
				{
					Linklist* p = Target->next;
					Target->next = Target->next->next;
					free(p);
					p = NULL;
					return;
				}
			}
			Target = Target->next;
		}
	}
}
//录入销售信息
void input()
{
	//初始化 ;
	int Ad = -1;
	int i = 0;
	int g;
	int m;
	int h;
	char no[12] = { 0 };
	char name[40] = { 0 };
	int month[12]={ 0 };
	float total = 0;
	float sales[12] = { 0 };
	system("cls");
	printf("请输入销售员代号：");
	scanf("%s", no);
	//查重
	if (reboot_check(no))
		;
	else
	{
		printf("重复记录，请重新输入！\n");
		system("pause");
		input();
	}
	printf("请输入销售员姓名：");
	scanf("%s", name);
	printf("\t1：录入销售额\n\t0：继续\n请输入指令：");
	scanf("%d", &Ad);
	switch (Ad)
	{
	case 1:
		printf("默认重复输入，如要退出请输入0.\n"); 
		for(i=0;i<12;i++){
	sign:	printf("要输入几月的销售额：");
			m=0;
			scanf("%d",&m);
			if(m<0||m>12){
				printf("输入错误，请重新输入！\n");
				goto sign;
			}
			else if(m==0)
			{
				break;
			}
			else{
				h=m-1;
				printf("请输入%d月销售额：",m);
				scanf("%f", &sales[h]);
				total+=sales[h];
			}
		}
	case 0:
		AddOne(no, name, total, sales);
		break;
	default:
		printf("输入的指令不对！\n");
	}
}
//添加一个销售员信息
void AddOne(char no[12], char name[40], float total, float sales[12])
{
	int i;
	Linklist* Target = malloc(sizeof(Linklist));
	if (NULL == no || NULL == name)
	{
		printf("销售信息输入错误\n");
		return;
	}
	strcpy(Target->no ,no);
	strcpy(Target->name ,name);
	for (i = 0;i < 12;i++)
	{
		Target->sales[i] = sales[i];
	}
	Target->total = total;
	Target->next = NULL;
	printf("%s,%s,%f", Target->no, Target->name, Target->total);
	if (NULL == Head || NULL == End)
	{
		Head = Target;
	}
	else
	{
		End->next = Target;
	}
	End = Target;
	printf("添加成功！%f\n",total);
	system("pause");
	system("cls");
}
//销售额查询（统计） 
void query()
{
	Linklist* Target = NULL;
	char no[12] = { '\0' };
	printf("请输入要查询的销售员代号：\n");
	scanf("%s", no);
	system("cls");
	Target = query1(no);
	if (NULL != Target)
	{
		printf("销售员代号：%s\n销售员姓名：%s\n年度总销售额%.2f\n", Target->no, Target->name, Target->total);
		int i;
		for (i = 0;i < 12;i++)
		{
			printf("%d月销售额：%.2f\n", i+1 , Target->sales[i]);
		}
	}
	system("pause");
}
//销售额修改
void alter()
{
	Linklist* Target = NULL;
	int Ad = -1;
	float num;
	char no[12] = { '\0' };
	system("cls");
	printf("请输入要修改的销售员代号：\n");
	scanf("%s", no);
	system("cls");
	Target = query1(no);
	if (NULL != Target)
	{
		while (1)
		{
			printf("该销售员当前信息如下：\n销售员代号：%s\n销售员姓名：%s\n年度总销售额%.2f\n", Target->no, Target->name, Target->total);
			int i; 
			for (i = 0;i < 12;i++)
			{
				printf("%d月销售额：%.2f\n", i + 1, Target->sales[i]);
			}
			printf("请输入要修改的销售额月份（如修改一月输入1即可。输入0可返回主菜单。）：");
			scanf("%d", &Ad);
			if (Ad == 0)
				Sales_management_system();
			else if (Ad > 0 && Ad < 13)
			{
				printf("请输入新值：");
				scanf("%f", &num);
				Target->total = Target->total - Target->sales[Ad - 1] + num;
				Target->sales[Ad - 1] = num;
				
				printf("修改成功\n");
				system("pause");
				system("cls");
			}
			else
			{
				printf("请输入0-12的数！");
				system("pause");
				system("cls");
			}
				
		}
		
	}
	system("pause");
}
//销售信息删除
void detele()
{
	Linklist* Target = NULL;
	int Ad = -1;
	char no[12] = { '\0' };
	printf("请输入要删除的销售员代号：\n");
	scanf("%s", no);
	system("cls");
	Target = query1(no);
	if (NULL != Target)
	{
		printf("该销售员当前信息如下：\n销售员代号：%s\n销售员姓名：%s\n年度总销售额%.2f\n", Target->no, Target->name, Target->total);
		int i;
		for (i = 0;i < 12;i++)
		{
			printf("%d月销售额：%.2f\n", i + 1, Target->sales[i]);
		}
		printf("\t1：确认删除\n\t2：取消并重新输入\n\t0：返回主菜单\n请输入指令：");
		scanf("%d", &Ad);
		switch (Ad)
		{
		case 1:
			Delete(Target);
			break;
		case 2:
			detele();
			break;
		case 0:
			Sales_management_system();
			break;
		default:
			printf("输入的指令不对！\n");
		}

	}
	system("pause");
}
/*查询功能函数*/
void count()
{
	float year_total = 0;
	float month_total[12] = { 0 };
	float max, min;
	int MinMonth = 0, MaxMonth = 0;
	Linklist* Target = Head;
	//判断链表是否为空
	if (NULL == Head || NULL == End)
	{
		printf("链表为空！\n");
		return NULL;
	}
	//遍历链表
	while (Target != NULL)
	{
		int i;
		for (i = 0;i < 12;i++)
		{
			month_total[i] += Target->sales[i];
		}
		year_total += Target->total;
		Target = Target->next;
	}
	max = 0;
	int i;
	for (i = 0;i < 12;i++)
	{
		if (max < month_total[i])
		{
			max = month_total[i];
			MaxMonth = i + 1;
		}
			
	}
	min = max;
	for (i = 0;i < 12;i++)
	{
		if (min > month_total[i])
		{
			min = month_total[i];
			MinMonth = i + 1;
		}
	}
	printf("当前年度总销售额：%.2f元\n", year_total);
	for (i = 0;i < 12;i++)
	{
		printf("当前年度%d月总销售额：%.2f元\n", i + 1, month_total[i]);
	}
	printf("%d月为当前年度销售额最大月：%.2f元\n", MaxMonth, max);
	printf("%d月为当前年度销售额最小月：%.2f元\n", MinMonth, min);
	system("pause");
}
//主菜单 
void menu()
{
	system("cls");
	printf("******************C语言课程设计******************\n");
	printf("                                                    \n");
	printf("           第1题：        万年历                  \n");
	printf("           第2题：        搬山游戏                 \n");
	printf("           第3题：        销售管理系统               \n");
	printf("             0:           退出系统                 \n");
	printf("                                                    \n");
	printf("*************************************************\n");
}
//销售管理菜单 
void Salemenu()
{
	printf("******************菜单*****************\n");
	printf("1：录入销售员信息        2：查询销售员信息\n");
	printf("3：修改销售员信息        4：删除销售员信息\n");
	printf("5：统计销售员信息        0：退出\n");
	printf("**************************************\n");
	printf("请输入0~5的数：" );
}


//万年历
int fdyear(int a)//
{
	if(a%400==0||a%100!=0&&a%4==0)//判断是否为闰年
		return(a-1+a/4-a/100+a/400)%7;//闰年元旦
	else
		return(a+a/4-a/100+a/400)%7;//平年元旦
}

void Calender() {
	system("cls"); 
	int Ad=-1;
	int n,i,y,fdmonth[12];
	printf("****************欢迎使用万年历****************\n");
	printf("请输入年份：");
	scanf("%d",&y);
	if(y<1)
		printf("输入的是错误年份。\n");
	else
	{
		if(y%400==0||y%100!=0&&y%4==0)
			printf("%d是闰年",y);
		else
			printf("%d不是闰年",y);
		n=(y%400==0||y%100!=0&&y%4==0);
		char *month[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
		char week[]= "日 一 二 三 四 五 六";
		int daysmonth[12]={31,28+n,31,30,31,30,31,31,30,31,30,31};//输入年份每个月的总天数
		printf("                         %d年的日历\n\n", y);
		for(i=0;i<12;i++)  //计算个月每个月的第一天
		{
			static int day=0;
			fdmonth[i]=(day+fdyear(y))%7;
			day=day+daysmonth[i];
		}
		for(i=0;i<12;i+=3)  //每三个月并排打印
		{
			printf("               %s                       %s                      %s\n", month[i],month[i+1],month[i+2]);
			char s[] = "    ";
			printf("%-3s %s %-3s %s %-3s %s\n",s,week,s,week,s,week);
			int j;
			for(j=0;j<6;j++)          //每个月最多占行
			{
				int d; 
				for(d=i;d<i+3;d++)    //三个月并排打印每一行
				{
					printf("     ");
					int n;
					for(n=0;n<7;n++)   //每一行有日
					{
						int k=1-fdmonth[d]+n+7*j;
						if(k<1||k>daysmonth[d])
							printf("   ");
						else
							printf("%-3d", k);  //计算日期输入
					}
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	printf("\n\t1：重新查询\n\t0：返回主菜单\n");
	scanf("%d", &Ad);
	switch (Ad)
	{

	case 1:
		//万年历
		Calender();
		break;
	case 0:
		//主菜单
		break;
	default:
		printf("输入的指令不对！\n");
	}
}

//搬山游戏
int Mountain()
{
	system("cls");
	int Ad=-1; 
	int m,n,x,y,ps=0,pc=0,game=1;
    printf("搬山游戏\n");
    printf("游戏开始\n");
	printf("输入0退出游戏\n");
    for(;;)
    {
        printf("No.%2d game\n", game++);
        printf("……………………………………………………\n");
        printf("共有多少座山？");
        scanf("%d", &m);//读入山的总数
        if(!m)
            break;
        printf("每次允许搬多少座山?");
		do
		{
			scanf("%d", &n);//读入允许的搬山数
		}
		while(n>m||n<1);
		do
		{
            printf("你希望多少山搬走?");
            scanf("%d",&x);
            if(x<1 || x>n ||x>m)//判断搬山数是否符合要求
            {
                printf("不符合要求，请再次输入!\n");
                continue;
            }
            m-=x;
            printf("现在还剩下%d座山.\n", m);
            if(!m)
            {
                printf("……………我赢了，你输了。……………\n\n");
				ps++;
            }
            else
            {
                y=(m-1)%(n+1);  //求出最佳搬山数
                if(!y)
                    y=1;
                m-=y;
                printf("电脑移走了 %d 座山.\n", y);
                if(m)
                    printf(" 现在还剩下%d座山.\n", m);
                else
                {
                    printf("……………我输了，你赢了。………………\n\n");
                    pc++;
                }
            }
        }
        while(m);
    }
    /*打印结果*/
    printf("总共进行了游戏%d.\n", ps+pc);
    printf("你的得分是胜利%d，输了%d.\n", pc, ps);
    printf("我的得分是胜利%d，输了%d.\n", ps, pc);
    printf("\n\t1：重新游玩\n\t0：返回主菜单\n");
    scanf("%d", &Ad);
	switch (Ad)
	{

	case 1:
		//搬山游戏 
		Mountain();
		break;
	case 0:
		//主菜单
		break;
	default:
		printf("输入的指令不对！\n");
	}
}

//销售管理系统
void Sales_management_system()
{
	int iAd = -1; 
	while (1)
	{
		system("cls");
		Salemenu();
		printf("请输入菜单指令：");
		scanf("%d", &iAd);
		if(iAd==0)
		{//退出销售管理系统，返回主菜单
		catalogue(); 
		}
		else
		{
			switch (iAd)
	    	{
		    case 1:
		    	input();
		    	break;
		    case 2:
		    	query();
		    	break;
		    case 3:
		    	alter();
		    	break;
		    case 4:
		    	detele();
		    	break;
		    case 5:
	    		count();
	    	default:
	    		printf("输入的指令不对！\n");
			}
		}
	}
}
//密码登录 
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
/*主函数*/
int main()
{
	system("color 80");
	denglu();
	return 0;
}
int catalogue()
{
	int iAd = -1;
	while (1)
	{
		system("cls");
		menu();
		printf("请输入浏览的题目：");
		scanf("%d", &iAd);
		switch (iAd)
		{

		case 1:
			//万年历
			Calender();
			break;
		case 2:
			//搬山游戏
			Mountain();
			break;
		case 3:
			//销售管理系统
			Sales_management_system();
			break;
		case 0:
			exit(1);
		default:
			printf("输入的指令不对！\n");
		}
	}
}

