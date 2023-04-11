#include <cmath>
#include <iostream>

using namespace std;

double pi = 3.14159265358979;

struct Point {
    double px, py;
};

int N;
Point G[2009];

double getangle(Point G) {
    if (G.py >= 0.0) {
        double I = G.px / sqrt(G.px * G.px + G.py * G.py);
        double kaku = acos(I) * 180 / pi;
        return kaku;
    } else {
        double I = G.px / sqrt(G.px * G.px + G.py * G.py);
        double kaku = acos(I) * 180 / pi;
        return 360.0 - kaku;
    }
}

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
    }
}
