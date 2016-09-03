#include <iostream>
#include "Random_Number_Generation.h"

using namespace std;

int main()
{
    Random rand;

    int n = 100000;

    double tot;

    for (int i=0; i<n; i++) {
        double a = rand.getRandom();
        double b = rand.getRandom();
        if (a*a + b*b < 1)
            tot += 1;
    }

    tot /= n;

    tot *= 4;

    cout << tot << endl;

    cout << "Hello world!" << endl;
    return 0;
}
