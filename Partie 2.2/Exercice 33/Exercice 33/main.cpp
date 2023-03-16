#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int i=0;
    string chaine, mot;
    cout << "Entre une phrase : ";
    getline(cin,chaine);
    cout << endl;
    
    istringstream iss(chaine);
    
    while(iss >> mot)
    {
        cout << "mot " << i+1 << " : " << mot << endl;
        i++;
    }
    
    return 0;
}
