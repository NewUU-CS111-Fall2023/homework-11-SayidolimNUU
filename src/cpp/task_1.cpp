/*
 * Author: Sayidolimxon Usmanxonov
 * Date: 23.01.2024
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int arraySize, target, sum = 0, c = 0, k;
    cout << "Enter array size:" << endl;
    cin >> arraySize;
    int array[arraySize];
    cout << "Enter the array:" << endl;
    for (int i = 0; i < arraySize; ++i) cin >> array[i];
    cout << "Enter the target:" << endl;
    cin >> target;
    for (int i = 1; i < pow(2, arraySize); ++i) {
        k = i;
        for (int j = 0; j < arraySize; ++j) {
            if (k % 2) sum += array[j];
            else sum -= array[j];
            k /= 2;
        }
        if (sum == target) {
            ++c;
        }
        sum = 0;
    }
    cout << c << endl;
    return 0;
}
