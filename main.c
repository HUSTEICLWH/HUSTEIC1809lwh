#include <stdio.h>
#include <stdlib.h>
#define n 4
#define Maxsize 100
struct stack{
    int data[Maxsize];
    int top;
}s;
void init()
{
    s.top=-1;
}
int push(int x)
{
    if(s.top==Maxsize-1) return -1;
    else{
        s.top++;
        s.data[s.top]=x;
    }
}
int pop()
{
    int x;
    if(s.top==-1) return -1;
    else{
        x=s.data[s.top];
        s.top--;
    }
    return x;
}
int isempty()
{
    if(s.top==-1) return 1;
    else return 0;
}
int main()
{
    init();
    int path[n];
    int i=0,pos=0;
    getit(pos,path,i);
}
void getit(int pos,int path[],int i)
{
    int temp;
    if(pos<n){
        push(pos+1);
        getit(pos+1,path,i);
        pop();
    }
    if(isempty()==0){
        temp=pop();
        path[i++]=temp;
        getit(pos,path,i);
        push(temp);
    }
    if(isempty()==1&&pos==n)
    {
        for(int j=0;j<i;printf("%d\t",path[j++]));
        printf("\n");
    }
}
