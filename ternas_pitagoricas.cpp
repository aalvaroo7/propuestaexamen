#include <iostream>
#include <cmath>
using namespace std;

// Programa que imprime todas las ternas pitagóricas
// para las cuales a, b y c son menores o iguales a n.


int main() {
    int n;
    cout << "Ingrese el valor de a: ";
    cin >> n;
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b < a; b++) {
            for (int c = 1; c < b; a++) {
                if (a * a + b * b == c * c) {
                    cout << a << " " << b << " " << c << endl;
                    return 0;


                }
            }
        }
    }
