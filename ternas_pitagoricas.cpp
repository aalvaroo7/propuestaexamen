#include <iostream>
#include <cmath>
using namespace std;

// Programa que imprime todas las ternas pitagóricas
// para las cuales a, b y c son menores o iguales a n.


int main() {
    int n;
    cout << "Ingrese el valor máximo para c: ";
    cin >> n;
    for (int c = 1; c <= n; c++) {
        for (int b = 1; b < c; b++) {
            for (int a = 1; a < b; a++) {
                if (a*a + b*b == c*c) {
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }