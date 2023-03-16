#ifndef Point_hpp
#define Point_hpp

#include <iostream>

class Point
{
    private:
    double x,y;
    
    public:
    Point(double abs, double ord);
    Point (Point &p);
    Point();
    void setX(double abs);
    void setY (double ord);
    double getX();
    double getY();
    Point deplace(double dx, double dy);
    void affiche();
    void saisir();
    double distance (Point &a);
    Point milieu(Point &a);
    
};

#endif 
