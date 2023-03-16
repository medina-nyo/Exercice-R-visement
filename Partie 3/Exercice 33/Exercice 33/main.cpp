#include <iostream>
#include "Repertoire_Eleves.h"
#include "Menu.h"

int main()
{
    Repertoire_Eleves r;
    initialise_Repertoire(r);
    menu(r);
    return 0;
}
