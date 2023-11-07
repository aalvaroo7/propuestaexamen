#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int a
        cout<<"ingrese el primer lado"<<endl;
        cin>>a;
        for (int a = 3; a <= 20; a++) {
            while(a!=3||a!=5||a!=6||a!=8)
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