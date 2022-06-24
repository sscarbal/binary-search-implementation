#include <iostream>

using namespace std;

int binarySearchRecursive(int array[], int left, int right, int objective){
    if (right >= left)
    {
        int mid = left + (right - left) / 2;
        if (array[mid] == objective)
        {
            return mid;
        }
        if (array[mid] > objective)
        {
            return binarySearchRecursive(array, left, mid - 1, objective);
        }
        return binarySearchRecursive(array, mid + 1, right, objective);        
    }
    return -1;    
}

int main() {
    int array[] = {4, 7, 20, 125, 555, 777};
    int objective = 125;
    int sizeArray = 6;
    int result = binarySearchRecursive(array, 0, sizeArray - 1, objective);
    if (result == -1)
    {
        cout << "El elemento objetivo no está en el array" << endl;
    } else
    {
        cout << "El elemento está en el array en la posición " << result << endl;
    }
}