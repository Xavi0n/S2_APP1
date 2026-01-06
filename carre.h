#ifndef CARRE_H
#define CARRE_H

#include "forme.h";

class Carre : public Forme
{
    private:
        float sideLength;
        int bottomLeftX;
        int bottomLeftY;
    public:
        Carre(float sideLength, int bottomLeftX, int bottomLeftY);
        ~Carre();
        float getSideLength() const;
        float setSideLength(float newSideLength);
        float getArea() const;
        float getPerimeter() const;
        void getBottomLeft() const;
        void setBottomLeft(int newBottomLeftX, int newBottomLeftY);
};

#endif