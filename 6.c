#include<stdio.h>

int main(){
 int a[10],i,j;
 printf("enter 10 value:\n");

 for(i=0;i<10;i++)
    scanf("%d",&a[i]);

 for(i=0;i<10;i++){
    for(j=0;j<10;j++){
        if(a[i]<a[j]){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }

 }


 for(i=0;i<10;i++)
    printf("%d ",a[i]);

 return 0;
}

