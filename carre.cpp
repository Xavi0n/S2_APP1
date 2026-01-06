/********
 * Fichier: carre.cpp
 * Auteurs: BOUS0086 & CHAX6081
 * Date: 6 janvier 2026
 * Description: Implémentation des méthodes des classes décrites dans
 *    carre.h.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/
#include "carre.h"

Carre::Carre(float sideLength, int bottomLeftX, int bottomLeftY)
    : sideLength(sideLength), bottomLeftX(bottomLeftX), bottomLeftY(bottomLeftY)
{
}

float Carre::getSideLength() const
{
    return sideLength;
}

float Carre::setSideLength(float newSideLength)
{
    sideLength = newSideLength;
    return sideLength;
}

float Carre::getArea() const
{
    float area = sideLength * sideLength;
    return area;
}

float Carre::getPerimeter() const
{
    float perimeter = 4 * sideLength;
    return perimeter;
}

void Carre::getBottomLeft() const
{
    std::cout << "Bottom Left Position: (" << bottomLeftX << ", " << bottomLeftY << ")" << std::endl;
}

void Carre::setBottomLeft(int newBottomLeftX, int newBottomLeftY)
{
    bottomLeftX = newBottomLeftX;
    bottomLeftY = newBottomLeftY;
    std::cout << "Bottom Left Position: (" << bottomLeftX << ", " << bottomLeftY << ")" << std::endl;
}