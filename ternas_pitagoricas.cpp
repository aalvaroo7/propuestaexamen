#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int i;
    cout<< "que terna pitagorica deseas calcular"<<endl;
    cin>>i;
    for (int i = 1;i<5; i++) {
        for (int a = 1; a <= 20; a++) {
            for (int b = a + 1; b <= 20; b++) {
                int c = sqrt(a * a + b * b);
                if (c * c == a * a + b * b) {
                    cout << "Terna Pitagórica #" << i << ": " << a << ", " << b << ", " << c << endl;
                    i++;
                    return 0;
                }
            }
        }
    }
}