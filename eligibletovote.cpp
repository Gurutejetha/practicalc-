#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter the age of the person\n";
cin>>a;
if(a<18)
{
cout<<"user is not eligible to vote\n";
cout<<"user will be eligible in other:\n"<<18-a<<endl;
}
else
{
cout<<"user is eligible to vote\n";
}
}

