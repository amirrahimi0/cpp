#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<float, float, float> A[10];
    int n;
    cin >> n;

    // Input validation and storing the values in tuples
    for (int x = 0; x < n; x++) {
        cin >> get<0>(A[x]) >> get<1>(A[x]) >> get<2>(A[x]);
        if (get<0>(A[x]) < 0 || get<1>(A[x]) < 0 || get<2>(A[x]) < 0 || 
            get<0>(A[x]) > 20 || get<1>(A[x]) > 20 || get<2>(A[x]) > 20) {
            cout << "Invalid Input";
            return 0;
        }
    }

    // Sorting the tuples based on the first element
    for (int x = 0; x < n; x++) {
        for (int y = x + 1; y < n; y++) {
            if (get<0>(A[x]) > get<0>(A[y])) {
                A[y].swap(A[x]);
            }
        }
    }

    // Sorting the tuples with the same first element based on the second element
    for (int x = 0; x < n; x++) {
        for (int y = x + 1; y < n; y++) {
            if (get<0>(A[x]) == get<0>(A[y]) && get<1>(A[x]) > get<1>(A[y])) {
                A[y].swap(A[x]);
            }
        }
    }

    // Sorting the tuples with the same first and second elements based on the third element
    for (int x = 0; x < n; x++) {
        for (int y = x + 1; y < n; y++) {
            if (get<0>(A[x]) == get<0>(A[y]) && get<1>(A[x]) == get<1>(A[y]) && get<2>(A[x]) > get<2>(A[y])) {
                A[y].swap(A[x]);
            }
        }
    }

    // Output the sorted tuples
    for (int x = 0; x < n; x++) {
        cout << get<0>(A[x]) << " " << get<1>(A[x]) << " " << get<2>(A[x]) << endl;
    }

    return 0;
}
