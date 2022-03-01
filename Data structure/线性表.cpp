#include<bits/stdc++.h>
#define MAXLEN 100
	typedef int DataType;
	typedef struct
	{
		DataType data[MAXLEN];
		int Length;
	}SeqList;

	SeqList L;

	void InitList(SeqList *L)
	{
		L->Length=0;
	}

	void CreateList(SeqList *L,int n)
	{
		int i;
		printf("������%d��������",n);
		for(i=0;i<n;i++)
			scanf("%d",&L->data[i]);
		L->Length=i;
	}

	int GetElem(SeqList *L,int i,DataType *x)
	{
		if(i<1||i>L->Length)
			return 0;
		else
		{
			*x=L->data[i-1];
			return 1;
		}
	}

	int Locate(SeqList *L,DataType x)
	{
		int i=0;
		while(i<L->Length && L->data[i]!=x)
			i++;
		if(i>=L->Length)
			return 0;
		else
			return i+1;
	}
	int InsElem(SeqList *L,int i,DataType x)
	{
		int j;
		if(L->Length>=MAXLEN)
		{
			printf("˳���������");
			return -1;
		}
		if(i<1||i>L->Length+1)
		{
			printf("����λ�ó���");
			return 0;
		}
		if(i==L->Length+1)
		{
			L->data[i-1]=x;
			L->Length++;
			return 1;
		}
		for(j=L->Length-1;j>=i-1;j--)
		{
			L->data[j+1]=L->data[j];
			L->data[i-1]=x;
			L->Length++;
			return 1;
		}
	}
	int DelElem (SeqList *L,int i,DataType *x)
	{
		int j;
		if(L->Length==0)
		{
			printf("˳���Ϊ�գ�");
			return 0;
		}
		if(i<1||i>L->Length)
		{
			printf("�����ڵ�i��Ԫ��");
			return 0;
		}
		*x=L->data[i-1];
		for(j=i;j<L->Length;j++)
			L->data[j-1]=L->data[j];
		L->Length--;
		return 1;
	}
	void DispList(SeqList *L)
	{
		int i;
		for(i=0;i<L->Length;i++)
			printf("%5d ",L->data[i]);
	}
	void Menu()
	{
		printf("\n               ˳�����ֲ���");
		printf("\n===============================================");
		printf("\n|            1--����˳���                    |");
		printf("\n|            2--����Ԫ��                      |");
		printf("\n|            3--ɾ��Ԫ��                      |");
		printf("\n|            4--��λ�ò���Ԫ��                |");
		printf("\n|            5--��Ԫ��ֵ�������ڱ��е�λ��    |");
		printf("\n|            6--��˳���ĳ���                |");
		printf("\n|            0--����                          |");
		printf("\n������˵��ţ�0-6����");
	}
	main()
	{
		SeqList L;
		DataType x;
		int n,i,loc;
		char ch1,ch2,a;
		ch1='y';
		while(ch1=='y'||ch1=='Y')
		{
			Menu();
			scanf("%c",&ch2);
			getchar();
			switch(ch2)
			{
				case '1':
					InitList(&L);
					printf("�����뽨�����Ա������");
					scanf("%d",&n);
					CreateList(&L,n);
					printf("���������Ա�Ϊ��");
					DispList(&L);
					break;
				case '2':
					printf("������Ҫ�����λ�ã�");
					scanf("%d",&i);
					printf("������Ҫ�����Ԫ��ֵ");
					scanf("%d",&x);
					if(InsElem(&L,i,x))
					{
						printf("�ѳɹ��ڵ�%d��λ���ϲ���&d�����������Ա�Ϊ��\n",i,x);
						DispList(&L);
					}
					else
						printf("�������Ĳ�������");
					break;
				case '3':
					printf("������Ҫɾ����Ԫ��ֵ��");
					scanf("%d",&i);
					if(DelElem(&L,i,&x))
					{
						printf("�ѳɹ��ڵ�%d��λ����ɾ��&d��ɾ��������Ա�Ϊ��\n",i,x);
						DispList(&L);
					}
					else
						printf("\n����ɾ���Ĳ�������");
					break;
				case '4':
					printf("������Ҫ�鿴���е�Ԫ��λ�ã���1��ʼ����");
					scanf("%d",&i);
					if(GetElem(&L,i,&x))
						printf("��ǰ���Ա��%d��Ԫ��ֵΪ��%d",i,x);
					else
						printf("�����λ������");
					break;
				case '5':
					printf("������Ҫ���ҵ�Ԫ��ֵΪ��");
					scanf("%d",&x);
					loc=Locate(&L,x);
					if(loc)
						printf("���ҵ�Ԫ��ֵΪ%d��λ��Ϊ��",x,loc);
					else
						printf("�ñ����޴�Ԫ�أ�");
					break;
				case '6':
					printf("��ǰ���Ա���Ϊ��%d",L.Length);
					break;
				case '0':
					ch1='n';
					break;
				default:
					printf("������������0~6����ѡ��");
			}
			if(ch2!='0')
			{
				printf("\n���س�������������������ز˵���\n");
				a=getchar();
				if(a!='\xA')
				{
					getchar();
					ch1='n';
				}
			}
		}
	}


