#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T half(T);

int half(int);

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}

template <typename T>
T half(T input)
{
    return input / 2;
}

int half(int input)
{
    return round(input / 2.0f);
}
