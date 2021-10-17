#include<iostream>
using namespace std;
int main()
{
   int k,l,m,sum=0;
   cout<<"Enter the final number prefered:";
   cin>>k;
   for(l=1;l<=k;l++){
        cout<<"Enter the "<<l <<" number:"<<endl;
        cin>>m;
         sum=sum + l;
   }
   cout<<"Sum is: "<<sum<<endl;
   return 0;
}
