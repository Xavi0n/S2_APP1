/********
 * Fichier: cercle.cpp
 * Auteurs: BOUS0086 & CHAX6081
 * Date: 6 janvier 2026
 * Description: Implémentation des méthodes des classes décrites dans
 *    cercle.h.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "cercle.h"
#define PI 3.14

Cercle::Cercle(float radius, int centerPositionX, int centerPositionY)
    : radius(radius), centerPositionX(centerPositionX), centerPositionY(centerPositionY)
{
}

Cercle::~Cercle()
{
}

float Cercle::getRadius() const
{
    return radius;
}

float Cercle::setRadius(float newRadius)
{
    radius = newRadius;
    return radius;
}

float Cercle::getArea() const
{
    float area = PI * radius * radius;
    return area;
}

float Cercle::getCircumference() const
{
    float circumference = 2 * PI * radius;
    return circumference;
}

void Cercle::getCenter() const
{
    std::cout << "Center Position: (" << centerPositionX << ", " << centerPositionY << ")" << std::endl;
}

void Cercle::setCenter(int newCenterPositionX, int newCenterPositionY)
{
    centerPositionX = newCenterPositionX;
    centerPositionY = newCenterPositionY;
    std::cout << "Center Position: (" << centerPositionX << ", " << centerPositionY << ")" << std::endl;
}