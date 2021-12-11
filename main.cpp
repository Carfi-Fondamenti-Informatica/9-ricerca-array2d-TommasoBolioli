#include <iostream>
using namespace std;
#include "lib.h"


int main() {
    int posizione;
    char a[10][20], confronto[1][20];
    for (int i=0; i<10; i++) {
        cin >> a[i];

    }
    cin>> confronto[0];

    if (funzione(a,confronto,posizione)){
        cout << posizione << endl;
    }else{
        cout << "non presente" << endl;
    }
    return 0;}
