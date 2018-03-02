#include <iostream>
using namespace std;
int main() 
{
int n,a[10],i,j,count=0;
cout<<"Enter no of elements:";
cin>>n; 
cout<<"Enter elements:";
for(i=0;i<n;i++)
{
cin>>a[i]; 
}
 for(i=0;i<n;i++) 
{
if(a[i]==i)   
{
cout<<a[i];   
}
else   
{  
count++;   
}
}
 if(count==n)
 {
cout<<"-1";
 }
 return 0;
}

