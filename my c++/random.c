#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a;
    int k=10,m=20;
    srand(time(NULL));
    a=rand()%(m-k+1)+k;
    printf("%d\n",a);
    return 0;
}
