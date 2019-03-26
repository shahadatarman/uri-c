#include<iostream>
#include<fstream>
using namespace std;
long long int rec1(long long int a)
{
if(a==0)
{
return 1;
}
else{
return a*rec1(a-1);
}
}

long long int rec2(long long int b)
{
if(b==0)
{
return 1;
}
else{
return b*rec1(b-1);
}
}

int main()
{
long long int a,b,c,d,sum;
while(!(cin>>a>>b).eof())
{
c=rec1(a);
d=rec2(b);
sum = c+d;
cout<<sum<<endl;
}
}
