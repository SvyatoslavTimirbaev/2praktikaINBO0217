#include <cstdlib>
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float a = -0.6, b = 5.3, z, t;

    if (a < b) {
        z = sqrt(abs(pow(a, 2) - pow(b, 2)));
    }
    else {
        z = 1 - 2*cos(a)*sin(b);

    }

    if (z < b) {
        t = pow((z + pow(a, 2)*b), 1.0/3.0);
    }
    if (z == b) {
        t = 1 - log10(z) + cos(pow (a, 2) * b);
    }
    if (z > b) {
        t = 1/cos(z*a);
    }
    cout << "a = " << a << "\nb = " <<  b <<  "\nz = " << z << "\nt = " << t;

}