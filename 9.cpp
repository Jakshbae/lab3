#include <iostream>
#include <array>

using namespace std;

void partition(float a, float b, int n) {
    float h = (b - a) / n;
    float arr[n + 1];
    for (int i = 0; i < n + 1; i++) {
        arr[i] = a + i * h;
    }
    cout << "length: " << h << endl;
    for (int i = 0; i < n + 1; i++) {
        cout << arr[i] << ", ";
    }
}

int main() {
    float a, b, n;
    cin >> a >> b >> n;
    partition(a, b, n);
    return 0;
}
