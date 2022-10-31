#include <iostream>
#include <math.h>

using namespace std;

float sum(float x, int n) {
    float sum = 0;
    for (int i = 1; i <= n; i++) {
        if (x < abs(1))
            sum += (pow(-1, (i - 1)) * pow(x, i)) / i;
        else return 0;
    }
    return sum;
}

int main() {
    float x;
    int n;
    cin >> x >> n;
    cout << sum(x, n);
    return 0;
}
