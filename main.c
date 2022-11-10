#include <stdio.h>

float media (float nota1, float nota2, float nota3) {
  float m; 
  
  
  m = (nota1+nota2+nota3) /3; 
  
 return m; 
 
}

void verifica (float m ) {
    
    if (m >= 9) { 
        
        printf (" o aluno sera aprovado com nota A"); 
        
    } 
        
        else if (m >= 7 && m <9 ) {
        
    printf ("o aluno sera aprovado com nota B"); } 
     
     else if (m >=6 && m <7) 
     {
         
     printf("o aluno sera aprovado com nota C"); } 
     
     else if (m >= 4 && m < 6) { 
         
     printf ("o aluno sera reprovado com nota D"); } 
     
     else if (m<4) { 
         
    printf ("o aluno sera reprovado com a letra E"); } 
    
} 


int main()
{
    
float nota1,nota2,nota3 ;
 
 float m; 
    
printf ("digite a primeira nota"); 
scanf ("%f", &nota1); 
printf ("didite a segunda nota"); 
scanf ("%f",&nota2); 
printf ("digite a terceira nota"); 
scanf ("%f",&nota3); 

    
    m=media (nota1, nota2, nota3); 
    
    
    verifica (m); 


    return 0;
}
   



