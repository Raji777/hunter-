#include <iostream>
using namespace std;

int main() {
	
	int n,a[n],i,k;
	cout<<"enter no of elements";
	cin>>n;
	cout<<"enter k";
	cin>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
			if(a[i]<k)
	{
		cout<<a[i];
	}
	}
	if(a[i]<=k)
	{
		cout<<a[i];
	}
	return 0;
}
