#include <iostream>
using namespace std;
double sum(int n)
{
    double sum = 1;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += 1.0 / fact;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
