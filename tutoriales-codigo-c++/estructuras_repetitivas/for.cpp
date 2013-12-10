//Creado por: Jean Bernuy

#include "iostream.h"
#include "conio.h"

// FOR -----> DESDE

main(){
       
 int c,num,sum,n;
 
 cout<<"INGRESE CANTIDAD DE NUMERO "; cin>>n;
 sum=0;
 for(c=0;c<n;c++){
                   
  cout<<"\Ingrese numero "<<c+1<<": "; cin>>num;                 
  sum=sum+num;
 }
  
  cout<<"\nLa suma total de los numero es = "<<sum;      
  getch();           
}
