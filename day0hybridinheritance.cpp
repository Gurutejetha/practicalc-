#include<iostream>
using namespace std;
class vehicle
{
public:
vehicle()
{
cout<<"this is a vehicle\n";
}
};
class car:public vehicle
{
public :
car()
{
c0ut<<"this is a car\n";
}
};
class racing
{
public :
racing()
{
cout<<"this is made for racing\n";
}
}; 
class ford:public car,public racing
{
public:
ford()
{
cout<<"the ford company produces many racing cars \n";
}
};
int main()
{
ford f;
return 0;
} 
