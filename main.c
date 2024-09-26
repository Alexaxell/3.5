#include <stdio.h>

int main(void) {
    int numProdotti;
    float prezzoUnitario, totaleNonScontato, sconto = 0.0, totaleScontato;
    printf("Inserisci il numero di prodotti acquistati: ");
    scanf("%d", &numProdotti);
    printf("Inserisci il prezzo unitario dei prodotto: ");
    scanf("%f", &prezzoUnitario);
    totaleNonScontato = numProdotti * prezzoUnitario;
    if (totaleNonScontato > 50) {
        sconto = 0.20;
    } else if (totaleNonScontato > 10) {
        sconto = 0.10;
    }
    totaleScontato = totaleNonScontato - (totaleNonScontato * sconto);
    printf("l'importo non scontato equivale a: %.2f euro\n", totaleNonScontato);
    printf("lo sconto applicato vale: %.0f%%\n", sconto * 100);
    printf("l'importo scontato equivale a: %.2f euro\n", totaleScontato);

    return 0;
}
