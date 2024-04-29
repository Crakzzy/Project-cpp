#include <iostream>
#include <chrono>
#include <vector>

using namespace std::chrono;
using namespace std;

void printAuthors() {
    cout << "Matej Pucik \n Martin Valko" << endl;
}

void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void bubbleSort(vector<int> &array) {
    int n = array.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {

    milliseconds ms = duration_cast<milliseconds>(
            system_clock::now().time_since_epoch()
    );

    int arr[] = {12, 11, 13, 5, 6, 7, 1, 2, 3, 4};
    vector<int> vec = {12, 11, 13, 5, 6, 7, 1, 2, 3, 4};

    auto start = high_resolution_clock::now();

    for (int i = 0; i < 1000; i++) {
        selectionSort(vec);
        bubbleSort(vec);
        insertionSort(arr, 10);
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << duration.count() << endl;
    cout << ms.count() << endl;

    vec.clear();

    return 0;
}
