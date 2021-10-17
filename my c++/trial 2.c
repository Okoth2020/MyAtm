#include<stdio.h>
int main()
{
    int nums[1][5]={1,2,3,4,5};
    int const i=2,k=5;
    for(i=1;i>2;i++)
    {
        for(k=1;k>5;k++)
        {
        printf("%d",nums[i][k]);
        }
    }
    return 0;
}
