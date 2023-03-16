#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point p(-2,3);
    Point a;
    a.saisir();
    Point p1 = p.milieu(a);
    p1.affiche();
   
    return 0;
}
