#include <iostream>
#include <chrono>
#include <vector>

using namespace std::chrono;
using namespace std;

void printAuthors() {
    cout << "Matej Pucik \n Martin Valko" << endl;
}

void selectionSort(std::vector<int>& arr) {
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

void bubbleSort(vector<int>& array) {
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

int main() {

    milliseconds ms = duration_cast< milliseconds >(
            system_clock::now().time_since_epoch()
    );

    cout << ms.count() << endl;

    return 0;
}
