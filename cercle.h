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
    ~Cercle();
    float getRadius() const;
    float setRadius(float newRadius);
    float getArea() const;
    float getCircumference() const;
    void getCenter() const;
    void setCenter(int newCenterPositionX, int newCenterPositionY);
};


#endif