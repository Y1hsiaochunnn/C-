#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <malloc.h>
#define N 99 //Ԥ������Ա����
/*void catalogue();//�˵�����
void input();//��������Ա��Ϣ���ܺ���
void scan(int a);//������ܺ���
    /*��ѯ���ܺ���*/
/*void query();
void query1();
void query2();
void Addone(char no[12], char name[40], float total, float sales[12]);
void alter(int a);//�޸Ĺ��ܺ���
void detele(int a);//ɾ�����ܺ���
void save(int a);//��������Ա��Ϣ
void load();//��������Ϣ�л�ȡ����Ա��Ϣ
void denglu();//ϵͳ��¼
void count();
void count1();
void count2();
void count3();
void count4();
void count5();*/
/*void input()
{
	//��ʼ��
	int Ad = -1;
	int i = -1;
	
	char no[12] = { 0 };
	char name[40] = { 0 };
	float total = 0;
	float sales[12] = { 0 };
	system("cls");
	printf("����������Ա���ţ�");
	scanf("%s", no);
	//����
	if(CheckBack(no));
	else
	{
		printf("�����м�¼�ظ������������룡\n");
		system("pause");
		input();
	}
	printf("����������Ա������");
	scanf("%s", name);
	printf("\t1��¼�����۶�\n\t0������\n������ָ�");
	scanf("%d", &Ad);
	switch (Ad)
	{
	case 1:
		printf("�����������Ա%d�µ����۶�", i + 1);
		scanf("%f", &sales[i]);
		total += sales[i];
	case 0:
		Addone(no, name, total, sales);
		break;
	default:
		printf("�����ָ��ԣ�\n");
	}
}*/
/*void Addone(char no[12], char name[40], float total, float sales[12])
{
	int i;
	//����һ���ڵ�
	Linklist* Target = malloc(sizeof(Linklist));

	//��һ������������ĺϷ���
	if (NULL == no || NULL == name)
	{
		printf("������Ϣ�������\n");
		return;
	}
	//�ڵ��Ա����ʼֵ
	strcpy(Target->no ,no);
	strcpy(Target->name ,name);
	for (i = 0;i < 12;i++)
	{
		Target->sales[i] = sales[i];
	}
	Target->total = total;
	Target->next = NULL;
	printf("%s,%s,%f", Target->no, Target->name, Target->total);
	//����������
	if (NULL == Head || NULL == End)
	{
		Head = Target;
	}
	else
	{
		End->next = Target;	//����
	}
	End = Target;
	printf("��ӳɹ���%f\n",total);
	system("pause");
	system("cls");
}*/
	/*int a,b,c;
	printf("Ҫ������ٸ�����Ա����Ϣ��");
	scanf("%d",&a);
	if(a==1)
		c=1;
	goto sign;
	printf("���ĺ�Ա����ʼ��");
	scanf("%d",&c);*/
	    /*���ô���ռ�����
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
}*/
/*void scan(int a)
{
	Linklist* Target = NULL;
	char no[12] = { '\0' };
	printf("������Ҫ��ѯ������Ա���ţ�\n");
	scanf("%s", no);
	system("cls");
	Target = searchNo(no);
	if (NULL != Target)
	{
	
		printf("*********����Ա%d*********\n",a+1);
		printf("���ţ�%s",Target->no);
		printf("\n");
		printf("������%s",Target->name);
		printf("\n");
		printf("�·ݣ�%d",Target->month);
		printf("\n");
		printf("�����۶%f",Target->sales);
		printf("\n");
		printf("������۶%f",Target->total);
		printf("\n");
	}
	else if(strcmp(Target->no,"0")==0)
	{
		printf("û������Ա��\n");
		system("pause");
	}
	printf("���� 0 ���ز˵������� 1 �޸���Ϣ������ 2 ɾ����Ϣ ��������һ����");
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
}*/
/*void query()
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
}*/
/*void query1()
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
}*/
/*void query2()
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
	scan(a);*/
