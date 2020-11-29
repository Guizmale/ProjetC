#include <stdio.h>
#include <stdlib.h>
#include <math.h>



/*<------------------------------------------------------------------------>*/
// fonction de conversion du binaire vers le decimal ///
void binaryTodecimal(char nbrBinary[]){

    int length;
    for ( int i = 0; i < 50; i++){
        if (nbrBinary[i]== 49 || nbrBinary[i]== 48){
            length = i+1;   // permet de récupérer la taille du tableau correspondant au nombre binaire
        }
    }  
    double aconv[length+1]; // creation d'un tableau d'entier remplacant les caractere par des chiffres.
    double conversion = 0;
    for (int i = length; i >= 0; i--){
        if(nbrBinary[i]== '1'){
            aconv[i]= 1;
        }else if(nbrBinary[i]== '0'){
            aconv[i]= 0;
        }       
    }   
    for (int i = length-1; i >=0; i--){
       conversion += aconv[i] * pow(2,abs(i-(length-1)));      
    }
    printf(" %.0lf\n", conversion);
}

// fonction de conversion du binaire vers l'hexadecimal ///

void binaryToHexadecimal(char nbrBinary[]){
     int length;
    for ( int i = 0; i < 50; i++){
        if (nbrBinary[i]== '0' || nbrBinary[i]== '1'){
            length = i+1;   // permet de récupérer la taille du tableau correspondant au nombre binaire
        }
    } 
    if(length%4 == 3){
        for (int i = 0; i<1; i++){
            for (int i = length+1; i >=0; i--)
            {        
                nbrBinary[i+1] = nbrBinary[i];
                
            }    
        nbrBinary[0]= '0';
        
        }  
        length+=1;
    }else if(length%4 == 2){
        for (int i = 0; i<2; i++){
            for (int i = length+1; i >=0; i--)
            {        
                nbrBinary[i+1] = nbrBinary[i];
                
            }    
        nbrBinary[0]= '0';
        
        } 
        length+=2;
        
    }
     else if(length%4 == 1){
        for (int i = 0; i<3; i++){
            for (int i = length+1; i >=0; i--)
            {        
                nbrBinary[i+1] = nbrBinary[i];
                
            }    
        nbrBinary[0]= '0';
        
        } 
        length+=3;
    }  

 
    char tabDigit[50];
    char tabHexa[50];
    int k;
    int l = 0;
    int i =0;

   
        while(k<4 || i <= length){
            for (int j = i; j<(i+4); j++)
            {              
                tabDigit[k]=nbrBinary[j];   
                k++;
            }
            
        if(tabDigit[i]=='0' && tabDigit[i+1]=='0' && tabDigit[i+2]=='0' && tabDigit[i+3]=='0'){
            tabHexa[l]= '0';               
            l++;
        }else if (tabDigit[i]=='0' && tabDigit[i+1]=='0' && tabDigit[i+2]=='0' && tabDigit[i+3]=='1')
        {
            tabHexa[l]= '1';                           
            l++;
        }else if (tabDigit[i]=='0' && tabDigit[i+1]=='0' && tabDigit[i+2]=='1' && tabDigit[i+3]=='0')
        {
           tabHexa[l]= '2';
            l++;
        }else if (tabDigit[i]=='0' && tabDigit[i+1]=='0' && tabDigit[i+2]=='1' && tabDigit[i+3]=='1')
        {
            tabHexa[l]= '3';
            l++;
        }else if (tabDigit[i]=='0' && tabDigit[i+1]=='1' && tabDigit[i+2]=='0' && tabDigit[i+3]=='0')
        {
            tabHexa[l]= '4';
            l++;
        }else if (tabDigit[i]=='0' && tabDigit[i+1]=='1' && tabDigit[i+2]=='0' && tabDigit[i+3]=='1')
        {
            tabHexa[l]= '5';
            l++;
        }else if (tabDigit[i]=='0' && tabDigit[i+1]=='1' && tabDigit[i+2]=='1' && tabDigit[i+3]=='0')
        {
            tabHexa[l]= '6';
            l++;
        }else if (tabDigit[i]=='0' && tabDigit[i+1]=='1' && tabDigit[i+2]=='1' && tabDigit[i+3]=='1')
        {
            tabHexa[l]= '7';
            l++;
        }else if (tabDigit[i]=='1' && tabDigit[i+1]=='0' && tabDigit[i+2]=='0' && tabDigit[i+3]=='0')
        {
            tabHexa[l]= '8';
            l++;
        }else if (tabDigit[i]=='1' && tabDigit[i+1]=='0' && tabDigit[i+2]=='0' && tabDigit[i+3]=='1')
        {
            tabHexa[l]= '9';
            l++;
        }else if (tabDigit[i]=='1' && tabDigit[i+1]=='0' && tabDigit[i+2]=='1' && tabDigit[i+3]=='0')
        {
            tabHexa[l]= 'A';
            l++;
        }else if (tabDigit[i]=='1' && tabDigit[i+1]=='0' && tabDigit[i+2]=='1' && tabDigit[i+3]=='1')
        {
            tabHexa[l]= 'B';
            l++;
        }else if (tabDigit[i]=='1' && tabDigit[i+1]=='1' && tabDigit[i+2]=='0' && tabDigit[i+3]=='0')
        {
            tabHexa[l]= 'C';
            l++;
        }else if (tabDigit[i]=='1' && tabDigit[i+1]=='1' && tabDigit[i+2]=='0' && tabDigit[i+3]=='1')
        {
            tabHexa[l]= 'D';
            l++;
        }else if (tabDigit[i]=='1' && tabDigit[i+1]=='1' && tabDigit[i+2]=='1' && tabDigit[i+3]=='0')
        {
            tabHexa[l]= 'E';
            l++;
        }else if (tabDigit[i]=='1' && tabDigit[i+1]=='1' && tabDigit[i+2]=='1' && tabDigit[i+3]=='1')
        {
            tabHexa[l]= 'F';
            l++;
        }
        
        i+=4;
    }
    
    printf("La conversion  de %s en hexadécimal vaut :\n", nbrBinary);
   for (int i = 0; i < l; i++)
   {
       
       printf(" %c ", tabHexa[i]);
   }
    
printf("\n");
    
}


