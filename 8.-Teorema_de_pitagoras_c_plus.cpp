/*Este programa lee la entrada est�ndar de los catetos de un tri�ngulo rect�ngulo y muestra
en la salida est�ndar el valor de la hipotenusa, se basa en el teorema de pit�goras*/

#include <iostream> //Librer�a est�ndar de entrada y salida
#include <locale.h>//Librer�a est�ndar de localizaci�n (regionalizaci�n)
#include <math.h> //Librer�a est�ndar para operaciones matem�ticas b�sicas, permite usar la funci�n: "pow"

using namespace std;//Acceso al espacio de nombres para poder usar cin, cout, etc.

int main(){ //Inicio del programa
	
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a est�ndar y le asignamos el valor de: "Idioma espa�ol"
	
	/*Declaramos las 2 variables principales y la variable que realizar� la operaci�n con una
	precisi�n de 2 decimales, esta �ltima la iniciamos en cero*/
	float catetoopuesto, catetoadyacente, hipotenusa = 0;
	
	cout<<"Ingrese el valor del cateto opuesto: "<<endl; //Solicitamos el valor del cateto opuesto
	cin>>catetoopuesto; //Almacenamos la variable catetoopuesto
	cout<<"Ingrese el valor del cateto adyacente: "<<endl; //Solicitamos el valor del cateto adyacente
	cin>>catetoadyacente; //Almacenamos la variable catetoadyacente
	hipotenusa = pow(catetoopuesto,2)+pow(catetoadyacente,2); //la funci�n pow eleva a una potencia
	cout.precision(2); //Esta l�nea le da una precisi�n de 2 decimales a la salida de la variable hipotenusa
	cout<<"\nEl valor de la hipotenusa es: "<<endl; //Imprimimos este mensaje en la pantalla
	cout<<hipotenusa; //Imprimimos el valor de la hipotenusa
		
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
