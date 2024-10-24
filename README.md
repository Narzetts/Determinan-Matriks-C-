---

# Determinant of a 2x2 Matrix Program

This C++ program calculates the determinant of a 2x2 matrix. The user is prompted to enter the elements of the matrix, and the program computes and displays the determinant.

## Features
- Input elements for a 2x2 matrix.
- Computes the determinant of the matrix using the formula `|A| = a1 * a4 - a2 * a3`.
- Displays the result of the determinant.

## Code Explanation

```cpp
#include <iostream>
using namespace std;

int a1, a2, a3, a4;  // Variables to store matrix elements
int menu;

int main() {
    // Displaying a header
    cout << "=========================================" << endl;
    cout << "Menghitung Determinan Matriks 2x2" << endl;  // "Calculating 2x2 Matrix Determinant"
    cout << "=========================================" << endl;
    
    // User input for the matrix elements
    cout << "Masukkan a1: "; cin >> a1;
    cout << "Masukkan a2: "; cin >> a2;
    cout << "Masukkan a3: "; cin >> a3;
    cout << "Masukkan a4: "; cin >> a4;

    // Calculating the determinant using the formula a1 * a4 - a2 * a3
    int det = a1 * a4 - a2 * a3;
    
    // Displaying the result
    cout << "=========================================" << endl;
    cout << "|A| = " << det << endl;  // Displaying the determinant
    cout << "=========================================" << endl;

    return 0;  // Program terminates
}
```

## How to Run the Program
1. Compile the program using a C++ compiler:
   ```bash
   g++ determinant.cpp -o determinant
   ```
2. Run the program:
   ```bash
   ./determinant
   ```

3. Follow the on-screen instructions to input matrix elements.

## Example Input and Output

- Input:
  ```
  Masukkan a1: 2
  Masukkan a2: 3
  Masukkan a3: 4
  Masukkan a4: 5
  ```

- Output:
  ```
  =========================================
  |A| = -2
  =========================================
  ```

## Formula Used
For a 2x2 matrix:
```
|A| = a1 a2
      a3 a4
```

The determinant is calculated as:
```
|A| = (a1 * a4) - (a2 * a3)
```

---
