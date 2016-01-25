#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#include <stdlib.h>
using namespace std;

//���������c��,�C�Ӥ����u���@��ItemKey���
typedef struct
{
    int ItemKey;
    /* ���|��������L��� , if need */
} element;

//���|�����c��
#define MaxStackSize 100
typedef struct
{
    element stack[MaxStackSize];
    int top;
} StackADT;

bool isEmpty(StackADT S)
{
    if(S.top<0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull(StackADT S)
{
    if(S.top>=MaxStackSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(StackADT *S,element item)
{
    if(isFull(*S)==true)
    {
        cout<<"���|�w��"<<endl;
        exit(1);
    }
    else
    {
        S->stack[++S->top]=item;
        //S->top++;
        //S->stack[top]=item;
    }
}

element pop(StackADT *S){
    //int temp=S->top;
    //S->top--;
    if(isEmpty(*S)==true)
    {
        cout<<"���|�w��"<<endl;
        exit(1);
    }
    else{
        return S->stack[S->top--];
        //return S->stack[temp];
    }
}


#endif // STACK_H_INCLUDED
