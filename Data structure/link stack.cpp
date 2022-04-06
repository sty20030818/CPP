//等于说，链表的头就是栈顶，因此在退栈的时候直接让指针后继就可以
//在进行新元素插入的时候让新建立的节点的指针后继指向栈顶指针就可以
#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

typedef int elementype;

typedef struct node{
	elementype data;
	struct node *next;
}stacknode, *linkstackptr;

typedef struct stack{
	linkstackptr top;		//栈顶指针
	int count;				//计数器
}Linkstack;

/* 若栈S为空栈，则返回TRUE，否则返回FALSE */
int stackempty(Linkstack S)
{
        if (S.count == 0)
                return 1;
        else
                return 0;
}

bool push(Linkstack *S, elementype e)		//入栈操作
{
	linkstackptr s = (linkstackptr)malloc(sizeof(stacknode));
	s -> data = e;
	s -> next = S -> top;		//把当前的栈顶赋值给新的元素的后继(指针的指向)
	S -> top = s;		//新的节点赋值给栈顶指针（即让新元素成为栈顶元素）
	S -> count++;
	return true;
}

int pop(Linkstack *s, elementype *e)		//出栈操作
{
	linkstackptr p;		//临时节点
	if(stackempty(*s))
		return 0;
	else
	{
		*e = s -> top -> data;
		p = s -> top;		//将栈顶指针交给p
		s -> top = s -> top -> next;	//使得栈顶指针下移一位
		free(p);		//因为节点被删除，所以要释放临时节点
		s -> count--;			//计数器减一个
		return 1;
	}
}

void visit(elementype p)
{
	printf("%d ", p);
}

bool traversestack(Linkstack s)
{
	linkstackptr p;
	p = s.top;
	while(p)
	{
		visit(p -> data);
		p = p -> next;
	}
	printf("\n");
	return true;
}

/*  构造一个空栈S */
bool InitStack(Linkstack *S)
{
        S -> top = (linkstackptr)malloc(sizeof(stacknode));
        if(!S -> top)
                return false;
        S -> top = NULL;
        S -> count = 0;
        return true;
}

/* 把S置为空栈 */
bool ClearStack(Linkstack *S)
{
        linkstackptr p,q;
        p = S -> top;
        while(p)
        {
                q = p;
                p = p -> next;
                free(q);		//对每一个节点进行释放
        }
        S -> count = 0;
        return true;
}

/* 返回S的元素个数，即栈的长度 */
int StackLength(Linkstack S)
{
        return S.count;
}

/* 若栈不空，则用e返回S的栈顶元素，并返回OK；否则返回ERROR */
int GetTop(Linkstack S,elementype *e)
{
        if (S.top == NULL)
                return 0;
        else
                *e = S.top -> data;
        return 1;
}

int main()
{
        int j;
        Linkstack s;
        int e;
        if(InitStack(&s) == true)
                for(j = 1;j <= 10;j++)
                        push(&s,j);
        printf("栈中元素依次为：");
        traversestack(s);
        pop(&s,&e);
        printf("弹出的栈顶元素 e=%d\n",e);
        printf("栈空否：%d(1:空 0:否)\n",stackempty(s));
        GetTop(s,&e);
        printf("栈顶元素 e=%d 栈的长度为%d\n",e,StackLength(s));
        ClearStack(&s);
        printf("清空栈后，栈空否：%d(1:空 0:否)\n",stackempty(s));

        return 0;
}
