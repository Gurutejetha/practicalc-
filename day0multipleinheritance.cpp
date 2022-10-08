#include<iostream>
using namespace std;
class base
{
public :
void display()
{
cout<<"my name is teju "<<endl;
}
};
class base1
{
public:
void display2()
{
cout<<" i am going to sleep"<<endl;
}};
class derived:public base,public base1
{
public:
void display3()
{
cout<<"good night friends"<<endl;
}
};
int main()
{
derived d;
d.display();
d.display2();
d.display3();
} 
