// #include<bits/stdc++.h>
// #define MAXLEN 100
// 	typedef int DataType;
// 	typedef struct   //结构体
// 	{
// 		DataType data[MAXLEN];
// 		int Length;
// 	}SeqList;

// 	SeqList L;

// 	void InitList(SeqList *L)
// 	{
// 		L->Length=0;
// 	}

// 	void CreateList(SeqList *L,int n)
// 	{
// 		int i;
// 		printf("请输入%d个整数：",n);
// 		for(i=0;i<n;i++)
// 			scanf("%d",&L->data[i]);
// 		L->Length=i;
// 	}

// 	int GetElem(SeqList *L,int i,DataType *x)
// 	{
// 		if(i<1||i>L->Length)
// 			return 0;
// 		else
// 		{
// 			*x=L->data[i-1];
// 			return 1;
// 		}
// 	}

// 	int Locate(SeqList *L,DataType x)
// 	{
// 		int i=0;
// 		while(i<L->Length && L->data[i]!=x)
// 			i++;
// 		if(i>=L->Length)
// 			return 0;
// 		else
// 			return i+1;
// 	}

// 	int InsElem(SeqList *L,int i,DataType x)
// 	{
// 		int j;
// 		if(L->Length>=MAXLEN)
// 		{
// 			printf("顺序表已满！");
// 			return -1;
// 		}
// 		if(i<1||i>L->Length+1)
// 		{
// 			printf("插入位置出错！");
// 			return 0;
// 		}
// 		if(i==L->Length+1)
// 		{
// 			L->data[i-1]=x;
// 			L->Length++;
// 			return 1;
// 		}
// 		for(j=L->Length-1;j>=i-1;j--)
// 		{
// 			L->data[j+1]=L->data[j];
// 			L->data[i-1]=x;
// 			L->Length++;
// 			return 1;
// 		}
// 	}
// 	int DelElem (SeqList *L,int i,DataType *x)
// 	{
// 		int j;
// 		if(L->Length==0)
// 		{
// 			printf("顺序表为空！");
// 			return 0;
// 		}
// 		if(i<1||i>L->Length)
// 		{
// 			printf("不存在第i个元素");
// 			return 0;
// 		}
// 		*x=L->data[i-1];
// 		for(j=i;j<L->Length;j++)
// 			L->data[j-1]=L->data[j];
// 		L->Length--;
// 		return 1;
// 	}
// 	void DispList(SeqList *L)
// 	{
// 		int i;
// 		for(i=0;i<L->Length;i++)
// 			printf("%5d ",L->data[i]);
// 	}
// 	void Menu()
// 	{
// 		printf("\n               顺序表各种操作");
// 		printf("\n===============================================");
// 		printf("\n|            1--建立顺序表                    |");
// 		printf("\n|            2--插入元素                      |");
// 		printf("\n|            3--删除元素                      |");
// 		printf("\n|            4--按位置查找元素                |");
// 		printf("\n|            5--按元素值查找其在表中的位置    |");
// 		printf("\n|            6--求顺序表的长度                |");
// 		printf("\n|            0--返回                          |");
// 		printf("\n请输入菜单号（0-6）：");
// 	}
// 	main()
// 	{
// 		SeqList L;
// 		DataType x;
// 		int n,i,loc;
// 		char ch1,ch2,a;
// 		ch1='y';
// 		while(ch1=='y'||ch1=='Y')
// 		{
// 			Menu();
// 			scanf("%c",&ch2);
// 			getchar();
// 			switch(ch2)
// 			{
// 				case '1':
// 					InitList(&L);
// 					printf("请输入建立线性表个数：");
// 					scanf("%d",&n);
// 					CreateList(&L,n);
// 					printf("建立的线性表为：");
// 					DispList(&L);
// 					break;
// 				case '2':
// 					printf("请输入要插入的位置：");
// 					scanf("%d",&i);
// 					printf("请输入要插入的元素值");
// 					scanf("%d",&x);
// 					if(InsElem(&L,i,x))
// 					{
// 						printf("已成功在第%d的位置上插入&d，插入后的线性表为：\n",i,x);
// 						DispList(&L);
// 					}
// 					else
// 						printf("输入插入的参数错误！");
// 					break;
// 				case '3':
// 					printf("请输入要删除的元素值：");
// 					scanf("%d",&i);
// 					if(DelElem(&L,i,&x))
// 					{
// 						printf("已成功在第%d的位置上删除&d，删除后的线性表为：\n",i,x);
// 						DispList(&L);
// 					}
// 					else
// 						printf("\n输入删除的参数有误！");
// 					break;
// 				case '4':
// 					printf("请输入要查看表中的元素位置（从1开始）：");
// 					scanf("%d",&i);
// 					if(GetElem(&L,i,&x))
// 						printf("当前线性表第%d个元素值为：%d",i,x);
// 					else
// 						printf("输入的位置有误！");
// 					break;
// 				case '5':
// 					printf("请输入要查找的元素值为：");
// 					scanf("%d",&x);
// 					loc=Locate(&L,x);
// 					if(loc)
// 						printf("查找的元素值为%d的位置为：",x,loc);
// 					else
// 						printf("该表中无此元素！");
// 					break;
// 				case '6':
// 					printf("当前线性表长度为：%d",L.Length);
// 					break;
// 				case '0':
// 					ch1='n';
// 					break;
// 				default:
// 					printf("输入有误，请在0~6进行选择！");
// 			}
// 			if(ch2!='0')
// 			{
// 				printf("\n按回车键继续，按任意键返回菜单！\n");
// 				a=getchar();
// 				if(a!='\xA')
// 				{
// 					getchar();
// 					ch1='n';
// 				}
// 			}
// 		}
// 	}


