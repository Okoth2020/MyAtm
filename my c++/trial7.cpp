#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[10];
    char b[] ="*444#";
    int option;
    cout<<"Enter dial:"<<endl;
     gets(a);
    if(strcmp(a,b)==0){
        cout<<"Welcome to tunukiwa services!!"<<endl;
        cout<<"1.Buy minutes"<<endl;
        cout<<"2.Tunukiwa internet"<<endl;
        cout<<"3.Buy kredo Dabo dabo"<<endl;
        cout<<"4.Hot dals"<<endl;
        cout<<"5.Okoa jahazi"<<endl;
        cout<<"6.Stori ibambe"<<endl;
        cout<<"7.SMS bundles"<<endl;
        cout<<"8.Balance"<<endl;
        cout<<"9.More offers"<<endl;
        cout<<"10.Exit!!"<<endl;
     }
    cout<<"Enter option:"<<endl;
    cin>>option;
    if(option==1){
        cout<<"1.Buy 10mins kshs.20 valid 24hrs"<<endl;
        cout<<"2.100mins kshs.10 valid for 1hr"<<endl;
    }
     else if(option==2){
        cout<<"1.500mbs kshs.10 valid for 1hr"<<endl;
        cout<<"2.20mbs kshs.5 valid for 24hrs"<<endl;
    }
    else{
        cout<<"Invalid choice!!"<<endl;
    }
    return 0;
}
