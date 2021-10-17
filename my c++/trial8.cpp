#include<iostream>
using namespace std;
int main()
{
    int i, j, k = 0;
    cout<<"Prime Numbers Between 1 to 20 are:"<<endl;
    for(i=1; i<=20; i++)
    {
        for(j=2; j<=i/2; j++)
        {
           if(i%j==0)
           {
               k++;
               break;
           }
        }
        if(k == 0 && i!=1)
            cout<<i<<endl;
        k = 0;
    }
}
