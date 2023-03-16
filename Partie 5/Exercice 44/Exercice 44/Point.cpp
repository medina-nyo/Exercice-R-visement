#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(double abs, double ord){
    x = abs;
    y = ord;
}
Point::Point()
{
    x = y = 0;
}

Point::Point (Point &p){
    
    setX(p.getX());
    setY(p.getY());
}

void Point::setX(double abs)
{
    x = abs;
}

void Point::setY (double ord)
{
    y = ord;
}

double Point::getX()
{
    return x;
}

double Point::getY()
{
    return y;
}

Point Point::deplace(double dx, double dy)
{
    setX(getX() + dx);
    setY(getY() + dy);
    
    return *this;
}

void Point::affiche()
{
    cout << "Les coordonnées sont :\n";
    cout << "x = " << this->getX() << endl;
    cout << "y = " << this->getY() << endl;
    cout << endl;
}

void Point::saisir()
{
    cout << "Entre les cordonnées " << endl;
    cout << "x : ";
    cin >> x;
    
    cout << "y : ";
    cin >> y;
    cout << endl;
}

double Point::distance (Point &a)
{
    double x,y, dis;
    
    x = (getX()-a.getX()) * (getX()-a.getX());
    y = (getY()-a.getY()) * (getY()-a.getY());
    dis = sqrt(x + y);
    
    return dis;
}

Point Point::milieu(Point &a)
{
    Point p1;
    
    p1.x =(getX() + a.getX()) / 2;
    p1.y =(getY() + a.getY()) / 2;

    return p1;
}
