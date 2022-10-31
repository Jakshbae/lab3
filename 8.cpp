#include <iostream>
#include <math.h>

using namespace std;

float sum(float x, int n) {
    float sum = 1;
    int a;
    int upper = 1;
    int lower = 1;
    for (int i = 1; i <= n; i++) {
        a = 2 * i;
        lower *= a;
        sum += pow(-1, i - 1) * (upper * pow(x, i)) / lower;
        upper *= a - 1;
    }
    return sum;
}

int main() {
    float x;
    int n;
    cin >> x >> n;
    cout << sum(x, n);
    return 0;
