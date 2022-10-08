#include<iostream>
using namespace std;
class A
{
public:
int x,y;
void getdata()
{
cout<<"enter the values of xand y \n";
cin>>x>>y;
}
};
class B:public A
{
public :
void product()
{
cout<<"the product ofxand y is"<<x*y<<endl;
}
};
class C:public A
{
public:
void sum()
{
cout<<"the sum of x and y is"<<x+y<<endl;
}
};
int main()
{
B obj1;
C obj2;
obj1.getdata();
obj1.product();
obj2.getdata();
obj2.sum();
return 0;
} 
