#include <iostream>
#include <math.h>

using namespace std;

double sum(int n, int x)
{
    double sum = 1;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += pow(x, i) / fact;
    }
    return sum;
}

int main()
{
    int n, x;
    cin >> n;
    cin >> x;
    cout << sum(n, x);
    return 0;
}