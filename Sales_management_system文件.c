#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 99 //Ԥ������Ա����
void catalogue();//�˵�����
void input();//��������Ա��Ϣ���ܺ���
void scan(int a);//������ܺ���
    /*��ѯ���ܺ���*/
void query();
void query1();
void query2();

void alter(int a);//�޸Ĺ��ܺ���
void detele(int a);//ɾ�����ܺ���
void save(int a);//����ѧ����Ϣ���ļ�
void load();//�������ļ��л�ȡ����Ա��Ϣ
void denglu();//ϵͳ��¼
void count();
void count1();
void count2();
void count3();
void count4();
void count5();

    /*����Ա�Ľṹ��*/
struct node//����Ա��Ϣ����
{
	char no[12];/*����*/
	char name[40];/*����*/
	int month[12];/*�·�*/
	float sales[12];/*�����۶�*/
	float total;/*��������۶�*/
}Node[N];
    /*������*/
int main()
{
	system("color 80");
	denglu();
	return 0;
}

void catalogue()
{
	int a;

	 printf("******************�˵�*****************\n");
	 printf("1���������Ա��Ϣ        2����ѯ����Ա��Ϣ\n");
	 printf("3����������Ա��Ϣ        4��ͳ������Ա��Ϣ\n");
	 printf("5���˳�\n");
	 printf("**************************************\n");
	 printf("������1~5������" );

	do
	{
		scanf("%d",&a);
		if(a<1&&a>5){printf("�������\n");}
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
	printf("Ҫ������ٸ�����Ա����Ϣ��");
	scanf("%d",&a);
	if(a==1)
	{
		c=1;
	goto sign;
	}
	else{
	printf("���ĺ�Ա����ʼ��");
	scanf("%d",&c);
	}
	    /*���ô���ռ�����*/
sign:	for(b=c;b<c+a;b++)
	{
		strcpy(Node[b].no,"0");
		strcpy(Node[b].name,"��");
		memset(Node[b].month,0,12*sizeof(int));
		memset(Node[b].sales,0,12*sizeof(float));
		Node[b].total=0;
	}
	for(b=c-1;b<c+a-1;b++)
	{
		printf("*********����Ա*********\n");
		printf("���ţ�");
		scanf("%s",Node[b].no);
		printf("\n");
		printf("������");
		scanf("%s",Node[b].name);
		printf("\n");
		printf("�·ݣ�");
		scanf("%d",&Node[b].month);
		printf("\n");
		printf("�����۶");
		scanf("%f",&Node[b].sales);
		printf("\n");
		printf("������۶");
		scanf("%f",&Node[b].total);
		printf("\n");
	}
	save(a);//��������Աϵ
	printf("����ɹ�����\n");
	system("cls");//����
	catalogue();
}
void scan(int a)
{
	int b;
	    load(); //��������Ա��Ϣ

	printf("*********����Ա%d*********\n",a+1);
	printf("���ţ�%s",Node[a+1].no);
	printf("\n");
	printf("������%s",Node[a+1].name);
	printf("\n");
	printf("�·ݣ�%d",Node[a+1].month);
	printf("\n");
	printf("�����۶%.2f",Node[a+1].sales);
	printf("\n");
	printf("������۶%.2f",Node[a+1].total);
	printf("\n");
	if(strcmp(Node[a+1].no,"0")==0)
	{
		printf("û������Ա��\n");
		system("pause");
	}
	printf("���� 0 ���ز˵������� 1 �޸���Ϣ������ 2 ɾ����Ϣ ��������һ����");
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
	printf("*********����Ա%d*********\n",a+1);
	printf("���ţ�",Node[a].no);
	printf("\n");
	printf("������",Node[a].name);
	printf("\n");
	printf("�·ݣ�",Node[a].month);
	printf("\n");
	printf("�����۶�",Node[a].sales);
	printf("\n");
	printf("������۶",Node[a].total);
	printf("\n");
	printf("���� 0 ���أ���������һ����");
	scanf("%d",&b);
	if(b==0){count();}

	scan1(a+1);
	system("cls");
}
void query()
{//��ѯ����
	int a;
	load();
	printf("1�������Ų�ѯ      2�������ֲ�ѯ\n");
	printf("3�����ز˵�\n");
	printf("���������֣�");
	do{
		scanf("%d",&a);
		if(a<1&&a>4){printf("������󣡣�");}
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
	printf("��������ţ�");
	scanf("%s",dh);
	printf("\n");
	for(a=0;a<N;a++)
	{
		if((strcmp(Node[a].no,dh))==0){ printf("���ҳɹ�����\n");break;}
	}
	scan(a);
}
void query2()
{
	char name[20];
	int a;
	printf("���������֣�");
	scanf("%s",name);
	printf("\n");
	for(a=0;a<N;a++)
	{
		if((strcmp(Node[a].name,name))==0){ printf("���ҳɹ�����\n");break;}
	}
	scan(a);
}
void alter(int a)
{
	int x;
	char xg[20];
	printf("1���޸Ĵ���          2���޸�����\n");
	printf("3���޸������۶�      4���޸���������۶�");
	do{
		scanf("%d",&x);
		if(x<1&&x>5){printf("������󣡣�\n");}
	}while(x<1&&x>5);
	switch(x)
	{
	case 1:
		printf("���Ÿ�Ϊ��");
		scanf("%s",xg);
		strcpy(Node[a].no,xg);
		break;
	case 2:
		printf("���ָ�Ϊ��");
		scanf("%s",xg);
		strcpy(Node[a].name,xg);
		break;

	case 3:
		printf("�����۶��Ϊ��");
		scanf("%f",Node[a].sales);
		break;
	case 4:
		printf("��������۶��Ϊ��");
		scanf("%f",Node[a].total);
		break;
	}
	save(a+1);
	printf("�޸ĳɹ�����\n");
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
	}//��һλ����Ա��Ϣ����ǰ��һλ��ʹ֮��Ϣ��ɾ��

	//������һλ����Ա��Ϣ
	memset(Node[N-1].no,0,sizeof(Node[N-1].no)*12);
	memset(Node[N-1].name,0,sizeof(Node[N-1].name)*20);
	memcpy(Node[N-1].month,0,sizeof(int)*12);
	memcpy(Node[N-1].sales,0,sizeof(float)*12);
	Node[N-1].total=0;

	save(x+1);
	printf("ɾ���ɹ�����\n");
	scan(x-1);
}
void denglu()
{
	int time;
	char name[20],mima[20];
	for(time=1;time<=5;time++)
	{
		printf("\t\t\t\n\n�˺ţ�\n");
		scanf("%s",name);
		printf("\n");
		printf("\t\t\t\n\n���룺\n");
		scanf("%s",mima);
		if(strcmp(name,"3190705205")==0&&strcmp(mima,"123456")==0)
		{
			system("cls");
			catalogue();break;
		}
		else if(strcmp(name,"3190705205")!=0)
		{
			printf("�˺������������������");
			printf("��ʣ%d�λ���",5-time);
		}
		else if(strcmp(mima,"123456")!=0)
		{
			printf("���������������������");
			printf("��ʣ%d�λ���",5-time);
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
	printf("1��ͳ����������Ա����������۶�\n2���ҳ���������۶�\n");
	printf("3���ҳ������������۶�\n4���ҳ���С�����۶�\n");
	printf("5���ҳ���С��������۶�\n0�����ز˵�\n");
	printf("������һ������");
sign1:	scanf("%d",&x);
	if(x<0||x>5)
	{
		printf("������󣡣����������룺\n");
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
	printf("��������Ա����������۶�=%f",sum);
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
	printf("����Ա%s��������۶�=%f",Node[b].name,max);
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
	printf("����Ա%s�����������۶�=%f",Node[b].name,max);
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
	printf("����Ա%s��С�����۶�=%f",Node[b].name,min);
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
	printf("����Ա%s��������۶�=%f",Node[b].name,min);
	printf("\n");
	system("pause");
	count();
}
void save(int a)
{
	int b;
	FILE *fp = fopen("����Ա��Ϣ.md","ab");
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
	fp=fopen("����Ա��Ϣ.md","r");
	if((fp==NULL))
	{
		printf("cannot open this file\n");
		system("cls");//����
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