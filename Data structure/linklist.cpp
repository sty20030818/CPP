/*���Ա���ϵͳ*/
#include <stdio.h>
#include <malloc.h>
typedef  int  DataType;         /*����DataTypeΪint����*/
typedef  struct  linknode       /*������洢����*/
{
   DataType       data;         /*�������������*/
   struct  linknode   *next;    /*�������ָ����*/
} LinkList;

LinkList  *InitList()
{   /*��ʼ��������*/
    LinkList  *head;
    head=(LinkList*)malloc(sizeof(LinkList)); /*��̬����һ�����ռ�*/
    head->next=NULL;
    return head;                    /*ͷ���Lָ����Ϊ�գ���ʾ������*/
}

void CreateListH(LinkList  *head,int n)
{   /*ͷ�巨����������*/
	LinkList  *s;
    int i;
    printf("������%d��������",n);
    for(i=0;i<n;i++)
    {  s=(LinkList *)malloc(sizeof(LinkList));    /*�����½��*/
       scanf("%d",&s->data);                      /*�����½���������*/
       s->next=head->next;              /*���½���ָ������ͷ����ָ����*/
       head->next=s;                    /*���½�����ͷ���֮��*/
    }
    printf("������������ɹ���");
}

void CreateListL(LinkList  *head,int n)
{  /*β�巨����������*/
   LinkList  *s,*last;
   int i;
   last=head;                     /*lastʼ��ָ��β��㣬��ʼʱָ��ͷ���*/
   printf("������%d��������",n);
   for(i=0;i<n;i++)
   {
      s=(LinkList *) malloc(sizeof(LinkList));  /*�����½��*/
      scanf("%d",&s->data);            /*�����½���������*/
      s->next=NULL;           /*���½���ָ����Ϊ��*/
      last->next=s;           /*���½������β*/
      last=s;                 /*��lastָ��ָ���β���*/
   }
   printf("������������ɹ���");
}

int  LengthList(LinkList  *head)
{   /*�������Ⱥ���*/
	LinkList  *p=head->next;
	int j=0;
	while(p!=NULL)  /*��p��ָ������βʱ*/
    {  p=p->next;
       j++;
    }
    return  j;
}

void Locate(LinkList  *head,DataType x)
{  /*�������в���ֵΪx��Ԫ��λ��*/
   int  j=1;                       /*������*/
   LinkList  *p;
   p=head->next;
   while(p!=NULL  &&  p->data!=x)  /*���Ҽ���λ*/
   {  p=p->next;
   	  j++;
   }
   if(p!=NULL)
      printf("�ڱ�ĵ�%dλ�ҵ�ֵΪ%d�Ľ�㣡",j,x);
   else
      printf("δ�ҵ�ֵΪ%d�Ľ�㣡",x);
}

void SearchList(LinkList *head,int i)
{  /*�������а�λ�ò���Ԫ��*/
   LinkList  *p;
   int j=0;
   p=head;                          /*pָ�������ͷ���*/
   if(i>LengthList(head))
      printf("λ�ô���������û�и�λ�ã�");
   while(p->next!=NULL && j<i)
   {
      p=p->next;
      j++;
   }
   if(j==i)                     /*�ж������������Ƿ����*/
      printf("�ڵ�%dλ�ϵ�Ԫ��ֵΪ%d��",i,p->data);
}

void InsList(LinkList  *head, int i, DataType x)
{  /*��λ�ò���Ԫ�غ���*/
   int j=0;
   LinkList  *p,*s;
   p=head;
   while(p->next!=NULL && j<i-1)  /*��λ�����*/
   {
      p=p->next;
      j++;
   }
   if(p!=NULL)        /*p��Ϊ�����½��嵽p��*/
   {
	   s=(LinkList *)malloc(sizeof(LinkList)); /*�����½��s*/
       s->data=x;                   /*������x�����½���������*/
       s->next=p->next;             /*���½��s��ָ������p������Ԫ������*/
       p->next=s;                   /*��p���½��s����*/
      printf("����Ԫ�سɹ���");
   }
   else
      printf("����Ԫ��ʧ��");
}

