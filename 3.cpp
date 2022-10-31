#include <iostream>
#include <math.h>

using namespace std;

float sum(int x, int n) {
    float sum = x;
    int a;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        a = 2 * i + 1;
        fact *= a * (a - 1);
        sum += (pow(-1, i) * pow(x, a)) / fact;
    }
    return sum;
}

int main() {
    int x, n;
    cin >> x >> n;
    cout << sum(x, n);
    return 0;
}