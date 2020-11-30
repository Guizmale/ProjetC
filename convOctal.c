#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void decimalToHexadecimal2(int nbrDecimal){
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
    printf("\n");
}




/*<------------------------------------------------------------------------>*/
// fonction de conversion de l'octal vers le decimal ///
int octalToDecimal(char nbrOctal[]){

    int convInt[50];
    int length = strlen(nbrOctal);
    for (int i = 0; i < length; i++) // conversion de la chaine de caractère en nombre entier
    {
       
        if(nbrOctal[i] >= '0' && nbrOctal[i]<='7')
        {
            convInt[i]=(int) nbrOctal[i] -48;
           
        }
    }
    
    int convOctTodec =0;
    int compteur =0;
     for(int i = length-1; i>=0; i--){
         convOctTodec += convInt[compteur] * pow(8,i); 
         compteur++;
    }
     
        return convOctTodec;

}
// fonction de conversion de l'octal vers le binaire ///
void octalToBinary(char nbrOctal[]){

     char convInt[50];
    int length = strlen(nbrOctal);
    int j =0;

    for (int i = 0; i < length; i++)
    {
        
            switch (nbrOctal[i])
        {
        case '0':
            convInt[j]= '0';
            convInt[j+1]= '0';
            convInt[j+2]= '0'; 
            break;
        case '1':
            convInt[j]= '0';
            convInt[j+1]= '0';
            convInt[j+2]= '1';
            break;
        case '2':
            convInt[j]= '0';
            convInt[j+1]= '1';
            convInt[j+2]= '0';
            break;
        case '3':
            convInt[j]= '0';
            convInt[j+1]= '1';
            convInt[j+2]= '1';
            break;
        case '4':
            convInt[j]= '1';
            convInt[j+1]= '0';
            convInt[j+2]= '0';
            break;
        case '5':
            convInt[j]= '1';
            convInt[j+1]= '0';
            convInt[j+2]= '1';
            break;
        case '6':
            convInt[j]= '1';
            convInt[j+1]= '1';
            convInt[j+2]= '0';
            break;
        case '7':
            convInt[j]= '1';
            convInt[j+1]= '1';
            convInt[j+2]= '1';
            break;
        default:
            printf("Ce n'est pas un nombre hexadécimal");

            break;
        }

        j+=3;
    }
        
        
    
    printf("le nombre Octale %s vaut en binaire :\n", nbrOctal);
    for (int i = 0; i < length*3; i++)
    {
        printf("%c",convInt[i]);
    }
    printf("\n");
    
    
}

// fonction de conversion de l'octal vers l'hexadecimal ///
void octalToHexadecimal(char nbrOctal[]){

    int convTodec = octalToDecimal(nbrOctal);
    decimalToHexadecimal2(convTodec);

}

