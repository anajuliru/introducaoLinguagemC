//Atividade vetores questao 2  03/05

#include <iostream>
#include <stdlib.h>
using namespace std;


int main(void) {
    int I, A[8], B[8], mult;

    cout << " Digite os 8 numeros apertando em <ENTER> apos cada um" << endl;
    for (I = 0; I < 8; I++) {
        cout << " Digite o numero escolhido " << I + 1 << endl;
        cin >> A[I];
        B[I] = (A[I] * 3);
        
    }

        for (I = 0; I < 8; I++) {
            mult = A[I] * B[I];
            cout << "Valor de " << A[I] << " x " << B[I] << " eh igual a " << mult << endl;

        }
        
        return 0;
}