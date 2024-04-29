#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

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

    milliseconds ms = duration_cast< milliseconds >(
            system_clock::now().time_since_epoch()
    );

    cout << ms.count() << endl;

    return 0;
}
