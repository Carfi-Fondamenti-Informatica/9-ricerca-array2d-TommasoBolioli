//
// Created by tomma on 10/12/2021.
//

#include "lib.h"
#include <cstring>

bool funzione(char matrice [10][20], char nome [1][20], int &pos){
    for (int i=0; i<10; i++){
        if (strcmp(matrice [i], nome[0])==0){
            pos=i;
            return true;
        }
    }
    return false;
}
