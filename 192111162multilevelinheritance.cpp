#include<iostream>
using namespace std;
class animal 
{
public:
void eat()
{
cout<<"eating\n";
}
};
class dog:public animal 
{
public:
void bark()
{
cout<<"barking\n";
}
};
class babydog:public dog
{
public:
void weep()
{
cout<<"weeping\n";
}
};
int main()
{
babydog bd;
bd.eat();
bd.bark();
bd.weep();
return 0;
}

