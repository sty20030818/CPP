#include <bits/stdc++.h>

#define MAXLEN 100

typedef int DataType;
typedef struct
{
    DataType date[MAXLEN];
    int Length;
}SeqList;

SeqList L;

void InitList(SeqList *L)
{
    L ->Length = 0;
}

int GetElem(SeqList *L,int i,DataType *x)
{
    if(i < 1 || i > L ->Length)
        return 0;
    else
    {
        *x = L ->date[i - 1];
        return 1;
    }
}

int Locate(SeqList *L,DataType x)
{
    int i = 0;
    while(i < L ->Length && L ->date[i] != x)
        i ++;
    if(i >= L ->Length)
        return 0;
    else
        return i + 1;
}

int InsElem(SeqList *L,int i,DataType x)
{
    int j;
    if(L ->Length >= MAXLEN)
    {
        printf("顺序表已满！");
        return -1;
    }
}

int main()
{

}
