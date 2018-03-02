#include <iostream>
using namespace std;
int main()
{
int n,i,j,s[100],temp=0,r=0,k=0;
cout<<"enter n";
cin>>n;
for(i=0;i<n;i++)
{
cout<<s[i];
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i]==s[j])
{
r=r+1;
}
}
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(s[i]==s[j])
{
temp=s[j];
s[j]=s[j+1];
s[j+1]=temp;
}
}
}
k=r;
for(i=0;i<(n-(r-1));i++)
{
for(j=i+1;j<(n-r);j++)
{
if(s[i]<s[j])
{
temp=s[i];
s[i]=s[j];
s[j]=temp;
}
}
}
for(i=0;i<(n-r);i++)
{
cout<<s[i];
}
return 0;
}
