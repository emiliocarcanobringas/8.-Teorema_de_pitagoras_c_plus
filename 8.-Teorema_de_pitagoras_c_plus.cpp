/*Este programa lee la entrada estándar de los catetos de un triángulo rectángulo y muestra
en la salida estándar el valor de la hipotenusa, se basa en el teorema de pitágoras*/

#include <iostream> //Librería estándar de entrada y salida
#include <locale.h>//Librería estándar de localización (regionalización)
#include <math.h> //Librería estándar para operaciones matemáticas básicas, permite usar la función: "pow"

using namespace std;//Acceso al espacio de nombres para poder usar cin, cout, etc.

int main(){ //Inicio del programa
	
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería estándar y le asignamos el valor de: "Idioma español"
	
	/*Declaramos las 2 variables principales y la variable que realizará la operación con una
	precisión de 2 decimales, esta última la iniciamos en cero*/
	float catetoopuesto, catetoadyacente, hipotenusa = 0;
	
	cout<<"Ingrese el valor del cateto opuesto: "<<endl; //Solicitamos el valor del cateto opuesto
	cin>>catetoopuesto; //Almacenamos la variable catetoopuesto
	cout<<"Ingrese el valor del cateto adyacente: "<<endl; //Solicitamos el valor del cateto adyacente
	cin>>catetoadyacente; //Almacenamos la variable catetoadyacente
	hipotenusa = pow(catetoopuesto,2)+pow(catetoadyacente,2); //la función pow eleva a una potencia
	cout.precision(2); //Esta línea le da una precisión de 2 decimales a la salida de la variable hipotenusa
	cout<<"\nEl valor de la hipotenusa es: "<<endl; //Imprimimos este mensaje en la pantalla
	cout<<hipotenusa; //Imprimimos el valor de la hipotenusa
		
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/
