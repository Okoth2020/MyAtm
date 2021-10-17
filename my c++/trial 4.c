#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,4,5};
    int m,n,k,l;
    for(l=0;l<=4;l++){
    for(m=0;m<=4;m++){
        printf("\t%d",a[m]);
    }
    for(n=0;n<=4;n++){
        printf("\n\t%d",b[n]);
    }
    m=a[m]*b[n];
    printf("%d",m);
    if(k==5){
        break;
    }
    }

}
