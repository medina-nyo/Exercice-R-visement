#include <iostream>
#include "Pile.h"

using namespace std;

int main()
{
    Pile p1(3), p2(3);
    
    p1.empiler(2);
    p1.empiler(3);
    p1.depiler();
    p1.affiche();
    
    p2.empiler(6);
    p2.depiler();
    p2.empiler(7);
    p2.empiler(8);
    
    p2.affiche();
    return 0;
}
