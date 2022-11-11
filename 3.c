#include<stdio.h>

int main(){
 int a[10],i,so=0,se=0;
 printf("enter 10 value:\n");

 for(i=0;i<10;i++)
    scanf("%d",&a[i]);

 for(i=0;i<10;i++){
    if(a[i]%2==0)
        se+=a[i];
    else
        so+=a[i];
 }


 printf("sum of odd is %d",so);
 printf("\nsum of even is %d",se);
 return 0;
}

