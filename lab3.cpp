#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int rrand(int range_min, int range_max) {
    return rand() % (range_max - range_min + 1) + range_min;

}

int main(){
    setlocale(LC_ALL, "Russian");

    srand(static_cast<unsigned int>(time(NULL)));


    const unsigned int ARRSIZE = 10;
    const int ABSLIMIT = 100;

    int ary[ARRSIZE];

        
    for (unsigned int i = 0; i < ARRSIZE; i++) {
            ary[i] = rrand(-ABSLIMIT, ABSLIMIT);
        }

    for (int i = 0; i < ARRSIZE; i++) {
        cout << ary[i] << endl;
    }
    int min = 0;

    for (int i = 0; i < ARRSIZE; i++)
    {
        if (ary[min] > ary[i]) min = i;
    }
    cout << "\n минимальный элемент в массиве[" << min << "] = " << ary[min];
}