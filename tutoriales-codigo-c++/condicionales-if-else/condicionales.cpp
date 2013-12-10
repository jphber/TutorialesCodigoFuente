/* Creado por: Jean Bernuy
   
se pide ingresar el precio de una entrada de un cine, si dicho precio es mayor 
a 10 dolares se le adicionara una comision de 0.03% sobre el mismo, de ser menor
a 10 dolares la comision sera de 0.01%.
*/
#include "iostream.h"
#include "conio.h"

main(){
   double precio,comision, total;
   
   cout<<"Ingrese el precio de la entrada $ ="; cin>>precio;
   
   if(precio>=10){
   comision=precio*0.03;
   total=precio+comision;
   cout<<"El total a pagar es = "<<total;
   }else if(precio<=5){    
      comision=precio*0.01;
      total=precio+comision;
      cout<<"El total a pagar es = "<<total; 
   } else{      
    cout<<"El precio ingresado no es valido ";     
   }
   /*else{
   comision=precio*0.01;
   total=precio+comision;
   cout<<"El total a pagar es = "<<total;
   }*/
   
       getch();
}
