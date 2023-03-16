#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    cout << "Avant  a : " << a << "   " << " b : " << b << endl << endl;
    
    temp = a;
    a = b;
    b = temp;
    cout << "Aprés  a : " << a << "   " << " b : " << b << endl;
}

int main()
{
    int a =2, b=5;
    swap(a,b);
    return 0;
}
