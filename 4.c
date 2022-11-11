#include<stdio.h>

int main(){
 int a[10],i,max;
 printf("enter 10 value:\n");

 for(i=0;i<10;i++)
    scanf("%d",&a[i]);

 max=a[1];
 for(i=1;i<10;i++){
    if(max<a[i])
        max=a[i];
 }

 printf("greatest number is %d ",max);
 return 0;
}

