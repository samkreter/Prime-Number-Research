#include <iostream>
#include <vector>
#include <cmath>


#include "../include/PrimeWork.h"


//Works for all number besides ones involving 25
std::vector<int>* PrimeWork::primeFactoring(int num){

    std::vector<int>* primes = new std::vector<int>();

    while(num % 2 == 0){
        primes->push_back(2);
        num = num / 2;
    }

    for(int i = 3; i < sqrt(num); i = i + 2){
        while(num % i == 0){
            primes->push_back(i);
            num = num / i;
        }
    }

    if( num > 2){
        primes->push_back(num);
    }

    return primes;
}