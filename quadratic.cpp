#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c;
    d = (b * b) - 4 * a * c;

    (d > 0) ? 
        cout << "Roots are real and distinct: " 
             << (-b + sqrt(d)) / (2 * a) << " and " 
             << (-b - sqrt(d)) / (2 * a)
    : (d == 0) ? 
        cout << "Roots are real and equal: " 
             << (-b) / (2 * a)
    : 
        cout << "No real roots";
    return 0;
}