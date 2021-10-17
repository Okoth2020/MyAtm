#include<iostream>
using namespace std;
int main()
{
    char gender,mstatus[10],height[10];
    int sons,apy,salary,gpa,k,l;
    cout<<"Enter gender:"<<endl;
    cin>>gender;
    if(gender=='F'){
        cout<<"Is she married?"<<endl;
        cin>>mstatus;
        cout<<"Number of sons she has:"<<endl;
        cin>>sons;
        cout<<"Year of her appointment:"<<endl;
        cin>>apy;
        cout<<"Salary of the year:"<<endl;
        cin>>salary;
        cout<<"Her height:"<<endl;
        cin>>height;
        cout<<"Her GPA:"<<endl;
        cin>>gpa;
        cout<<"Salary drawn upto:"<<endl;
        cin>>k;
        l=salary-k;
        cout<<"Balance till is :"<<endl;
        cin>>l;
    }
    else{
        cout<<"The gender is male"<<endl;
    }
    return 0;

}
