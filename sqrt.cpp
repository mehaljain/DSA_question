#include <iostream>
using namespace std;

double sqrtBinarySearch(double n, double epsilon = 0.00001) {
    if (n < 0) return -1;  // Return -1 for invalid input (square root of negative number)

    double low = 0, high = n;
    double mid;

    // Continue until the range is smaller than epsilon
    while (high - low > epsilon) {
        mid = (low + high) / 2.0;

        if (mid * mid > n) {
            high = mid;  // Move the high pointer
        } else {
            low = mid;  // Move the low pointer
        }
    }

    return (low + high) / 2.0;
}

int main() {
    double n;
    cout << "Enter a number: ";
    cin >> n;

    double result = sqrtBinarySearch(n);
    if (result == -1) {
        cout << "Invalid input, cannot find square root of a negative number." <<endl;
    } else {
        cout << "The square root of " << n << " is approximately " << result <<endl;
    }

    return 0;
}
