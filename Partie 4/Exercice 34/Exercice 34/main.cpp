#include <iostream>
using namespace std;

double distance_Point(double xa, double ya, double xb, double yb)
{
    double distance_AB;
    distance_AB = sqrt(xb-xa)*(xb-xa) +(yb-ya)*(yb-ya);
    
    return distance_AB;
}

int main()
{
    double xa = 1, xb = 2;
    double ya = 4, yb = 6;
    double distance_AB = distance_Point(xa, ya, xb, yb);
    cout << "La distance AB = " << distance_AB << endl;
    
    return 0;
}
