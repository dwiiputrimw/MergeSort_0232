#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
    while (true)
    { 
        cout << "Masukkan panjang element array: ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimum panjang array yang dapat dimasukkan adalah 20." << endl;
        }
    }
}
    

    