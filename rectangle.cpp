/********
 * Fichier: rectangle.cpp
 * Auteurs: BOUS0086 & CHAX6081
 * Date: 6 janvier 2026
 * Description: Implémentation des méthodes des classes décrites dans
 *    rectangle.h.
 *
 * Ce fichier fait partie de la distribution de Graphicus.
********/

#include "rectangle.h"

Rectangle::Rectangle(float width, float height, int bottomLeftX, int bottomLeftY)
    : width(width), height(height), bottomLeftX(bottomLeftX), bottomLeftY(bottomLeftY)
{
}

float Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(float newWidth)
{
    width = newWidth;
}

float Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(float newHeight)
{
    height = newHeight;
}

float Rectangle::getArea() const
{
    float area = width * height;
    return area;
}

float Rectangle::getPerimeter() const
{
    float perimeter = 2 * (width + height);
    return perimeter;
}

void Rectangle::getBottomLeft() const
{
    std::cout << "Bottom Left Position: (" << bottomLeftX << ", " << bottomLeftY << ")" << std::endl;
}

void Rectangle::setBottomLeft(int newBottomLeftX, int newBottomLeftY)
{
    bottomLeftX = newBottomLeftX;
    bottomLeftY = newBottomLeftY;
    std::cout << "Bottom Left Position: (" << bottomLeftX << ", " << bottomLeftY << ")" << std::endl;
}

