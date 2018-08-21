#include <iostream>
#include <cstdlib>
using namespace std;

// Gen. pseudo random number for further auth use.

int genPse(int x) {
    for (int x = 1; x <= 10; x++) {
        cout << 1 + (rand() % 6) << endl;
    }
}


int main (int x) {
    genPse(x);
}

// to be cont.