/*void alter(int a)
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
}*/
/*void count()
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
}*/
/*void count1()
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
	printf("����Ա%s��������۶�=%f",Node[b].name,max);
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
	printf("����Ա%s�����������۶�=%f",Node[b].name,max);
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
	printf("����Ա%s��С�����۶�=%f",Node[b].name,min);
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
	printf("����Ա%s��������۶�=%f",Node[b].name,min);
	printf("\n");
	system("pause");
	count();
}*/
//�ļ�����תΪ���� 
/*void save(int a)
{
	int b;
	FILE *fp = fopen("����Ա��Ϣ.md","ab+");
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
	fp=fopen("����Ա��Ϣ.md","rb");
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
}*/

    /*����Ա�Ľṹ��
struct node//����Ա��Ϣ����
{
	char no[12];����
	char name[40];����
	int month[12];�·�
	float sales[12];�����۶�
	float total;/*��������۶�
}Node[N];*/
void AddOne(char no[12], char name[40], float total, float sales[12]);
//����Ա�ڵ�
typedef struct salesman
{
	char no[12];    	/*����*/
	char name[40];  	/*����*/
	int month[12];		/*�·�*/
	float sales[12];	/*�����۶�*/
	float total;		/*��������۶�*/
	struct salesman* next;
} Linklist;

Linklist* Head = NULL;	//0 
Linklist* End = NULL;

