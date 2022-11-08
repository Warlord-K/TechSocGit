#include <iostream>
using namespace std;
int power(int a, int b);
int main()
{
    int a, b;
    cout << "the value of a is " << endl;
    cin >> a;
    cout << "the value of b is " << endl;
    cin >> b;
    cout << "the value of sum is " << a + b << endl;
    cout << "the value of product is " << a * b << endl;
    cout << "the value of subtraction is " << a - b << endl;
    cout << "the value of division is " << a / b << endl;
    cout << "the value of a to the power b is " << power(a, b) << endl;
}
int power(int a, int b)
{
    int p = 1;
    for (int i = 1; i <= b; i++)
    {
        p = p * a;
    }
    return p;
}
