#include<iostream>
using namespace std;
class rectangle
{
public:
int length;
int breadth;
rectangle(int len,int brth):length(len),breadth(brth){}
int getArea()
{
return length*breadth;
}
};
int main()
{
rectangle rect(9,4);
cout<<"Area of rectangle is:"<<rect.getArea();
return 0 ;
}
