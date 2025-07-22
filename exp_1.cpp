#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World! \n";
    float n, m, sum, sub, div, mul;
    cout << "Enter first numbers: ";
    cin >> n;
    cout << "Enter second number: ";
    cin >> m;
    sum = n + m;
    sub = n - m;
    div = n / m;
    mul = n * m;
    cout << "Addition of both numbers : " << sum << endl;
    cout << "Subtraction of both numbers : " << sub << endl;
    cout << "Division of both numbers : " << div << endl;
    cout << "Multiplication of both numbers : " << mul << endl;

    return 0;
}
