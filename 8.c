#include<stdio.h>

int main(){
 int a[10],i,j,sm,sm_1;
 printf("enter 10 value:\n");

 for(i=0;i<10;i++)
    scanf("%d",&a[i]);

 sm=a[1];
 sm_1=a[1];

 for(i=0;i<10;i++){
    if(sm>a[i])
        sm=a[i];
 }

 for(i=0;i<10;i++){
    if((sm_1>a[i]) && (sm!=a[i]))
            sm_1=a[i];
 }

 printf("second smallest number is %d ",sm_1);
 return 0;
}


