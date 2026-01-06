#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h";


class Cercle : public Forme
{
private:
    float radius;
    int centerPositionX;
    int centerPositionY;

public:
    Cercle(float radius, int CenterPositionX, int CenterPositionY);
    float getRadius() const;
    float setRadius(float newRadius);
    float area() const;
    float circumference() const;
    void getCenter() const;
    void setCenter(int newCenterPositionX, int newCenterPositionY);
};


#endif