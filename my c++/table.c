#include<stdio.h>
int main()
{
    int m,k;
    int g=5;
    int l=1;
    for(m=1;m<=g;m++){
        printf("\t%d",m);
    }
     printf("\n");
     for(m=1;m<=g;m++)
    {
        for(k=1;k<=g;k++){
            if(k==1){
                printf("%d", l);
                l++;
            }
            printf("\t%d",m*k);

        }
        printf("\n");
    }


}
