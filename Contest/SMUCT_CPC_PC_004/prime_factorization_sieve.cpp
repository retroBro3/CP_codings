#include <bits/stdc++.h>
using namespace std;

#define n 1000000

void sieve(vector<int>&primeFactors) {
    for (int i=0; i<=n; i++) {
        primeFactors[i] = i;
    }
    for (int i=2; i*i<=n; i++) {
        if (primeFactors[i] == i) {
            for (int j=i*i; j<=n; j = j+i) {
                if (primeFactors[j] == j) {
                    primeFactors[j] = i;      
                }
            }
        }
    }
}

void print(vector<int>&pf, int key) {
    while (key!=1) {
        cout << pf[key] << " ";
        key = key / pf[key];
    }
}

int main()
{
    vector<int>prime_sieve(n+1,0);
    sieve(prime_sieve);
    print(prime_sieve, 36);
    return 0;
}