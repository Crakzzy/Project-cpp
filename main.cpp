#include <iostream>
#include <chrono>

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

int main() {

    milliseconds ms = duration_cast< milliseconds >(
            system_clock::now().time_since_epoch()
    );

    cout << ms.count() << endl;

    return 0;
}
