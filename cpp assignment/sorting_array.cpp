#include <iostream>
#include <algorithm>

using namespace std;

// function to sort an array of integers
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// function to sort an array of characters
void sort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// function to sort an array of floating point numbers
void sort(float arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int intArr[] = {5, 2, 8, 1, 9};
    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    sort(intArr, n1);
    cout << "Sorted array of integers: ";
    for (int i = 0; i < n1; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    char charArr[] = {'c', 'a', 'f', 'b', 'e'};
    int n2 = sizeof(charArr) / sizeof(charArr[0]);
    sort(charArr, n2);
    cout << "Sorted array of characters: ";
    for (int i = 0; i < n2; i++) {
        cout << charArr[i] << " ";
    }
    cout << endl;

    float floatArr[] = {4.5, 2.1, 3.7, 1.3, 9.2};
    int n3 = sizeof(floatArr) / sizeof(floatArr[0]);
    sort(floatArr, n3);
    cout << "Sorted array of floating point numbers: ";
    for (int i = 0; i < n3; i++) {
        cout << floatArr[i] << " ";
    }
    return 0;
}
