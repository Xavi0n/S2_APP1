#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "forme.h"

class Rectangle : public Forme
{
    private:
        float width;
        float height;
        int bottomLeftX;
        int bottomLeftY;
    public:
        Rectangle(float width, float height, int bottomLeftX, int bottomLeftY);
        ~Rectangle();
        float getWidth() const;
        void setWidth(float newWidth);
        float getHeight() const;
        void setHeight(float newHeight);
        float getArea() const;
        float getPerimeter() const;
        void getBottomLeft() const;
        void setBottomLeft(int newBottomLeftX, int newBottomLeftY);
};

#endif
