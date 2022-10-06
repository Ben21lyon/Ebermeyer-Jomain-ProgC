#include <stdio.h> // headers
int main(){
    // Initialisations de compteurs pour les différents cas de l'exercice
    int cpt = 0 ;
    int cpt1 = 0 ;
    int cpt2 = 0 ;
    printf("Les nombres <1000 et divisibles par 2 et 15 sont : \n");
    //Utilisation d'une condition avec Do/while
    do{
        cpt += 1; //Compteur qui parcourt les chiffres de 0 à 1000
        if(cpt%2 == 0 & cpt%15 == 0) {  // On vérifie si le nombre est divisible par 2 et par 15 grâce aux resstes des divisions
            printf("%i;",cpt);
        }    
    }while(cpt<1000);
    printf("\n");
    printf("Les nombres <1000 divisibles par 103 ou 107 sont : \n");
    //Utilisation d'une condition avec for
    for (cpt1 =0;cpt1<1000;cpt1++){
        if (cpt1%103 == 0 || cpt1%107 == 0){ //Ici on utilise un (ou ||) et non un (et &)
            printf("%i,",cpt1);
        }
    }
    printf("\nLes nombres <1000 divisibles par 5 ou 7 mais pas par 3 sont : \n");
    //Utilisation d'une condition avec une boucle while qui parcourt les nombres de 0 à 1000
    while(cpt2<1000){
        if (cpt2%7 == 0 || cpt2%5 == 0) { //On vérifie d'abord si notre nombre est divisible par 5 ou 7
            if(cpt2%3 != 0){              //On vérifie ensuite si notre nombre n'est pas divisible par 3 càd que le reste de la division soit différent de 0
                printf("%i;",cpt2);
            }
        }
        cpt2++;
    }
return 0 ;

}


