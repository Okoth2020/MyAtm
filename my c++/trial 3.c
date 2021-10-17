#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int k,n=0;
    while(n<5){
    for(k=0;k<=4;k++){
        printf("\t%d",a[k]);
    }
    printf("\n");
    n++;
    if(n==0){
        break;
    }
    }
}