void Sales_management_system();
//���Ų�ѯ
Linklist* query1(char* no)
{
	Linklist* Target = Head;
	if (NULL == no)
	{
		printf("�����������\n");
		return NULL;
	}
	if (NULL == Head || NULL == End)
	{
		printf("����Ϊ�գ�\n");
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
	printf("�ô��Ų����ڣ�\n");
	return NULL;
}
//���� 
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
//ɾ�� 
void Delete(Linklist* Node)
{
	//һ���ڵ�ʱ
	if (Head == End)
	{
		free(Head);
		End = NULL;
		Head = NULL;
	}
	//�����ڵ�ʱ
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
	//�ڵ����2ʱ 
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
//¼��������Ϣ
void input()
{
	//��ʼ�� ;
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
	printf("����������Ա���ţ�");
	scanf("%s", no);
	//����
	if (reboot_check(no))
		;
	else
	{
		printf("�ظ���¼�����������룡\n");
		system("pause");
		input();
	}
	printf("����������Ա������");
	scanf("%s", name);
	printf("\t1��¼�����۶�\n\t0������\n������ָ�");
	scanf("%d", &Ad);
	switch (Ad)
	{
	case 1:
		printf("Ĭ���ظ����룬��Ҫ�˳�������0.\n"); 
		for(i=0;i<12;i++){
	sign:	printf("Ҫ���뼸�µ����۶");
			m=0;
			scanf("%d",&m);
			if(m<0||m>12){
				printf("����������������룡\n");
				goto sign;
			}
			else if(m==0)
			{
				break;
			}
			else{
				h=m-1;
				printf("������%d�����۶",m);
				scanf("%f", &sales[h]);
				total+=sales[h];
			}
		}
	case 0:
		AddOne(no, name, total, sales);
		break;
	default:
		printf("�����ָ��ԣ�\n");
	}
}
//���һ������Ա��Ϣ
void AddOne(char no[12], char name[40], float total, float sales[12])
{
	int i;
	Linklist* Target = malloc(sizeof(Linklist));
	if (NULL == no || NULL == name)
	{
		printf("������Ϣ�������\n");
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
	printf("��ӳɹ���%f\n",total);
	system("pause");
	system("cls");
}
//���۶��ѯ��ͳ�ƣ� 
void query()
{
	Linklist* Target = NULL;
	char no[12] = { '\0' };
	printf("������Ҫ��ѯ������Ա���ţ�\n");
	scanf("%s", no);
	system("cls");
	Target = query1(no);
	if (NULL != Target)
	{
		printf("����Ա���ţ�%s\n����Ա������%s\n��������۶�%.2f\n", Target->no, Target->name, Target->total);
		int i;
		for (i = 0;i < 12;i++)
		{
			printf("%d�����۶%.2f\n", i+1 , Target->sales[i]);
		}
	}
	system("pause");
}
//���۶��޸�
void alter()
{
	Linklist* Target = NULL;
	int Ad = -1;
	float num;
	char no[12] = { '\0' };
	system("cls");
	printf("������Ҫ�޸ĵ�����Ա���ţ�\n");
	scanf("%s", no);
	system("cls");
	Target = query1(no);
	if (NULL != Target)
	{
		while (1)
		{
			printf("������Ա��ǰ��Ϣ���£�\n����Ա���ţ�%s\n����Ա������%s\n��������۶�%.2f\n", Target->no, Target->name, Target->total);
			int i; 
			for (i = 0;i < 12;i++)
			{
				printf("%d�����۶%.2f\n", i + 1, Target->sales[i]);
			}
			printf("������Ҫ�޸ĵ����۶��·ݣ����޸�һ������1���ɡ�����0�ɷ������˵�������");
			scanf("%d", &Ad);
			if (Ad == 0)
				Sales_management_system();
			else if (Ad > 0 && Ad < 13)
			{
				printf("��������ֵ��");
				scanf("%f", &num);
				Target->total = Target->total - Target->sales[Ad - 1] + num;
				Target->sales[Ad - 1] = num;
				
				printf("�޸ĳɹ�\n");
				system("pause");
				system("cls");
			}
			else
			{
				printf("������0-12������");
				system("pause");
				system("cls");
			}
				
		}
		
	}
	system("pause");
}
//������Ϣɾ��
void detele()
{
	Linklist* Target = NULL;
	int Ad = -1;
	char no[12] = { '\0' };
	printf("������Ҫɾ��������Ա���ţ�\n");
	scanf("%s", no);
	system("cls");
	Target = query1(no);
	if (NULL != Target)
	{
		printf("������Ա��ǰ��Ϣ���£�\n����Ա���ţ�%s\n����Ա������%s\n��������۶�%.2f\n", Target->no, Target->name, Target->total);
		int i;
		for (i = 0;i < 12;i++)
		{
			printf("%d�����۶%.2f\n", i + 1, Target->sales[i]);
		}
		printf("\t1��ȷ��ɾ��\n\t2��ȡ������������\n\t0���������˵�\n������ָ�");
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
			printf("�����ָ��ԣ�\n");
		}

	}
	system("pause");
}
/*��ѯ���ܺ���*/
void count()
{
	float year_total = 0;
	float month_total[12] = { 0 };
	float max, min;
	int MinMonth = 0, MaxMonth = 0;
	Linklist* Target = Head;
	//�ж������Ƿ�Ϊ��
	if (NULL == Head || NULL == End)
	{
		printf("����Ϊ�գ�\n");
		return NULL;
	}
	//��������
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
	printf("��ǰ��������۶%.2fԪ\n", year_total);
	for (i = 0;i < 12;i++)
	{
		printf("��ǰ���%d�������۶%.2fԪ\n", i + 1, month_total[i]);
	}
	printf("%d��Ϊ��ǰ������۶�����£�%.2fԪ\n", MaxMonth, max);
	printf("%d��Ϊ��ǰ������۶���С�£�%.2fԪ\n", MinMonth, min);
	system("pause");
}
//���˵� 
void menu()
{
	system("cls");
	printf("******************C���Կγ����******************\n");
	printf("                                                    \n");
	printf("           ��1�⣺        ������                  \n");
	printf("           ��2�⣺        ��ɽ��Ϸ                 \n");
	printf("           ��3�⣺        ���۹���ϵͳ               \n");
	printf("             0:           �˳�ϵͳ                 \n");
	printf("                                                    \n");
	printf("*************************************************\n");
}
//���۹���˵� 
void Salemenu()
{
	printf("******************�˵�*****************\n");
	printf("1��¼������Ա��Ϣ        2����ѯ����Ա��Ϣ\n");
	printf("3���޸�����Ա��Ϣ        4��ɾ������Ա��Ϣ\n");
	printf("5��ͳ������Ա��Ϣ        0���˳�\n");
	printf("**************************************\n");
	printf("������0~5������" );
}


//������
int fdyear(int a)//
{
	if(a%400==0||a%100!=0&&a%4==0)//�ж��Ƿ�Ϊ����
		return(a-1+a/4-a/100+a/400)%7;//����Ԫ��
	else
		return(a+a/4-a/100+a/400)%7;//ƽ��Ԫ��
}

void Calender() {
	system("cls"); 
	int Ad=-1;
	int n,i,y,fdmonth[12];
	printf("****************��ӭʹ��������****************\n");
	printf("��������ݣ�");
	scanf("%d",&y);
	if(y<1)
		printf("������Ǵ�����ݡ�\n");
	else
	{
		if(y%400==0||y%100!=0&&y%4==0)
			printf("%d������",y);
		else
			printf("%d��������",y);
		n=(y%400==0||y%100!=0&&y%4==0);
		char *month[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
		char week[]= "�� һ �� �� �� �� ��";
		int daysmonth[12]={31,28+n,31,30,31,30,31,31,30,31,30,31};//�������ÿ���µ�������
		printf("                         %d�������\n\n", y);
		for(i=0;i<12;i++)  //�������ÿ���µĵ�һ��
		{
			static int day=0;
			fdmonth[i]=(day+fdyear(y))%7;
			day=day+daysmonth[i];
		}
		for(i=0;i<12;i+=3)  //ÿ�����²��Ŵ�ӡ
		{
			printf("               %s                       %s                      %s\n", month[i],month[i+1],month[i+2]);
			char s[] = "    ";
			printf("%-3s %s %-3s %s %-3s %s\n",s,week,s,week,s,week);
			int j;
			for(j=0;j<6;j++)          //ÿ�������ռ��
			{
				int d; 
				for(d=i;d<i+3;d++)    //�����²��Ŵ�ӡÿһ��
				{
					printf("     ");
					int n;
					for(n=0;n<7;n++)   //ÿһ������
					{
						int k=1-fdmonth[d]+n+7*j;
						if(k<1||k>daysmonth[d])
							printf("   ");
						else
							printf("%-3d", k);  //������������
					}
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	printf("\n\t1�����²�ѯ\n\t0���������˵�\n");
	scanf("%d", &Ad);
	switch (Ad)
	{

	case 1:
		//������
		Calender();
		break;
	case 0:
		//���˵�
		break;
	default:
		printf("�����ָ��ԣ�\n");
	}
}

//��ɽ��Ϸ
int Mountain()
{
	system("cls");
	int Ad=-1; 
	int m,n,x,y,ps=0,pc=0,game=1;
    printf("��ɽ��Ϸ\n");
    printf("��Ϸ��ʼ\n");
	printf("����0�˳���Ϸ\n");
    for(;;)
    {
        printf("No.%2d game\n", game++);
        printf("����������������������������������������\n");
        printf("���ж�����ɽ��");
        scanf("%d", &m);//����ɽ������
        if(!m)
            break;
        printf("ÿ������������ɽ?");
		do
		{
			scanf("%d", &n);//��������İ�ɽ��
		}
		while(n>m||n<1);
		do
		{
            printf("��ϣ������ɽ����?");
            scanf("%d",&x);
            if(x<1 || x>n ||x>m)//�жϰ�ɽ���Ƿ����Ҫ��
            {
                printf("������Ҫ�����ٴ�����!\n");
                continue;
            }
            m-=x;
            printf("���ڻ�ʣ��%d��ɽ.\n", m);
            if(!m)
            {
                printf("������������Ӯ�ˣ������ˡ�����������\n\n");
				ps++;
            }
            else
            {
                y=(m-1)%(n+1);  //�����Ѱ�ɽ��
                if(!y)
                    y=1;
                m-=y;
                printf("���������� %d ��ɽ.\n", y);
                if(m)
                    printf(" ���ڻ�ʣ��%d��ɽ.\n", m);
                else
                {
                    printf("���������������ˣ���Ӯ�ˡ�������������\n\n");
                    pc++;
                }
            }
        }
        while(m);
    }
    /*��ӡ���*/
    printf("�ܹ���������Ϸ%d.\n", ps+pc);
    printf("��ĵ÷���ʤ��%d������%d.\n", pc, ps);
    printf("�ҵĵ÷���ʤ��%d������%d.\n", ps, pc);
    printf("\n\t1����������\n\t0���������˵�\n");
    scanf("%d", &Ad);
	switch (Ad)
	{

	case 1:
		//��ɽ��Ϸ 
		Mountain();
		break;
	case 0:
		//���˵�
		break;
	default:
		printf("�����ָ��ԣ�\n");
	}
}

//���۹���ϵͳ
void Sales_management_system()
{
	int iAd = -1; 
	while (1)
	{
		system("cls");
		Salemenu();
		printf("������˵�ָ�");
		scanf("%d", &iAd);
		if(iAd==0)
		{//�˳����۹���ϵͳ���������˵�
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
	    		printf("�����ָ��ԣ�\n");
			}
		}
	}
}
//�����¼ 
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
/*������*/
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
		printf("�������������Ŀ��");
		scanf("%d", &iAd);
		switch (iAd)
		{

		case 1:
			//������
			Calender();
			break;
		case 2:
			//��ɽ��Ϸ
			Mountain();
			break;
		case 3:
			//���۹���ϵͳ
			Sales_management_system();
			break;
		case 0:
			exit(1);
		default:
			printf("�����ָ��ԣ�\n");
		}
	}
}

