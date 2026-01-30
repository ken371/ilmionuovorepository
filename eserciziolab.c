#include <stdio.h>
float somma(float numero1, float numero2){
    return numero1 + numero2;
}

int main()
{
    int numero1 = 0;
    int numero2 = 0;
    int scelta = 0;
    int risultato = 0;
    
    
printf("1. Addizione\n2. Sottrazione\n3. Moltiplicazione\n4. Divisione\n Scegli l'operazione che vuoi usare: ");
scanf("%d", &scelta);

if(scelta == 1){
    printf("Inserisci il primo numero: ");
    scanf("%f", &numero1);
    
     printf("Inserisci il secondo numero: ");
    scanf("%f", &numero2);
    
    risultato = somma(numero1, numero2);
  printf("Risultato addizione: %f\n", risultato);}else if(scelta == 2){
    
}else if(scelta == 3){
    
}else if(scelta == 4){
    
}else
    return 0;
}
