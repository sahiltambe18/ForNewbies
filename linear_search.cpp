#include <iostream>
using namespace std;

int main()
{
    int A[15],n,a;
    cout << "Enter the size of Array : ";
    cin >> n;
    cout << "Enter the Elements of Array : ";
    for(int i = 0;i < n;i++)
    {
        cin >> A[i];
    }
    cout << "Enter the number to search : ";
    cin >> a;
    for(int i = 0;i < n;i++)
    {
        if(a == A[i])
        {
            cout << "Search sucessful." << endl;
            cout << "The number is found at " << i << endl;
            return 0;
        }
    }
            cout << "Search unsuccessful.";
}
