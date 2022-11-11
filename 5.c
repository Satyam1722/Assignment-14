#include<stdio.h>

int main(){
 int a[10],i,small;
 printf("enter 10 value:\n");

 for(i=0;i<10;i++)
    scanf("%d",&a[i]);

 small=a[1];
 for(i=1;i<10;i++){
    if(small>a[i])
        small=a[i];
 }

 printf("smallest number is %d ",small);
 return 0;
}


