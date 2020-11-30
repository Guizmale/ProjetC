#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*

Page des fonction codant les conversions de nombres en base Hexadécimale vers 
les autres bases

**/


// Fonction ré-écrite (quand j'inclue le fichier, ça entraine une erreur de rédéfinition de fonction)
// car j'inclue le fichier où la fonction a été créée  dans le fichier conversion.c 
// où sont exécutées toutes les fonctions ... Je suis persuadé qu'il y a une technique simple  ;) 
// je ne l'ai pas trouvé dans le temps imparti. J'ai donc décidé de récrire les fonctions
void decimalToOctal2(int nbrDecimal){

    int i = 0;
    int moduloNB [50];    
    int a =0;
    int compteur = i;

    while( nbrDecimal > 1){
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
        
   for (int i = compteur; i >=0; i--)
    {
        printf("%d ", moduloNB[i]);
    }
}
/*=========================================================================*/




/*<------------------------------------------------------------------------>*/
// fonction de conversion de l'hexadecimal vers le decimal ///
int hexaTodecimal(char nbrHexa[]){

    int convInt[50];
    int length = strlen(nbrHexa);
    for (int i = 0; i < length; i++) // conversion de la chaine de caractère en nombre entier
    {
        if(nbrHexa[i] >= '0' && nbrHexa[i]<='9')
        {
            convInt[i]=(int) nbrHexa[i] -48;
        }else if((nbrHexa[i]>='A' && nbrHexa[i]<='F') || (nbrHexa[i]>='a' && nbrHexa[i]<='f')){
            switch (nbrHexa[i])
            {
            case 'A':
                convInt[i]= 10;
                break;
            case 'a':
                convInt[i]= 10;
                break;
            case 'B':
                convInt[i]= 11;
                break;
            case 'b':
                convInt[i]= 11;
                break;
            case 'C':
                convInt[i]= 12;
                break;
            case 'c':
                convInt[i]= 12;
                break;
            case 'D':
                convInt[i]= 13;
                break;
            case 'd':
                convInt[i]= 13;
                break;
            case 'E':
                convInt[i]= 14;
                break;
            case 'e':
                convInt[i]= 14;
                break;
            case 'F':
                convInt[i]= 15;
                break;
            case 'f':
                convInt[i]= 15;
                break;
            
            default:
                //printf("Ce n'est pas un nombre Hexadécimal");
                break;
            }
        }
    }
    
    
//printf("le nombre hexadécimal %s converti en décimal, vaut : \n", nbrHexa);

    int convHexaTodec =0;
    int compteur =0;
     for(int i = length-1; i>=0; i--){
         convHexaTodec += convInt[compteur] * pow(16,i); 
         compteur++;
     }
     
         //printf("%.0lf \n\n", convHexaTodec);
     
    return convHexaTodec;



    //printf("%d\n",length);
}
// fonction de conversion de l'hexadecimal vers le binaire ///
// axe d'amélioration : supprimer les 0 devant le nombre binaire?
void hexaToBinary(char nbrHexa[]){

    char convInt[50];
    int length = strlen(nbrHexa);
    int j =0;

    for (int i = 0; i < length; i++)
    {
        
            switch (nbrHexa[i])
        {
        case '0':
            convInt[j]= '0';
            convInt[j+1]= '0';
            convInt[j+2]= '0';
            convInt[j+3]= '0';
            
            break;
        case '1':
            convInt[j]= '0';
            convInt[j+1]= '0';
            convInt[j+2]= '0';
            convInt[j+3]= '1';
            break;
        case '2':
            convInt[j]= '0';
            convInt[j+1]= '0';
            convInt[j+2]= '1';
            convInt[j+3]= '0';
            break;
        case '3':
            convInt[j]= '0';
            convInt[j+1]= '0';
            convInt[j+2]= '1';
            convInt[j+3]= '1';
            break;
        case '4':
            convInt[j]= '0';
            convInt[j+1]= '1';
            convInt[j+2]= '0';
            convInt[j+3]= '0';
            break;
        case '5':
            convInt[j]= '0';
            convInt[j+1]= '1';
            convInt[j+2]= '0';
            convInt[j+3]= '1';
            break;
        case '6':
            convInt[j]= '0';
            convInt[j+1]= '1';
            convInt[j+2]= '1';
            convInt[j+3]= '0';
            break;
        case '7':
            convInt[j]= '0';
            convInt[j+1]= '1';
            convInt[j+2]= '1';
            convInt[j+3]= '1';
            break;
        case '8':
            convInt[j]= '1';
            convInt[j+1]= '0';
            convInt[j+2]= '0';
            convInt[j+3]= '0';
            break;
        case '9':
            convInt[j]= '1';
            convInt[j+1]= '0';
            convInt[j+2]= '0';
            convInt[j+3]= '1';
            break;
        case 'A':
            convInt[j]= '1';
            convInt[j+1]= '0';
            convInt[j+2]= '1';
            convInt[j+3]= '0';
            break;
        case 'a':
            convInt[j]= '1';
            convInt[j+1]= '0';
            convInt[j+2]= '1';
            convInt[j+3]= '0';
            break;
        case 'B':
            convInt[j]= '1';
            convInt[j+1]= '0';
            convInt[j+2]= '1';
            convInt[j+3]= '1';
            break;
        case 'b':
            convInt[j]= '1';
            convInt[j+1]= '0';
            convInt[j+2]= '1';
            convInt[j+3]= '1';
            break;
        case 'C':
            convInt[j]= '1';
            convInt[j+1]= '1';
            convInt[j+2]= '0';
            convInt[j+3]= '0';
            break;
        case 'c':
            convInt[j]= '1';
            convInt[j+1]= '1';
            convInt[j+2]= '0';
            convInt[j+3]= '0';
            break;
        case 'D':
            convInt[j]= '1';
            convInt[j+1]= '1';
            convInt[j+2]= '0';
            convInt[j+3]= '1';
            break;
        case 'd':
            convInt[j]= '1';
            convInt[j+1]= '1';
            convInt[j+2]= '0';
            convInt[j+3]= '1';
            break;
        case 'E':
            convInt[j]= '1';
            convInt[j+1]= '1';
            convInt[j+2]= '1';
            convInt[j+3]= '0';
            break;
        case 'e':
            convInt[j]= '1';
            convInt[j+1]= '1';
            convInt[j+2]= '1';
            convInt[j+3]= '0';
            break;
        case 'F':
            convInt[j]= '1';
            convInt[j+1]= '1';
            convInt[j+2]= '1';
            convInt[j+3]= '1';
            break;
        case 'f':
            convInt[j]= '1';
            convInt[j+1]= '1';
            convInt[j+2]= '1';
            convInt[j+3]= '1';
            break;
        default:
            printf("Ce n'est pas un nombre hexadécimal");

            break;
        }

        j+=4;
    }
        
        
    
    printf("le nombre hexadécimale %s vaut en binaire :\n", nbrHexa);
    for (int i = 0; i < length*4; i++)
    {
        printf("%c",convInt[i]);
    }
    printf("\n");
    
    
}
// fonction de conversion de l'hexadecimal vers l'octal ///
void hexaToOctal(char nbrHexa[]){
    
   int convPrem = hexaTodecimal(nbrHexa); 
    printf("%d\n",convPrem);
   decimalToOctal2(convPrem);
    

}
