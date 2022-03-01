#include <stdio.h>
#include <malloc.h>
typedef int DataType;
typedef struct linknode
{
    DataType date;
    struct  linknode *next;

}LinkList;

LinkList *InitList()
{
    LinkList *head;
    head = (LinkList*) malloc (sizeof(LinkList));
    head->next = NULL;
    return head;
}

void CreateListH(LinkList *head,int n)
{           //头插法
    LinkList *s;
    int i;
    printf("请输入%d个整数:",n);
    for(i = 0; i < n; i ++)
    {
        s = (LinkList *) malloc (sizeof(LinkList));
        scanf("%d",&s->date);
        s->next = head->next;
        head->next = s;
    }
    printf("建立链表操作成功!");
}

void CreateListL(LinkList *head,int n)
{       //尾插法
    LinkList *s,*last;
    int i;
    last = head;
    printf("请输入%d个整数:",n);
    for(i = 0; i < n; i ++)
    {
        s = (LinkList *) malloc (sizeof(LinkList));
        scanf("%d",&s->date);
        s->next = NULL;
        last->next = s;
        last = s;
    }
    printf("建立链表操作成功!");
}

int LengthList(LinkList *head)
{
    LinkList *p = head->next;
    int j = 0;
    while(p != NULL)
    {
        p = p->next;
        j++;
    }
    return j;
}

void Locate(LinkList *head,DataType x)
{
    int j = 1;
    LinkList *p;
    p = head->next;
    while(p != NULL && p->date != x)
    {
        p = p->next;
        j++;
    }
    if(p != NULL) printf("在表的第%d位找到值为%d的结点",j,x);
    else printf("未找到值为%d的结点");
}

void SearchList(LinkList *head,int i)
{
    LinkList *p;
    int j = 0;
    p = head;
    if(i > LengthList(head))
        printf("位置错误,链表中没有该位置");
    while(p->next != NULL && j < i)
    {
        p = p->next;
        j++;
    }
    if(j == i) printf("在第%d为上的元素值为%d",i,p->date);
}

void InsList(LinkList *head,int i,DataType x)
{
    int j = 0;
    LinkList *p,*s;
    p = head;
    while(p->next != NULL && j < i - 1)
    {
        p = p->next;
        j ++;
    }
    if(p != NULL)
    {
        s = (LinkList *) malloc (sizeof(LinkList));
        s->date = x;
        s->next = p->next;
        p->next = s;
        printf("插入元素成功");
    }
    else printf("插入元素失败");
}

void DelList(LinkList *head,int i)
{
    LinkList *p;
    p = head->next;
    while(p != NULL)
    {

    }
}
