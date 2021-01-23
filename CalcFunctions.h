/*
 * Name - Jesse Hamman
 * Class CIS227 Winter 2021
 * Assignment 1
 * Date - 1/23/21
 *
 * Purpose - Create a program that calculates the hypotenuse of a triangle, the area of a trapezoid, and the volume of a rectangle. Use classes and header files to accomplish this
 *
 */

#pragma once

#ifndef CALCFUNCTIONS_H_
#define CALCFUNCTIONS_H_

class Calculate
{
private:

public:
	//function declaration in public to be accessed from other areas
	float CalculateHypotenuse(float, float);
	float CalculateTrapezoidArea(float, float, float);
	float CalculateRectangleVolume(float, float, float);

};

#endif
