#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int n=4; //numero de ternas pitagoricas que deseamos calcular(las 4 primeras)
    int i=1; //contador de ternas
    for (int i = 1; i <= n; i++) {
        for (int a = 1; a <= 20; a++) {
            for (int b = a + 1; b <= 20; b++) {
                int c = sqrt(a * a + b * b);
                if (c * c == a * a + b * b) {
                    cout << "Terna Pitagórica #" << i << ": " << a << ", " << b << ", " << c << endl;
                    i++;
                }
            }
}