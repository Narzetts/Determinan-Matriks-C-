#include <iostream>
using namespace std;

int a1, a2, a3, a4;  
int menu;

int main() {
     cout << "=========================================" << endl;
    cout << "Menghitung Determinan Matriks 2x2" << endl;
    cout << "=========================================" << endl;
    
    cout << "Masukkan a1: "; cin >> a1;
    cout << "Masukkan a2: "; cin >> a2;
    cout << "Masukkan a3: "; cin >> a3;
    cout << "Masukkan a4: "; cin >> a4;

    int det = a1 * a4 - a2 * a3;
    
    cout << "=========================================" << endl;
    cout << "|A| = " << det << endl;
     cout << "=========================================" << endl;

    return 0;
}
