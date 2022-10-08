#include<iostream>
using namespace std;
int main()
{
int a,b,d;
cout<<"enter the amount \n";
cin>> a;
cout<<"enter the time\n";
cin>>b;
cout<<"enter the age of person\n";
cin>>d;
if(d>=50)
{
cout<<"the amount of intrest is :\n"<< (a*b*12)/100<< endl;
cout<<" the total amount is :\n"<<a+((a*b*12)/100);
}
else 
{
cout<<"the amount of intrest is:\n"<< (a*b*10)/100<<endl;
cout<<"the total amount is:\n"<<a+((a*b*10)/100)<<endl;
}
return 0;
} 

