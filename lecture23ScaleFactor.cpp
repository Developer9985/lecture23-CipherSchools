#include <iostream>
using namespace std;

int main() {
    int intArr[5] = {1, 2, 3, 4, 5};
    double doubleArr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    int* intPtr = intArr;
    double* doublePtr = doubleArr;

    cout << "Initial address of intPtr: " << intPtr << endl;
    cout << "Initial address of doublePtr: " << doublePtr << endl;

    // Increment pointers
    intPtr++;
    doublePtr++;

    cout << "\nAddress of intPtr after incrementing: " << intPtr << endl;
    cout << "Address of doublePtr after incrementing: " << doublePtr << endl;

    // Display the difference in addresses
    cout << "\nDifference in addresses (int pointer): " << intPtr - intArr << endl;
    cout << "Difference in addresses (double pointer): " << doublePtr - doubleArr << endl;

    // Show values after incrementing
    cout << "\nValue pointed to by intPtr: " << *intPtr << endl;
    cout << "Value pointed to by doublePtr: " << *doublePtr << endl;

    return 0;
}
