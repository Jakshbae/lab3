#include <iostream>
#include <math.h>

using namespace std;

float sum(float x, int n) {
    float sum = x;
    for (int i = 1; i <= n; i++) {
        if (abs(x) < 1) {
            sum += (pow(-1, i) * pow(x, (2 * i + 1))) / (2 * i + 1);
        }
        else {
        }
    }
    return sum;
}

int main() {
    float x;
    int n;
    cin >> x >> n;
    cout << sum(x, n);
    return 0
}