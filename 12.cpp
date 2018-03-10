#include <iostream>
using namespace std;
int main()
{
    int i, n;
    int n[100];
    float k[100];
    cout<<"Enter total number of elements in n";

    cout << "Enter total number of elements in k";
    cin >> n;
    cout << endl;
    if(n[i]>k[i])
   {
    for(i = 0; i < n; ++i)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> k[i];
    }

    // Loop to store largest number to arr[0]
    for(i = 1;i < n; ++i)
    {
          if(k[0] < k[i])
           k[0] = k[i];
    }
    cout << "Largest element = " << k[0];
}
    return 0;
}
