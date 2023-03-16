#include <iostream>
using namespace std;

int main()
{
    string verbe;
    bool est_PremierGroupe= true;
    
    cout << "Entre un verbe du premier groupe : ";
    cin >> verbe;
        
    if(verbe == "aller")
    {
        est_PremierGroupe = false;
        cout << "Ce n'est pas un verbe du premier groupe." << endl;
    }
    for(char i=0; i<verbe.size(); i++)
    {
        if(i == verbe.size()-2 || i == verbe.size()-1)
        {
            if(verbe[i] != 'e' && verbe[i] != 'r')
            {
                est_PremierGroupe = false;
                cout << "Ce n'est pas un verbe du premier groupe." << endl;
                break;
            }
        }
    }
    
    cout << endl;
    if(est_PremierGroupe)
    {
        verbe.resize(verbe.size()-2);
        cout << "Je " << verbe << "e\n";
        cout << "Tu " << verbe << "es\n";
        cout << "Il/Elle " << verbe << "e\n";
        cout << "Nous " << verbe << "ons\n";
        cout << "Vous " << verbe << "ez\n";
        cout << "Ils/ Elles " << verbe << "ent\n";
        
    }
    return 0;
}
