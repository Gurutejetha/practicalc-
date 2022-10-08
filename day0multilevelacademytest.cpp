#include<iostream>
using namespace std;
class Saveetha 
{
public:
void principal()
{
cout<<"I am the principal of saveetha school of engineering\n";
}
};
class Deen:public Saveetha 
{
public:
void accounts()
{
cout<<"Deen manages all the accounts in this college\n";
}
};
class Students:public Deen
{
public:
void strength()
{
cout<<"The total strength of the college is 20467 \n";
}
};
int main()
{
Students s1;
s1.principal();
s1.accounts();
s1.strength();
return 0;
}