void DelList(LinkList  *head,int i)
{  /*��λ��ɾ��������Ԫ�غ���*/
   int j=0;
   DataType x;
   LinkList  *p=head,*s;
   while(p->next!=NULL && j<i-1)  /*��λ�����*/
   {
      p=p->next;
      j++;
   }
   if (p->next!=NULL && j==i-1)
   {
      s=p->next;                    /*qΪҪɾ�����*/
      x=s->data;                   /*��Ҫɾ�������ݷ���ָ�����x��*/
      p->next=s->next;              /*��p����ָ������q������Ԫ������*/
      free(s);
      printf("ɾ����%dλ�ϵ�Ԫ��%d�ɹ���",i,x);
   }
   else
      printf("ɾ�����λ�ô���ɾ��ʧ�ܣ�");
}

void DispList(LinkList *head)
{  /*��ʾ���������*/
   LinkList *p;
   p=head->next;
   while(p!=NULL)
   {
      printf("%5d",p->data);
      p=p->next;
   }
}

void  MenuLine()
{   /*��ʾ�˵��Ӻ���*/
	printf("\n                  ���Ա���ϵͳ");
    printf("\n =================================================");
    printf("\n|               1��������                        |");
    printf("\n|               2��������                        |");
    printf("\n|               3����ɾ��                        |");
    printf("\n|               4������λ�ò���                  |");
    printf("\n|               5������Ԫ��ֵ����                |");
    printf("\n|               6�������                      |");
    printf("\n|               0��������                        |");
    printf("\n =================================================");
    printf("\n������˵��ţ�0-6��:");
}

main()
{
   LinkList *head;
   DataType x;
   int i,n;
   char  ch1,ch2,a;
   ch1='y';
   while(ch1=='y'||ch1=='Y')
   {
         MenuLine();
   	   scanf("%c",&ch2);
   	   getchar();
   	   switch(ch2)
   	   {
   	  	   case  '1':
            head=InitList();
             printf("������Ҫ�������Ա�ĳ��ȣ�");
             scanf("%d",&n);
             CreateListL(head,n);  /*���ΪCreateListH(L);����ͷ�巨��������*/
             printf("����������Ա�Ϊ��\n");
             DispList(head);
             break;
         case  '2':
             printf("������Ҫ�����Ԫ��λ�ã�");
             scanf("%d",&i);
             getchar();
             printf("������Ҫ�����Ԫ��ֵ��");
             scanf("%d",&x);
             InsList(head,i,x);
             printf("����Ԫ��%d������Ա�Ϊ��\n",x);
             DispList(head);
             break;
         case  '3':
             printf("������Ҫɾ����Ԫ��λ�ã�");
             scanf("%d",&i);
             DelList(head,i);
             printf("ɾ����%dλ��Ԫ�غ�����Ա�Ϊ��\n",i);
             DispList(head);
             break;
         case  '4':
             printf("��������ҵ�Ԫ��λ�ã����ڵ���1����������");
             scanf("%d",&i);
             SearchList(head,i);
             break;
         case  '5':
             printf("��������ҵ�������");
             scanf("%d",&x);
             Locate(head,x);
             break;
         case  '6':
             printf("�����Ա�ĳ���Ϊ%d��",LengthList(head));
             MenuLine();
             break;
         case  '0':
             ch1='n';break;
         default:
             printf("��������������0-9����ѡ��");
   	  }
   	  if(ch2!='0')
   	  {   printf("\n���س�����������������������˵���\n");
   	  	  a=getchar();
   	  	  if(a!='\xA')
   	  	  {
   	  	  	 getchar();ch1='n';
   	  	  }
   	  }
   }
}




