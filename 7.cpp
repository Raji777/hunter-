#include <iostream>
using namespace std;
int main()
{
arrangeArray (int a[], int size)
{
    oddInd = 1;
    evenInd = 0;
    while (true)
    {
        while (evenInd < size && a[evenInd]%2 == 0)
             oddInd += 2;
        while (oddInd < size && a[oddInd]%2 == 1)
             evenInd += 2;
        if (evenInd < size && oddInd < size)
            swap (a[evenInd], a[oddInd])
        else
            break;
    } 
}
	return 0;
}
