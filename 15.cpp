#include <iostream>
using namespace std;

int main() {
	
	int n,a[n],i,sum=0;
	cout<<"enter no of elements";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"sum"<<sum;
	return 0;
}
