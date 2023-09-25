#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n; cin>> n;
    vector<int>v[n];

    for(int i= 0; i<n; i++){
        int x; cin>> x;
        for(int j=0; j<x; j++){
            int a; cin>> a;
            v[i].push_back(a);
        }
    }

    for(int j=0; j<n; j++){
        for(auto i: v[j]) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}