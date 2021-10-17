#include<iostream>
using namespace std;
int main()
{
    int password=3455,pin,k,option,m=3,x,y;
    int long balance=15000,withdraw,deposit,current_balance,rem_balance;
    cout<<"MY ATM SERVICE"<<endl;
    cout<<"Enter your pin:"<<endl;
    cin>>pin;
    if(pin==password){
        cout<<"CORRECT PIN!!"<<endl;
        cout<<"WELCOME TO ATM SERVICE!!"<<endl;
        cout<<"1.Check balance"<<endl;
        cout<<"2.Withdraw amount"<<endl;
        cout<<"3.Deposit amount"<<endl;
        cout<<"4.Exit"<<endl;
    cout<<"Select option:"<<endl;
    cin>>option;
    if(option==1){
        cout<<"Your balance is " <<balance<<endl;
        cout<<"Thank you for checking your account balance!!" <<endl;
    }
    else if(option==2){
       cout<<"Withdraw amount!!"<<endl;
       cout<<"Enter amount to withdraw"<<endl;
       cin>>withdraw;
       rem_balance=balance-withdraw;
            if(withdraw<=balance){
             cout<<"You have withdrawn kshs." <<withdraw <<endl;
             cout<<"Remaining balance is kshs."<<rem_balance <<endl;
        }
        if(withdraw>=balance){
        cout<<"Sorry you have insufficient funds in your account!!"<<endl;
       }
    }
    else if(option==3){
        cout<<"Deposit amount!!"<<endl;
        cout<<"Enter amount to deposit:"<<endl;
        cin>>deposit;
        current_balance=balance+deposit;
        cout<<"Your current account balance is kshs. "<<current_balance <<endl;
        cout<<"Balance updated!!" <<endl;
    }
    else if(option==4){
        cout<<"Exit" <<endl;
    }
    else{
        cout<<"Invalid ATM choice" <<endl;
    }
    }
    else{
        for(k=1;k<=m;k++){
                if(pin != password){
            cout<<"Enter a valid password!!"<<endl;
            cin>>pin;
            if(k==m){
            cout<<"ATM card blocked!!" <<endl;
            cout<<"Reset a new ATM pin!!"<<endl;
            cout<<"Enter the new pin:"<<endl;
            cin>>x;
            cout<<"Confirm the new pin:"<<endl;
            cin>>y;
            if(x==y){
                cout<<"Pin well set!!"<<endl;
                cout<<"CORRECT PIN!!"<<endl;
        cout<<"WELCOME TO ATM SERVICE!!"<<endl;
        cout<<"1.Check balance"<<endl;
        cout<<"2.Withdraw amount"<<endl;
        cout<<"3.Deposit amount"<<endl;
        cout<<"4.Exit"<<endl;
    cout<<"Select option:"<<endl;
    cin>>option;
    if(option==1){
        cout<<"Your balance is " <<balance<<endl;
        cout<<"Thank you for checking your account balance!!" <<endl;
    }
    else if(option==2){
       cout<<"Withdraw amount!!"<<endl;
       cout<<"Enter amount to withdraw"<<endl;
       cin>>withdraw;
       rem_balance=balance-withdraw;
            if(withdraw<=balance){
             cout<<"You have withdrawn kshs." <<withdraw <<endl;
             cout<<"Remaining balance is kshs."<<rem_balance <<endl;
        }
        if(withdraw>=balance){
        cout<<"Sorry you have insufficient funds in your account!!"<<endl;
       }
    }
    else if(option==3){
        cout<<"Deposit amount!!"<<endl;
        cout<<"Enter amount to deposit:"<<endl;
        cin>>deposit;
        current_balance=balance+deposit;
        cout<<"Your current account balance is kshs. "<<current_balance <<endl;
        cout<<"Balance updated!!" <<endl;
    }
    else if(option==4){
        cout<<"Exit" <<endl;
    }
    else{
        cout<<"Invalid ATM choice" <<endl;
    }
            }
            else{
                cout<<"The pin entered does not match!!" <<endl;
                cout<<"Reset your pin!!"<<endl;
            }

            }
            }
            else{
                    cout<<"CORRECT PIN!!"<<endl;
        cout<<"WELCOME TO ATM SERVICE!!"<<endl;
        cout<<"1.Check balance"<<endl;
        cout<<"2.Withdraw amount"<<endl;
        cout<<"3.Deposit amount"<<endl;
        cout<<"4.Exit"<<endl;
    cout<<"Select option:"<<endl;
    cin>>option;
    if(option==1){
        cout<<"Your balance is " <<balance<<endl;
        cout<<"Thank you for checking your account balance!!" <<endl;
        break;
    }
    else if(option==2){
       cout<<"Withdraw amount!!"<<endl;
       cout<<"Enter amount to withdraw"<<endl;
       cin>>withdraw;
       rem_balance=balance-withdraw;
            if(withdraw<=balance){
             cout<<"You have withdrawn kshs." <<withdraw <<endl;
             cout<<"Remaining balance is kshs."<<rem_balance <<endl;
             break;
        }
        if(withdraw>=balance){
        cout<<"Sorry you have insufficient funds in your account!!"<<endl;
        break;
       }
    }
    else if(option==3){
        cout<<"Deposit amount!!"<<endl;
        cout<<"Enter amount to deposit:"<<endl;
        cin>>deposit;
        current_balance=balance+deposit;
        cout<<"Your current account balance is kshs. "<<current_balance <<endl;
        cout<<"Balance updated!!" <<endl;
        break;
    }
    else if(option==4){
        cout<<"Exit" <<endl;
        break;
    }
    else{
        cout<<"Invalid ATM choice" <<endl;
        break;
    }
    }
    }
    }


    return 0;
    }

