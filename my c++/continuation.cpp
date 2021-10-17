#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b,c;
    fstream sam;
    sam.open("sam.txt",ios::out);
        sam<<"Enter num1:"<<endl;
        cin>>a;
        sam<<"Enter num2:"<<endl;
        cin>>b;
        c=a+b;
        sam<<"Num1 is " <<a<<endl;
        sam<<"Num2 is " <<b<<endl;
        sam<<"Sum is :"<< c<<endl;
        sam.close();
        return 0;
}
