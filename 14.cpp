#include<iostream>
#include<string.h>
using namespace std;
int factorial(int n)
{
	int i;
	for(i = n-1; i > 1; i--)
		n *= i;
 
	return n;
}
int CountPermutation(char *str)
{
	int countoccur[26] = {0}, len, i, res;
	len = strlen(str);
 	for(i = 0; i < len; i++)
	{
		countoccur[str[i]-'a']++;
	}
            res = factorial(len);
            for(i = 0; i < 26; i++)
	{
		if(countoccur[i] > 1)
			res = res/factorial(countoccur[i]);
	}
	return res;
}
int main()
{
	int result;
	char str[100];
	cout<<"A program to find a permutation of a given string: ";
	cout<<"\n\n\tEnter the string: ";
	cin>>str;
	result = CountPermutaion(str);
	cout<<"\nThe number of possible permutation are: "<<result;
	return 0;
}
