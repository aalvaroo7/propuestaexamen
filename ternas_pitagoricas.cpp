#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n;
    cout << "Ingrese el valor máximo para c: ";
    cin >> n;
    for (int c = 1; c <= n; c++) {
        for (int b = 1; b < c; b++) {