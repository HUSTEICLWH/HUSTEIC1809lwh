
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
  int num;
  int password;
  struct node *next;
 }Josenode,*pnode;

 void Delete(pnode h,int n,int m){
     int i;
     pnode p,q;
     p=h;
     while(1){
         for(i=1;i<m;i++){
             p=p->next;
         }
         q=p;
         while(p->next!=q){
             p=p->next;
         }
         m=q->password;
         printf("out%d\n",q->num);
         p->next=q->next;
         free(q);
         p=p->next;
     }
 }
 int main() {
     int n=7,m=20,i;
     pnode head;
     head=(Josenode* )malloc(sizeof(pnode));
     int pw[]={3,1,7,2,4,8,4};
     head->num=1;
     head->password=pw[0];
     pnode p,q;
     q=head;
     for(i=1;i<n;i++){
         p=(Josenode* )malloc(sizeof(pnode));
         p->num=i+1;
         p->password=pw[i];
         q->next=p;
         p->next=head;
         q=q->next;
    }
    p=head;
for(i=1;i<=n;i++){ 
printf("number=%d\tpassword=%d\n",p->num,p->password);
  p=p->next;
   }
  Delete(head,n,m);
 }