#include<bits/stdc++.h>
#define N 100
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
		printf("请输入%d个整数：",n);
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
			printf("顺序表已满！");
			return -1;
		}
		if(i<1||i>L->Length+1)
		{
			printf("插入位置出错！");
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
	int DelElem (SeqList *L,DataType *k)
	{
		int j,f;
		for(j=1;j<L->Length;j++)
		{
			if(L->data[j]==*k)
				{
					for(f=j;f<L->Length;f++)
						L->data[f-1]=L->data[f];
					L->Length--;
				}
		}
		return 1;
	}
	void DispList(SeqList *L)
	{
		int i;
		for(i=0;i<L->Length;i++)
			printf("%5d ",L->data[i]);
	}
	int findmin(SeqList *L,DataType *min)
	{
		*min=L->data[0];
		for(int i=0;i<L->Length;i++)
		{
			if(*min>L->data[i])
			{
				*min=L->data[i];
			}
		}
		return 1;
	}
	int findmax(SeqList *L,DataType *max)
	{
		*max=L->data[0];
		for(int i=0;i<L->Length;i++)
		{
			if(*max<L->data[i])
			{
				*max=L->data[i];
			}
		}
		return 1;
	}
	int nixu (SeqList *L,DataType *o)
	{
		int l=L->Length/2;
		for(int i=0;i<l;i++)
		{
			*o=L->data[i];
			L->data[i]=L->data[L->Length-i-1];
			L->data[L->Length-i-1]=*o;
		}
		return 1;
	}

	void Menu()
	{
		printf("\n               顺序表各种操作");
		printf("\n===============================================");
		printf("\n|            1--建立顺序表                    |");
		printf("\n|            2--插入元素                      |");
		printf("\n|            3--删除x的所有元素               |");
		printf("\n|            4--按位置查找元素                |");
		printf("\n|            5--按元素值查找其在表中的位置    |");
		printf("\n|            6--求顺序表的长度                |");
		printf("\n|            7--查找顺序表最小值              |");
		printf("\n|            8--查找顺序表最大值              |");
		printf("\n|            9--线性表逆序                    |");
		printf("\n|            0--返回                          |");
		printf("\n请输入菜单号（0-9）：");
	}
	main()
	{
		SeqList L;
		DataType x,min,max,g[N],e,o,i;
		int n,k,loc,m;
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
					printf("请输入建立线性表个数：");
					scanf("%d",&n);
					CreateList(&L,n);
					printf("建立的线性表为：");
					DispList(&L);
					break;
				case '2':
					printf("请输入要插入的位置：");
					scanf("%d",&k);
					printf("请输入要插入的元素值");
					scanf("%d",&x);
					if(InsElem(&L,k,x))
					{
						printf("已成功在第%d的位置上插入&d，插入后的线性表为：\n",k,x);
						DispList(&L);
					}
					else
						printf("输入插入的参数错误！");
					break;
				case '3':
					printf("请输入要删除的元素值：");
					scanf("%d",&k);
					if(DelElem(&L,&k))
					{
						DispList(&L);
					}
					else
						printf("\n输入删除的参数有误！");
					break;
				case '4':
					printf("请输入要查看表中的元素位置（从1开始）：");
					scanf("%d",&k);
					if(GetElem(&L,k,&x))
						printf("当前线性表第%d个元素值为：%d",i,x);
					else
						printf("输入的位置有误！");
					break;
				case '5':
					printf("请输入要查找的元素值为：");
					scanf("%d",&x);
					loc=Locate(&L,x);
					if(loc)
						printf("查找的元素值为%d的位置为：",x,loc);
					else
						printf("该表中无此元素！");
					break;
				case '6':
					printf("当前线性表长度为：%d",L.Length);
					break;
				case '7':
					if(findmin(&L,&min))
						printf("当前线性表最小值为：%d",min);
					break;
				case '8':
					if(findmax(&L,&max))
						printf("当前线性表最大值为：%d",max);
					break;
				case '9':
					if(nixu(&L,&o))
							for(int i=0;i<L.Length;i++)
								printf("%d ",L.data[i]);
					break;
				case '0':
					ch1='n';
					break;
				default:
					printf("输入有误，请在0~6进行选择！");
			}
			if(ch2!='0')
			{
				printf("\n按回车键继续，按任意键返回菜单！\n");
				a=getchar();
				if(a!='\xA')
				{
					getchar();
					ch1='n';
				}
			}
		}
		return 0;
	}
