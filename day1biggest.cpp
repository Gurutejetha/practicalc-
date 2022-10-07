#include <iostream>
using namespace std;
int biggestNum(int, int,int);
int main()
{
    int num1,num2,num3; 
    cout<<"Enter the first number:  ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;
    biggestNum(num1,num2,num3);
    return 0;
}
    int biggestNum(int num1,int num2,int num3){
    if(num1<num2){
            if(num1>num3){
         cout<<"\nbiggest number is:" <<num1;
            }
            else{
                cout<<"\n biggest number is:"<<num3;
            }
    }
    else if(num1==0){
        cout<<"\ninvalid input
    else{
        if(num2>num3){
            cout<<"\nbiggest number is:"<<num2;
        }
        else{
            cout<<"\nbiggest number is:"<<num3;
        }
    }
    }
