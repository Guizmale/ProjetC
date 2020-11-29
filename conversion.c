#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "convDecimal.c"
#include "convBinaire.c"
#include "convHexadecimal.c"
#include "convOctal.c"
/**
*   Outil de conversion entre bases numeriques
*   - decimale
*   - binaire
*   - hexadecimale
*   - octale
*
*/



///// DEBUT DU MAIN (PAS LA RIVIERE ALLEMANDE, HEIN?... FAUT PAS SE GOURRER... ///
/* Le Main : Riviere d'Allemagne (Baviere et Hesse), qui rejoint le Rhin (rive droite) en face de Mayence ; 524 km.*/

int main(){

int baseFrom =0;
int baseTo=0;

int nbrDecimal = 0;
char nbrBinary[50];  // en chaine de caractères pour distinguer chaque chiffre entré par l'utilisateur
char nbrHexa[50]; // a cause des lettre pff... 
char nbrOctal[50];
int moduloNB [50];
int compteur = 0;

do
{
    printf("choisissez une base numérique (entrez le chiffre correspondant) :\n");
    printf("base décimale : 1\n");
    printf("base binaire : 2\n");
    printf("base hexadécimale : 3\n");
    printf("base octale : 4\n");
    scanf("%d", &baseFrom);
} while (baseFrom <0 || baseFrom >4);


do
{
    printf("Vers quelle base numérique souhaitez-vous la conversion? (entrez le chiffre correspondant) :\n");
    scanf("%d", &baseTo);

    
} while (baseTo <0 || baseTo >4);

do
{
    printf("Entrez le nombre à convertir :\n");
    if(baseFrom == 1){
        scanf("%d", &nbrDecimal);
    }else if (baseFrom == 2)
    {
        scanf("%s", nbrBinary);
    }else if (baseFrom == 3)
    {
        scanf("%s", nbrHexa);
    }else if (baseFrom == 4)
    {
        scanf("%s", nbrOctal);
    }else
    {
        printf("Nombre invalide\n");
    }
} while (baseTo <0 || baseTo >4);





if (baseFrom == 1 && baseTo == 2)
{
    printf("nb %d en binaire vaut : \n", nbrDecimal);
    decimalToBinary(nbrDecimal);
    printf("\n");
}
else if (baseFrom == 1 && baseTo == 3)
{
    printf("nb %d en hexadecimal vaut : \n", nbrDecimal);    
    decimalToHexadecimal(nbrDecimal);
    printf("\n");

}else if (baseFrom == 1 && baseTo == 4)
{
    printf("nb %d en octal vaut : \n", nbrDecimal);    
    decimalToOctal(nbrDecimal);
    printf("\n");

}else if (baseFrom == 2 && baseTo == 1)
{
    printf("le nombre binaire %s en décimal vaut : ", nbrBinary);    
    binaryTodecimal(nbrBinary);
    printf("\n");

}else if (baseFrom == 2 && baseTo == 3)
{
    binaryToHexadecimal(nbrBinary);

}else if (baseFrom == 2 && baseTo == 4)
{
    binaryToOctal(nbrBinary);

}else if (baseFrom == 3 && baseTo == 1)
{
    printf("%d\n", hexaTodecimal(nbrHexa));

}else if (baseFrom == 3 && baseTo == 2)
{
    hexaToBinary(nbrHexa);

}else if (baseFrom == 3 && baseTo == 4)
{
    hexaToOctal(nbrHexa);

}else if (baseFrom == 4 && baseTo == 1)
{
    octalToDecimal(nbrOctal);

}else if (baseFrom == 4 && baseTo == 2)
{
    octalToBinary(nbrOctal);

}else if (baseFrom == 4 && baseTo == 3)
{
    octalToHexadecimal(nbrOctal);
}

    return 0;
}