#include <iostream>
#include <vector>

#include "include/PrimeWork.h"

using namespace std;

int main(){

    vector<int>* primes;

    int input = 0;
    cout<<"Enter a number: ";
    cin>>input;

    while(input != 0){
        primes = PrimeWork::primeFactoring(input);

        for(int i = 0; i < primes->size(); i++){
            cout<<primes->at(i)<<" ";
        }
        cout<<endl;
        primes->clear();
        cout<<endl<<"enter a number: ";
        cin>>input;
    }


    delete primes;

    return 0;
}