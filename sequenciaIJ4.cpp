#include <iostream>
using namespace std;

int main() {
    float i = 0;
    while(i <= 2.1) {
        for(float j = 1 ; j <= 3 ; j++)
            cout << "I=" << i << " J=" << (j + i) << endl;
        i+=0.2;
    }
    return 0;
}