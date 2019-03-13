#include <stdio.h>
#include <stdlib.h>
// 1.16
void sort(int a,int b,int c)
{
    int t;
    if(a<b){t=a,a=b,b=t;}
    if(a<c){t=a,a=c,c=t;}
    if(b<c){t=b,b=c,c=t;}
    printf("%d %d %d",a,b,c);
}
int main()
{
    int X,Y,Z;
    scanf("%d%d%d",&X,&Y,&Z);
    sort(X,Y,Z);
}

// 1.20
#include <stdio.h>
#include <stdlib.h>
float print(int n,float x)
{
    int i,a[n+1];
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
      float p=0;
      for(i=n;i>=0;i--)
      {
          p=x*p+a[i];
      }
      return p;
}
int main()
{
    int n;
    float x0;
    scanf("%d%f",&n,&x0);
    printf("%f",print(n,x0));
}                            //O(n)
