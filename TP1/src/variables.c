#include <stdio.h> // headers

int main(){
    signed char ch = 'b';
    unsigned char charun = 'b';
    signed short shsi = 10;
    unsigned short ush = 10;
    signed int a = 12;
    unsigned int b = 12;
    signed long int c = 400;
    unsigned long int d = 400;
    signed long long int e = 15000;
    unsigned long long int f = 15000;
    float g = 1.456;
    double h = 1.28;
    long double i = 1.111112;
    
   

    printf("La variable signé (char) %c est de taille %ld octets\n",ch,sizeof(ch));
    printf("La variable non signé b est de taille %ld octets\n\n",sizeof(charun));
    printf("La variable signé (short) 10 est de taille %ld octets\n",sizeof(shsi));
    printf("La variable non signé 10 est de taille %ld octets\n\n",sizeof(ush));
    printf("La variable signé (int) 12 est de taille %ld octets\n",sizeof(a));
    printf("La variable non signé 12 est de taille %ld octets\n\n",sizeof(b));
    printf("La variable signé (long int) 400 est de taille %ld octets\n",sizeof(c));
    printf("La variable non signé 400 est de taille %ld octets\n\n",sizeof(d));
    printf("La variable signé (long long int) 15000 est de taille %ld octets\n",sizeof(e));
    printf("La variable non signé 15000 est de taille %ld octets\n\n",sizeof(f));
    printf("La variable (float) 1.456 est de taille %ld octets\n",sizeof(g));
    printf("La variable (double) 1.28 est de taille %ld octets\n",sizeof(h));
    printf("La variable (long double) 1.111112 est de taille %ld octets\n",sizeof(i));

}