
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float l = 0.015;
    float p = 1.1;
    float m = 0.000018;
    int VELOCITY[5] = {1, 2, 5, 10, 20};
    int i = 0;
    while (i <= 4) 
    {
        int W = VELOCITY[i];
        float Re = (W * l * p) / m;
        float Epsilon = 0;
        if (Re < 2500)
        {
            Epsilon = 2.62 / pow(Re,0.65);   
        }
        else if (Re > 2500)
        {
            Epsilon =  0.125 / pow(Re,0.26);   
        }
        cout << "Число Рейнольдса равняется " << Re << ", а коэффициент сопротивления плоскопараллельной насадки химической колонны равняется " << Epsilon << endl;
        i++;
    }
}