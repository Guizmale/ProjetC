#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*

Page des fonction codant les conversions de nombres en base décimale vers 
les autres bases

**/


/*<------------------------------------------------------------------------>*/
// fonction de vonversion du decimal vers le binaire ///
void decimalToBinary(int nbrDecimal){
    
    int i = 0;
    int moduloNB [50];    
    int a;
    int compteur = i;

    while( nbrDecimal > 1){
        a = nbrDecimal%2;
         
        moduloNB [i]= a;
        nbrDecimal =nbrDecimal /2;
        
        if (nbrDecimal == 1)
        {
            moduloNB[i+1]= nbrDecimal;
        }    
        i++;   
    compteur= i;
    }     
   for (int i = compteur; i >=0; i--)
    {
        printf("%d ", moduloNB[i]);
    }

}
// fonction de conversion du decimal vers hexadécimal ///
void decimalToHexadecimal(int nbrDecimal){
    int moduloNB [50];    
    int a=0;
    int i = 0;
    int compteur = i;

    for (int i = 0; i < 50; i++)
    {
        while( nbrDecimal >= 1)
        {
            a = nbrDecimal%16;
            moduloNB [i]= a;
            nbrDecimal =nbrDecimal /16;    
            if (nbrDecimal <=16)
            {
                moduloNB[i+1]= nbrDecimal;
            }    
            i++;    
        compteur= i;
        } 
    }

    for (int i = compteur-1; i >=0; i--)
    {
        if (moduloNB[i]<10)
        {
            moduloNB[i]+= 48;
        }
         
        if (moduloNB[i] == 10)
        {
            moduloNB[i]= 'A';
        }
        if (moduloNB[i] == 11)
        {
            moduloNB[i]= 'B';
        }
        if (moduloNB[i] == 12)
        {
            moduloNB[i]= 'C';
        }
        if (moduloNB[i] == 13)
        {
            moduloNB[i]= 'D';
        }
        if (moduloNB[i] == 14)
        {
            moduloNB[i]= 'E';
        }
        if (moduloNB[i] == 15)
        {
            moduloNB[i]= 'F';
        }

        printf("%c ", moduloNB[i]);
    }

}

// fonction de conversion du decimal vers l'octal ///
void decimalToOctal(int nbrDecimal){

    int i = 0;
    int moduloNB [50];    
    int a =0;
    int compteur = i;

    while( nbrDecimal >= 1){
        a = nbrDecimal%8;
         
        moduloNB [i]= a;
        nbrDecimal =nbrDecimal /8;
        
        if (nbrDecimal <= 8)
        {
            moduloNB[i+1]= nbrDecimal;
        }
        i++;
    compteur= i;
    } 
        
   for (int i = compteur-1; i >=0; i--)
    {
        printf("%d ", moduloNB[i]);
    }
}

