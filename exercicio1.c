#include <stdio.h>

/*1. Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em dec�metros, cent�metros e mil�metros*/

int main (void){
float metros,dm,cm,mm;
printf ("digite um valor em metros: ");
scanf("%f",&metros);
printf("\no valor lido foi: %.1fm",metros);
dm = metros * 10;
cm = metros * 100;
mm = metros * 1000;
// queria ter usado a biblioteca locale, mas tava bugando o sistema, ao inv�s de ler 1.9, s� lia 1.0, ent�o tirei.
printf("\no valor convertido para cm: %.1fcm",cm);
printf("\no valor convertido para dm: %.1fdm",dm);
printf("\no valor convertido para mm: %.1fmm",mm);
return 0;
}