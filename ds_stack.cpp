#include "stack.h"
//#include <stdio.h>

void PrintStack(StackADT *S)
{
    int i;
    cout<<"堆疊的top index值目前為"<<S->top<<",堆疊內容:"<<endl;

    if(S->top<0)
    {
        cout<<"堆疊已空"<<endl;
        return;
    }
    cout<<"     |   :   |"<<endl;
    cout<<"     ---------"<<endl;

    for(int i=S->top; i>=0; i--)
    {
        cout<<"S["<<i<<"]"<<"|    "<< S->stack[i].ItemKey <<"    |"<<endl;
        //printf("S[%d] |  %2d   |\n",i,S->stack[i]);
        cout<<"     ---------"<<endl;
    }
}

int main()
{
    element Item;
    int i;
    StackADT S1;
    char ch='I';

    S1.top=-1; // 初始化

    Item.ItemKey=5;
    push(&S1,Item);
    push(&S1,Item);
    push(&S1,Item);
    PrintStack(&S1);
    pop(&S1);
    pop(&S1).ItemKey;
    PrintStack(&S1);

    return 0;
}
