#include<stdio.h>

int main(){
 int a[10],i,j,max,max_1;
 printf("enter 10 value:\n");

 for(i=0;i<10;i++)
    scanf("%d",&a[i]);

 max=a[1];
 max_1=a[1];

 for(i=0;i<10;i++){
    if(max<a[i])
        max=a[i];
 }

 for(i=0;i<10;i++){
    if((max_1<a[i]) && (max!=a[i]))
            max_1=a[i];
 }

 printf("second greatest number is %d ",max_1);
 return 0;
}

