#include <iostream>
#include <chrono>

using namespace std::chrono;
using namespace std;

void printAuthors() {
    cout << "Matej Pucik \n Martin Valko" << endl;
}

int main() {

    milliseconds ms = duration_cast< milliseconds >(
            system_clock::now().time_since_epoch()
    );

    cout << ms.count() << endl;

    return 0;
}
