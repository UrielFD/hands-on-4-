#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

//Funciones que seran llamadas 

//Suma 2D
void Sum_2D (char x1, char x2, char y1, char y2){
    cout << "Respuesta: (" << x1+x2 << "," << y1+y2 << ")" << endl; 
}
//Resta 2D
void R_2D(char x1, char y1, char x2, char y2){
	cout << "Respuesta: (" << x1-x2 << "," << y1-y2 << ")" << endl; 
}
// Multiplicacion 2D
void M_2D(char x, char y, char esc){
	cout << "Respuesta: (" << x*esc  << "," << y*esc << ")" << endl;
}
//Modulo 2D
void Modl_2D(char x, char y){
	cout << "Respuesta: " << sqrt(pow(x, 2) + pow(y, 2)) << endl;
}
//Suma 3D
void Sum_3D(char x1, char y1, char x2, char y2, char x3, char y3){
	cout << "Respuesta: (" << x1+x2+x3 << "," << y1+y2+y3 << ")" << endl; 
}
// Modulo 3D
void Modl_3D(char x, char y, char z){
	cout << "Respuesta: " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << endl;
}
//Producto punto
void PRDC_punto (char x1, char y1, char x2, char y2, char z1, char z2){
	 cout << "Vector = (" << x1*x2 << "," << y1*y2 << ")" << endl;
   cout << "Escalar = " << x1*x2 + y1*y2 << endl;  
}
//Producto cruz
void PRDC_cruz(char x1, char y1, char z1, char x2, char y2, char z2){
	cout << "vector  = (" << y1*z2 - y2*z1 << " , " << x1*z2 - x2*z1 << " , " << x1*y2 - x2*y1 <<")" << endl;
}




int main(int argc, char *argv[]){ 

int O = atoi(argv[1]);

  cout << "Eliga una opcion                " << endl;
  cout << "1- Suma de vectores 2D          " << endl;
  cout << "2- Resta de vectores 2D         " << endl;
  cout << "3- Multiplicacion de vectores 2D" << endl;
  cout << "4- Modulo 2D                    " << endl;
  cout << "5- Suma de vectores 3D          " << endl;
  cout << "6- Modulo 3D                    " << endl;
  cout << "7- Producto punto y cuz 3D      " << endl;
 
  	// opcion 1 suma de vectores 2D
 if(O==1){
     float x1, x2, y1, y2;
     x1 = atoi(argv[3]);
     y1 = atoi(argv[5]);
     x2 = atoi(argv[8]);
     y2 = atoi(argv[10]);
     cout << "Suma 2D" << endl;
     cout << "Operacion: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 << ")"<< endl;
     Sum_2D(atoi(argv[3]), atoi(argv[8]),  atoi(argv[5]) , atoi(argv[10]));
    }
    
   //opcion 2 resta de vectores 2D
    if(O==2){
 	   float x1, x2, y1, y2;
       x1 = atoi(argv[3]);
       y1 = atoi(argv[5]);
       x2 = atoi(argv[8]);
       y2 = atoi(argv[10]);
       cout << "Resta 2D" << endl;
       cout << "Operacion: " << "("<< x1 << "," << y1 << ")-("<< x2 << "," << y2 << ")"<< endl;
       R_2D(atoi(argv[3]), atoi(argv[5]),  atoi(argv[8]) , atoi(argv[10]));
      }
   
    //opcion 3 multiplicacion de vectores 2D
    if(O==3){
	    float x, y;
      float esc;
 	     x = atoi(argv[3]);
	     y = atoi(argv[5]);
	     esc = atoi(argv[8]);
	     cout << "Multiplicación de vectores 2D" << endl;
	     cout << "Operacion: " << "("<< esc << ")*("<< x << "," << y << ")"<< endl;
	     M_2D(atoi(argv[3]), atoi(argv[5]), atoi(argv[8]));
	}
	
    //opcion 4 modulo 2D
     if(O==4){
	   float x, y;
	   x = atoi(argv[3]);
	   y = atoi(argv[5]);
	   cout << "Modulo 2D " << endl;
	   cout << "Operacion: " << "v" << x <<"² + " << y << "²"<< endl;
	   Modl_2D(atoi(argv[3]), atoi(argv[5]));
	  }
    
    //opcion 5 suma de vectores 3D
     if(O==5){
     float x1, x2, x3, y1, y2, y3;
  
      x1 = atoi(argv[3]);
      y1 = atoi(argv[5]);
      x2 = atoi(argv[8]);
      y2 = atoi(argv[10]);
      x3 = atoi(argv[13]);
      y3 = atoi(argv[15]);
      cout << "Suma vectores 3D" << endl;
      cout << "Operacion: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 <<  ")+("<< x3 << "," << y3 << ")"<< endl; 
      Sum_3D(atoi(argv[3]), atoi(argv[5]), atoi(argv[8]), atoi(argv[10]), atoi(argv[13]), atoi(argv[15]));//Resultad
   	}
    
    //opcion 6 modulo 3D
     if(O==6){
	    float x;
        float y;
        float z;
	    x = atoi(argv[3]);
	    y = atoi(argv[5]);
	    z = atoi(argv[7]);
	    cout << "Modulo 3D" << endl;
	    cout << "Operacion: " << "v" << x <<"² + " << y << "² + " << z << "²"<< endl;
	    Modl_3D(atoi(argv[3]), atoi(argv[5]), atoi(argv[7]));
	}
    //opcion 7 producto punto y cruz 3D
     if(O==7){      
       float x1, x2, y1, y2, z1, z2;
       cout << "Producto punto 2D " << endl;
        x1 = atoi(argv[3]);
        y1 = atoi(argv[5]);
        z1 = atoi(argv[7]);
        x2 = atoi(argv[10]);
        y2 = atoi(argv[12]);
        z2 = atoi(argv[14]);
        cout << "Producto punto: " << "("<< x1 << "" << x2 << ")+(" << y1 <<  "" << y2 << ")+(" << z1 <<  "*" << z2 << ")"<< endl;
        PRDC_punto(atoi(argv[3]), atoi(argv[5]), atoi(argv[7]), atoi(argv[10]), atoi(argv[12]), atoi(argv[14])); //Resultado del producto punto
        cout << "---------------------------------- " << endl;
        cout << "Producto Cruz 3D " << endl;
        cout << "| i j k |" << endl;
        cout << "| "<< x1 << " " << y1 << " " << z1<< " |"<< endl;
        cout << "| "<< x2 << " " << y2 << " " << z2<< " |" << endl;
        //operacion del producto cruz 
        cout<<"Operacion: i(" << y1 << "(" << z2 << ")) - " << y2 << "(" << z1 << ")) - j(" << x1 << "(" << z2 << ") - " << x2 << "(" << z1 << ")) + k(" << x1 << "(" << y2 << ")- "<< x2 << "(" << y1 <<")" << endl;
        PRDC_cruz(atoi(argv[3]), atoi(argv[5]), atoi(argv[7]), atoi(argv[10]), atoi(argv[12]), atoi(argv[14]));
	}
    
   
 
 }