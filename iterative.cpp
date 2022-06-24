#include <iostream>

using namespace std;

int binarySearchIterative(int array[], int left, int right, int objective) {
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == objective) {
            return mid;
        }
        if (array[mid] > objective) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}


int main() {
    int array[] = {4, 7, 20, 125, 555, 777};
    int objective = 125;
    int sizeArray = 6;
    int result = binarySearchIterative(array, 0, sizeArray - 1, objective);
    if (result == -1)
    {
        cout << "El elemento objetivo no está en el array" << endl;
    } else
    {
        cout << "El elemento está en el array en la posición " << result << endl;
    }
}