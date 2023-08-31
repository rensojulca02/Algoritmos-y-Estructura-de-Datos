#include <iostream>
using namespace std;

int main()
{
    int frec[101] = {10};
    int n = 10;
    int vec[10] = {
        12,
        0,
        13,
        1,
        43,
        47,
        49,
        34,
        44,
        16
    };

    for (int i = 0; i < n; i++) { 
        frec[vec[i]]++; 
    }

    int pos = 0; // 1

    for (int i = 0; i < 101; i++) { 
        for (int k = 0; k < frec[i]; k++) {
            vec[pos] = i;
            pos++;
        }
    }
    return 0;
}
