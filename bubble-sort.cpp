#include <iostream>
using namespace std;

template <class T>
void bubblesort(T A[5]) {
    int i, j;
    T temp;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (A[i] < A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }
}

int main() {
    double A[5];
    int i;
    cout << "Enter 5 elements:" << endl;
    for (i = 0; i < 5; i++) {
        cin >> A[i];
    }
    cout << "Sorted elements: ";
    bubblesort(A);
    return 0;
}
