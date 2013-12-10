//Creado por: Jean Bernuy - applikdos
/*Calcular la media aritmetica de N valores y ademas mostrar los numeros ingresados 
en orden inverso */

#include "iostream.h"
#include "conio.h"

main(){    
  int vec[10],sum,n;
  double media;
  sum=0;
  cout<<"\nIngrese cantidad de valores: "; cin>>n;
  for(int t=0;t<n;t++){                 
  cout<<"\nIngrese Dato: "; 
  cin>>vec[t];
  sum+=vec[t];                  
  }        
  for(int i=n-1;i>=0;i--){
  cout<<"\n"<<vec[i]<<"\t";        
  }
  media=(sum/n);
  cout<<"\nLa media aritmetica es = "<<media;
   
 getch();      
}