// fonction de conversion du binaire vers l'octal ///
void binaryToOctal(char nbrBinary[]){
     int length;
    for ( int i = 0; i < 50; i++){
        if (nbrBinary[i]== '0' || nbrBinary[i]== '1'){
            length = i+1;   // permet de récupérer la taille du tableau correspondant au nombre binaire
        }
    } 
    
    if(length%3 == 2){
        for (int i = 0; i<1; i++){
            for (int i = length+1; i >=0; i--)
            {        
                nbrBinary[i+1] = nbrBinary[i];
                
            }    
        nbrBinary[0]= '0';
        
        }  
        length+=1;
    }else if(length%3 == 1){
        for (int i = 0; i<2; i++){
            for (int i = length+1; i >=0; i--)
            {        
                nbrBinary[i+1] = nbrBinary[i];
                
            }    
        nbrBinary[0]= '0';
        
        } 
        length+=2;
    }
    printf("nombre binaire augmenté %s\n", nbrBinary);

    char tabDigitO[50];
    char tabOctal[50];
    int k=0;
    int l = 0;
    int i =0;

   
        while(k<3 || i <= length){
            for (int j = i; j<(i+3); j++)
            {              
                tabDigitO[k]=nbrBinary[j];   
                k++;
            }
            
        if(tabDigitO[i]=='0' && tabDigitO[i+1]=='0' && tabDigitO[i+2]=='0'){
            tabOctal[l]= '0';               
            l++;
        }else if (tabDigitO[i]=='0' && tabDigitO[i+1]=='0' && tabDigitO[i+2]=='1' )
        {
            tabOctal[l]= '1';                           
            l++;
        }else if (tabDigitO[i]=='0' && tabDigitO[i+1]=='1' && tabDigitO[i+2]=='0')
        {
           tabOctal[l]= '2';
            l++;
        }else if (tabDigitO[i]=='0' && tabDigitO[i+1]=='1' && tabDigitO[i+2]=='1')
        {
            tabOctal[l]= '3';
            l++;
        }else if (tabDigitO[i]=='1' && tabDigitO[i+1]=='0' && tabDigitO[i+2]=='0')
        {
            tabOctal[l]= '4';
            l++;
        }else if (tabDigitO[i]=='1' && tabDigitO[i+1]=='0' && tabDigitO[i+2]=='1')
        {
            tabOctal[l]= '5';
            l++;
        }else if (tabDigitO[i]=='1' && tabDigitO[i+1]=='1' && tabDigitO[i+2]=='0')
        {
            tabOctal[l]= '6';
            l++;
        }else if (tabDigitO[i]=='1' && tabDigitO[i+1]=='1' && tabDigitO[i+2]=='1')
        {
            tabOctal[l]= '7';
            l++;
        }
        
        i+=3;
    }
    
    printf("La conversion  de %s en Octal vaut :\n", nbrBinary);
   for (int i = 0; i < l; i++)
   {
       
       printf(" %c ", tabOctal[i]);
   }
    
printf("\n");
        

     
     
    
    
  
    

    
}

