#include<iostream>
using namespace std;
int main()
{
int num,sum;
sum=0;
cout<<"enter a positive number";
cin>>num;
for(int i=1;i<=num;++i)
{
sum +=i;
}
cout<<" the sumof natural numbers is "<<sum<<endl;
return 0;
}

