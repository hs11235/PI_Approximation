#ifndef RANDOM_NUMBER_GENERATION_H_INCLUDED
#define RANDOM_NUMBER_GENERATION_H_INCLUDED

class Random {
private:
    const int a = 16807;
    const int m = 2147483647;
    unsigned int I = 1;
public:
    Random() {}
    double getRandom() {
        for (int i=0; i<10; i++) {
            I = a * I;
            I = I % m;
        }

        double output = (double)I / (double)m;
        return output;
    }
};

#endif // RANDOM_NUMBER_GENERATION_H_INCLUDED
