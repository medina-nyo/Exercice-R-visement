#include <iostream>
using namespace std;

int main() {
    
    double largeur;
    double longueur;
    
    cout << "Largeur : ";
    cin >> largeur;
    
    cout << "Longueur : ";
    cin >> longueur;
    
    double perimetre;
    perimetre = (largeur + longueur) * 2;
    cout << "Le périmètre est de : " << perimetre << endl;
    
    double surface;
    surface = longueur * largeur;
    cout << "La surface est de " << surface << endl;
    
    return 0;
}
