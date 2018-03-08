#include <iostream>
using namespace std;

int main() 
{
	int n;
	int i,j,a[n];
	cout<<"enter n";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
				if(a[i]+a[j]==0)
					cout<<a[i]<<a[j];
		}
		}
	return 0;
}
