//����˵�������ͷ����ջ�����������ջ��ʱ��ֱ����ָ���̾Ϳ���
//�ڽ�����Ԫ�ز����ʱ�����½����Ľڵ��ָ����ָ��ջ��ָ��Ϳ���
#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

typedef int elementype;

typedef struct node{
	elementype data;
	struct node *next;
}stacknode, *linkstackptr;

typedef struct stack{
	linkstackptr top;		//ջ��ָ��
	int count;				//������
}Linkstack;

/* ��ջSΪ��ջ���򷵻�TRUE�����򷵻�FALSE */
int stackempty(Linkstack S)
{
        if (S.count == 0)
                return 1;
        else
                return 0;
}

bool push(Linkstack *S, elementype e)		//��ջ����
{
	linkstackptr s = (linkstackptr)malloc(sizeof(stacknode));
	s -> data = e;
	s -> next = S -> top;		//�ѵ�ǰ��ջ����ֵ���µ�Ԫ�صĺ��(ָ���ָ��)
	S -> top = s;		//�µĽڵ㸳ֵ��ջ��ָ�루������Ԫ�س�Ϊջ��Ԫ�أ�
	S -> count++;
	return true;
}

int pop(Linkstack *s, elementype *e)		//��ջ����
{
	linkstackptr p;		//��ʱ�ڵ�
	if(stackempty(*s))
		return 0;
	else
	{
		*e = s -> top -> data;
		p = s -> top;		//��ջ��ָ�뽻��p
		s -> top = s -> top -> next;	//ʹ��ջ��ָ������һλ
		free(p);		//��Ϊ�ڵ㱻ɾ��������Ҫ�ͷ���ʱ�ڵ�
		s -> count--;			//��������һ��
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

/*  ����һ����ջS */
bool InitStack(Linkstack *S)
{
        S -> top = (linkstackptr)malloc(sizeof(stacknode));
        if(!S -> top)
                return false;
        S -> top = NULL;
        S -> count = 0;
        return true;
}

/* ��S��Ϊ��ջ */
bool ClearStack(Linkstack *S)
{
        linkstackptr p,q;
        p = S -> top;
        while(p)
        {
                q = p;
                p = p -> next;
                free(q);		//��ÿһ���ڵ�����ͷ�
        }
        S -> count = 0;
        return true;
}

/* ����S��Ԫ�ظ�������ջ�ĳ��� */
int StackLength(Linkstack S)
{
        return S.count;
}

/* ��ջ���գ�����e����S��ջ��Ԫ�أ�������OK�����򷵻�ERROR */
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
        printf("ջ��Ԫ������Ϊ��");
        traversestack(s);
        pop(&s,&e);
        printf("������ջ��Ԫ�� e=%d\n",e);
        printf("ջ�շ�%d(1:�� 0:��)\n",stackempty(s));
        GetTop(s,&e);
        printf("ջ��Ԫ�� e=%d ջ�ĳ���Ϊ%d\n",e,StackLength(s));
        ClearStack(&s);
        printf("���ջ��ջ�շ�%d(1:�� 0:��)\n",stackempty(s));

        return 0;
}
