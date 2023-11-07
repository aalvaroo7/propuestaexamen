#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cout<<"ingrese el primer lado"<<endl;
    cin>>a;
for(a=0;a<10;a++) {
    if (a == 3 || a == 5 || a == 6 || a == 8)
        continue;
    int b;
    cout << "ingrese el segundo lado" << endl;
    cin >> b;
    for (b = 0; b < 20; b++) {
        while (b==4 ||b==8||b== 15)
            continue;
        int c;
        c = sqrt(a * a + b * b);
        cout << "el triangulo tiene lados" << a << "," << b << "," << c << endl;
    }
}
return 0;
}
