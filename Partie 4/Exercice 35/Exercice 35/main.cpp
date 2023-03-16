#include <iostream>
using namespace std;

double f(double x, bool &ok)
{
    double racineCarree;
    if(x >= 1 && x<= 2)
    {
        racineCarree = sqrt((x-1) * (2-x));
        ok = true;
    }
    else{
        ok = false;
    }
    return racineCarree;
}

int main()
{
    bool ok;
    double x, racineCarree;
    cout << "Entre la valeur de x : ";
    cin >> x;
    
    racineCarree = f(x,ok);
    if(ok)
    {
        cout << "La fonction f(x) vaut : " << racineCarree << endl;
    }
    else{
        cout << "La fonction n'est pas définie au point x." << endl;
    }
    
    return 0;
}
