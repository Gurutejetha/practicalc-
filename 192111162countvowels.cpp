#include <iostream>
using namespace std;
int main()
{
char str[100];
int i,vowCount=0,consCount=0;
cout<<"Enter a string for count vowel and consonant\n";
cin>>str;
for(i=0; str[i]; i++)
{
if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'
||str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U' )
{
vowCount++;
}
else if((str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' )){
consCount++;
}
}
cout<<"Number of vowels:"<<vowCount<<endl;
cout<<"Number of consonants:"<<consCount<<endl;
return 0;
}
