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
class Marks:public Students
{
public:
void average()
cout<<"the average percentage of students is greater than 85%\n";
}
};
class Placements:public Saveetha 
{
public:
void rateofplacement()
{
cout<<"all the students of saveetha are being placed good with high package\n";
}
};
int main()
{
Students s1;r
s1.principal();
s1.accounts();
s1.strength();
S1.average();
S1.rateofplacement();
return 0;
}

