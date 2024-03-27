#include <iostream>
#include <string>

using namespace std;

/*
    sqrt_nr(x,i) = {
                        1, i = 0;
                        (sqrt_nr(x, i - 1) + x/sqrt_nr(x,i-1))/2, i > 0
    }
*/

int sqrt_nr(int x, int i){
    if(i == 0) return 1;

    return (sqrt_nr(x, i - 1) + (x/sqrt_nr(x,i-1)))/2;
}

int main(){
    int x, i, result;

    while(1){
        
        cout << "Programa de Raiz Quadrada - Newton-Rapson" << endl << "Desenvolvedores: < Sophia, Bruna>" << endl;

        cout << "Digite os parâmetros de x e i para calcular sqrt_nr (x,i) ou -1 para abortar a execução" << endl;

        cin >> x >> i;

        if(x >=0 && i >= 0) result = sqrt_nr(x,i);
        else break;

        cout << "sqrt(" << x << "," << i << ") = " << result << endl;
    }

    return 0;
}