#include<stdio.h>
int main()
{
    int i, j, k=1, l=1, a=1, b;
    printf("Enter Range of numbers? ");
    scanf("%d", &b);
    int arrayOne[b][b];
    for(i=1;i<=b;i++){
        printf("\t%d", i);
    }
    printf("\n");
    for(i=0;i<=b-1;i++){
        for(j=0;j<=b-1;j++){
        arrayOne[i][j] = k*l;
        l++;
        }
        k++;
        l=1;
    }
    for(i=0;i<=b-1;i++){
        for(j=0;j<=b-1;j++){
            if(j == 0){
                printf("%d", a);
                a++;
            }
            printf("\t%d", arrayOne[i][j]);
        }
        printf("\n");
    }
}
