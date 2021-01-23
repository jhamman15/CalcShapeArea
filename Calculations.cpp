/*
 * Name - Jesse Hamman
 * Class CIS227 Winter 2021
 * Assignment 1
 * Date - 1/23/21
 *
 * Purpose - Create a program that calculates the hypotenuse of a triangle, the area of a trapezoid, and the volume of a rectangle. Use classes and header files to accomplish this
 *
 */




#include <iostream>
#include "CalcFunctions.h"

float Calculate::CalculateHypotenuse(float ftriangleA, float ftriangleB)
{
    return sqrt((ftriangleA * ftriangleA) + (ftriangleB * ftriangleB));
}

float Calculate::CalculateTrapezoidArea(float fTrapezoidB1, float fTrapezoidB2, float fTrapezoidH)
{
    return (0.5 * (fTrapezoidB1 + fTrapezoidB2)) * fTrapezoidH;
}

float Calculate::CalculateRectangleVolume(float fRectangleL, float fRectangleW, float fRectangleH)
{
    return (fRectangleH * fRectangleW * fRectangleL);
}
