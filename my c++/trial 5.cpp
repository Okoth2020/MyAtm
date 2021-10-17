#include<iostream>
using namespace std;
int main()
{
    int pin=3345,pin1,n=3,puk=123456789,puk1,tr,k=1,np,cp,my_pin;
    while(n>=1){
        cout<<"Attempts remaining " <<n <<endl;
        cout<<"Enter pin:" <<endl;
        cin>>pin1;
        if(n==1&& pin1 != pin){
          cout<<"Attempts finished!!" <<endl;
          cout<<"Sim card blocked!!" <<endl;
          cout<<"Enter number of puk trials:"<<endl;
          cin>>tr;
          while(k<=tr){
            cout<<"Enter puk:"<<endl;
            cin>>puk1;
            if(puk1==puk){
                cout<<"Correct puk!!"<<endl;
                cout<<"Sim card unblocked!!"<<endl;
                cout<<"Reset pin!!"<<endl;
                cout<<"Enter new pin:"<<endl;
                cin>>np;
                cout<<"Confirm new pin:"<<endl;
                cin>>cp;
                if(np==cp){
                    cout<<"Pin well set!!"<<endl;
                    cout<<"Attempts remaining "<<n <<endl;
                    cout<<"Enter pin:" <<endl;
                    cin>>my_pin;
                    if(n==1){
                        cout<<"Attempts finished!!" <<endl;
                    }
                    break;
                }
                else{
                    cout<<"The pins does not match!!"<<endl;
                    cout<<"Try again!!"<<endl;
                    break;
                }
            }
          }
            break;
        }
        if(pin1==pin){
            cout<<"Correct pin!!" <<endl;
            break;
        }
         n--;
    }
}
