#include <cmath>
#include <complex>
#include <iomanip>
#include <iostream>

using namespace std;
double a, b;
double d;
static const double pi = 3.141592653589793;

int main() {
    cin >> a >> b >> d;
    complex<double> c(a, b);
    complex<double> x(cos(d * pi / 180), sin(d * pi / 180));
    cout << fixed << setprecision(15) << (c * x).real() << ' ' << fixed
         << setprecision(15) << (c * x).imag() << endl;
    return 0;
}
