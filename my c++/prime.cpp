#include<iostream>
using namespace std;
int main()
{
    int x=1,n;
    cout<<"Enter the last number:"<<endl;
    cin>>n;
    cout<<"-------"<<endl;
    cout<<"-------"<<endl;
    while(x<=n){
            if(x%2==0 || x%3==0){
               cout<<x<<endl;
            }
            else{
                cout<<"Unrequired number!!"<<endl;
            }
      x++;
    }
    return 0;
}
