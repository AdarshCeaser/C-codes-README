#include<iostream>
using namespace std;
class stack
{
public:
stack(){}
bool is_Empty()
{
if(sizeof(this -> s)==0)
return true;
return false;
}
void push(int i)
{
cout<<"Enter the value at "<<i+1;    //i is the index
cin>>s[i];
}
void pop()
{
if(!is_Empty())
{
for(int i=sizeof(s);i>0;i--)
cout<<s[i]<<endl;
}
}
float s[];
};

int main()
{
stack s;
int n;
cout<<"enter the number of entries to be made";
for(int j=0;j<n;j++)
s.push(j);
s.pop();
return 0;
}

