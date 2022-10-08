#include<iostream>
using namespace std;
int main ()
{
int a,b;
int operation;
cout<<"1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n";
cout<<"choose your choice\n";
cin>>operation;
cout<<"enter two numbers\n";
cin>>a>>b;
switch(operation)
{
case 1:
cout<<"addition of two numbers is :\n"<<a+b<<endl;
break;
case 2:
cout<<"the difference is: \n"<<a-b<<endl;
break;
case 3:
cout<<"the product is:\n"<<a*b<<endl;
break;
case 4:
cout<<"the division is :\n"<< a/b<<endl;
break;
case5:
cout<<"default choice";
break;
}
return 0;
}
