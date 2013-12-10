//Creado por: Jean Bernuy - applikdos
/*Calcular la suma de 10 elementos que se ingresan a un arreglo */

#include "iostream.h"
#include "conio.h"

main(){
       
  int vec[10],sum;
  sum=0;
  for(int t=0;t<10;t++){                 
  cout<<"Ingrese Dato: "; 
  cin>>vec[t];
  sum+=vec[t];                  
  }
  cout<<"\nLos Datos Almacenados dentro del Arreglo son: "<<endl;
  for(int j=0;j<10;j++){                 
  cout<<vec[j]<<"\t"; 
  }        
  cout<<"\nLa suma total de los datos es = "<<sum<<endl;    
 getch();      
}
