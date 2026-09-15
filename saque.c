#include <stdio.h>
int main(){
    int saque=0, cedulas=0, saldo=0;
    
    printf("Digite o valor do saque---: ");
    scanf("%d", &saque);

    cedulas = saque / 50;
    saldo = saque % 50;

    cedulas = saldo / 20;
    saldo%=20;

    cedulas = saldo / 10;
    saldo%=10;

    printf("Cedulas R$ 50: %d\n",cedulas);
    printf("Cedulas R$ 20: %d\n",cedulas);
    printf("Cedulas R$ 10: %d\n",cedulas);

    if(saque%10!=0){
       printf("Nao e possivel sacar R$ %d \n",saque); 
       return 1
    }

    return 0;
}