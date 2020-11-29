#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//ça change


/*<------------------------------------------------------------------------>*/
// fonction de conversion de l'octal vers le decimal ///
void octalToDecimal(char nbrOctal[]){

    int convInt[50];
    int length = strlen(nbrOctal);
    for (int i = 0; i < length; i++) // conversion de la chaine de caractère en nombre entier
    {
       
        if(nbrOctal[i] >= '0' && nbrOctal[i]<='7')
        {
            convInt[i]=(int) nbrOctal[i] -48;
           
        }
    }
    
    
    
printf("le nombre Octal %s converti en décimal, vaut : \n", nbrOctal);

    double convOctTodec =0;
    int compteur =0;
     for(int i = length-1; i>=0; i--){
         convOctTodec += convInt[compteur] * pow(8,i); 
         compteur++;
    }
     
        printf("%.0lf \n\n", convOctTodec);
     
    


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
int octalToHexadecimal(char nbrOctal[]){

    
}

