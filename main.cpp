#include <iostream>
#include <vector>

#include "PrimeWork.h"

using namespace std;

int main(){


    PrimeWork p;

    vector<int>* primes = p.primeFactoring(50);


    for(int i = 0; i < primes->size(); i++){
        cout<<primes->at(i)<<" ";
    }

    delete primes;

    return 0;
}