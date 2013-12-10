#include "iostream.h"
#include "conio.h"

main(){
   
   int num;
   
   cout<<"\nIngrese numero entero ";
   cin>>num;
   
   int sum=0; 
   while(num>0){
    sum=sum+num;
   cout<<"\nIngrese numero entero ";
   cin>>num;        
   }
       
   cout<<"\nLa suma total de los numeros es = "<<sum;    
   
   cout<<"\nFin de Estructura while ";    
       
  getch();       
}
