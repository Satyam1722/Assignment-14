#include<stdio.h>

int main(){
 int a[10],i,sum=0;
 printf("enter 10 value:\n");

 for(i=0;i<10;i++)
    scanf("%d",&a[i]);

 for(i=0;i<10;i++)
    sum+=a[i];

 printf("average is %d",sum/10);
 return 0;
}
