#include <stdio.h> // headers
int main (){

    //Pour int
    int a = 145; // Variable qu'on va parcourir avec le pointeur
    char *pt_int =(char*)&a; // On créé notre pointeur qu'on va aussitôt convertir en string (char*) 
    
    // On fait une première boucle for pour "avancer" notre pointeur au dernier octet de la variable
    for(int i=0;i<3;i++){
        *pt_int ++;
    }
    printf("Valeur du int : ");
    
    // Grâce à la boucle for précédente, il ne nous reste plus qu'à afficher les diffréents octets en décrémentant le pointeur ( pour avoir la valeur dans le bon sens)	
    for(int i=0;i<4;i++){
        printf("%hhx",*pt_int);
        *pt_int--;
    }
    printf("\n");

    // Pour short
    short b = 4008;
    char *pt_short =(char*)&b;
    for(int i=0;i<sizeof(b)-1;i++){	//Comme notre pointeur est sur le 1er octet de la variable, on va jusqu'à sa taille - 1 pour être à la fin.
        *pt_short ++;
    }
    
    printf("Valeur du short : ");
    for(int i=0;i<sizeof(b);i++){
        printf("%hhx",*pt_short);
        *pt_short--;
    }
    printf("\n");

    // Pour long int
    long int c = 12008;
    char *pt_lint =(char*)&c;
    for(int i=0;i<sizeof(c)-1;i++){
        *pt_lint ++;
    }
    
    printf("Valeur du long int : ");
    for(int i=0;i<sizeof(c);i++){
        printf("%hhx",*pt_lint);
        *pt_lint--;
    }
    printf("\n");

    // Pour float
    float d = 12.08;
    char *pt_f =(char*)&d;
    for(int i=0;i<sizeof(d)-1;i++){
        *pt_f ++;
    }
    
    printf("Valeur du float : ");
    for(int i=0;i<sizeof(d);i++){
        printf("%hhx",*pt_f);
        *pt_f--;
    }
    printf("\n");

    // Pour double
    double e = 1500;
    char *pt_d =(char*)&e;
    for(int i=0;i<sizeof(e)-1;i++){
        *pt_d ++;
    }
    
    printf("Valeur du double : ");
    for(int i=0;i<sizeof(e);i++){
        printf("%hhx",*pt_d);
        *pt_d--;
    }
    printf("\n");

    // Pour long double
    long double f = 144.285; 
    char *pt_ld =(char*)&f;
    for(int i=0;i<sizeof(f)-1;i++){
        *pt_ld ++;
    }
    
    printf("Valeur du long double : ");
    for(int i=0;i<sizeof(f);i++){
        printf("%hhx",*pt_ld);
        *pt_ld--;
    }
    printf("\n");

return 0;
}
