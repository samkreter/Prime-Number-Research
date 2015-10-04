#ifndef NUM_H
#define NUM_H


class PrimeWork {

public:
    /*
        Get the prime factors that make up a number
        param num: the number to be broken down
        return: std vector<int> with all the prime factors, starting from smallest to largest
    */
    std::vector<int>* primeFactoring(int num);
};

#endif