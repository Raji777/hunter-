#include <iostream>
using namespace std;

int main() 
{
	int n;
	int i,j,k,a[n];
	cout<<"enter n";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
				for(k=j+1;k<=n;k++)
				{
					if(a[i]+a[j]==a[k])
					cout<<a[i]<<a[j]<<a[k];
				}
		}
	}
	return 0;
}
