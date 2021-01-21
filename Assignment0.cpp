/*
 * Name - Jesse Hamman
 * Class CIS227 Winter 2021
 * Assignment 0
 * Date - 1/17/21
 *
 * Purpose - Create a program that calculates the hypotenuse of a triangle, the area of a trapezoid, and the volume of a rectangle
 * This is a test ~Joseph O.
 *
 */

 //includes section
#include <iostream>
#include <cctype>

//namespace declarations
using namespace std;


//Global scope variables and constants section
bool bRun = true;

//Inputs
float ftriangleA, ftriangleB;
float fTrapezoidB1, fTrapezoidB2, fTrapezoidH;
float fRectangleL, fRectangleH, fRectangleW;

//Outputs
float ftriangleC;
float fTrapezoidA;
float fRectangleV;

//function declaration
float CalculateHypotenuse(float,float);
float CalculateTrapezoidArea(float, float, float);
float CalculateRectangleVolume(float, float, float);




int main()
{
    cout << "Please select an option";

    while (bRun) {

        cout << "\n\n1. Calculate the hypotenuse of a triangle\n";
        cout << "2. Calculate the area of a trapezoid\n";
        cout << "3. Calulate the volume of a rectangle\n";
        cout << "4. Exit\n";

        int ichoice;
        cin >> ichoice;

            //Case statment for user to decide which formula to use
            switch (ichoice) {

            case 1://calculate hypotenuse of a triangle a2 + b2 = c2
                
                cout << "Please enter the length of one side of the triangle\n";
                cin >> ftriangleA;
                cout << "Please enter the length of the other side of the triangle\n";
                cin >> ftriangleB;

                ftriangleC = CalculateHypotenuse(ftriangleA, ftriangleB);

                //round answer to 2 decimals
                printf("%.2f", ftriangleC);
                    
                break;
                    
            case 2://calculate area of a trapezoid A = ½(b1+b2)h
                cout << "Please enter the length of one side of the trapezoid\n";
                cin >> fTrapezoidB1;
                cout << "Please enter the length of other side of the trapezoid\n";
                cin >> fTrapezoidB2;
                cout << "Please enter the height of the trapezoid\n";
                cin >> fTrapezoidH;

                //call trapezoid area calc function
                fTrapezoidA = CalculateTrapezoidArea(fTrapezoidB1, fTrapezoidB2, fTrapezoidH);

                //round answer to 2 decimals
                printf("%.2f", fTrapezoidA);

                break;

            case 3://calculate volume of a rectangle volume = length x width x height
                cout << "Please enter the length of the rectangle\n";
                cin >> fRectangleL;
                cout << "Please enter the width of the rectangle\n";
                cin >> fRectangleW;
                cout << "Please enter the height of the rectangle\n";
                cin >> fRectangleH;

                //call rectangle volume function
                fRectangleV = CalculateRectangleVolume(fRectangleL, fRectangleW, fRectangleH);

                //round answer to 2 decimals
                printf("%.2f", fRectangleV);
                break;

            case 4://exit program
                exit(0);
                break;

            default:
                cout << "That is not a valid option, please select again";               
            }
        }
    return 0;
    }


float CalculateHypotenuse(float ftriangleA, float ftriangleB)
{
    return sqrt((ftriangleA * ftriangleA) + (ftriangleB * ftriangleB));
}

float CalculateTrapezoidArea(float fTrapezoidB1, float fTrapezoidB2, float fTrapezoidH)
{
    return (0.5 * (fTrapezoidB1 + fTrapezoidB2)) * fTrapezoidH;
}

float CalculateRectangleVolume(float fRectangleL, float fRectangleW, float fRectangleH)
{
    return (fRectangleH * fRectangleW * fRectangleL);
}
