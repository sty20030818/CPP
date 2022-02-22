#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    node *next;
}Node;

int n,m;

Node* init() //生成头节点
{
    Node* p = (Node*) malloc (sizeof(Node));
    p ->data = -1;     //data为-1
    p ->next = NULL;   //next为NULL
    return p;
}

void create(Node* head,int n)
{
    //前驱节点pre用于串接新节点p
    Node* pre = head;
    for(int i = 1; i <= n; i ++)
    {
        Node* p = (Node*) malloc (sizeof(Node));
        p ->data = i;
        pre ->next = p;
        p ->next = NULL;
        pre = pre ->next;  //pre = p
    }
    //将最后一个节点和头节点串接起来，构成一个闭环
    pre ->next = head ->next;
}

void del(Node* head,int *l)
{
    //前驱节点pre用于删除节点p
    Node *pre = head;
    Node* p = pre ->next;
    //执行m-1次，指针p只想要删除的节点
    for(int i = 0; i < m - 1; i ++)
    {
        pre ->next = p ->next;
        *l = p ->data;
        free(p);
        return;
    }
}

int main()
{
    cin >> n >> m;
    Node* head = init();
    create(head,n);
    int l;
    for(int i = 0; i < n; i ++)
    {
        del(head,&l);
        cout << l << " ";
    }
    return 0;
}
