#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "spanish");

    int seleccion;
    cout << "Introduce el numero a tu eleccion para ejecutar cualquier codigo de la lista" <<endl;
    cout << endl;
    cout << "1.  Determinar si eres mayor de edad." << endl;
    cout << endl;
    cout << "2.  Determinar que numero es mayor." << endl;
    cout << endl;
    cout << "3.  Determinar si el numero entero y si es par." << endl;
    cout << endl;
    cout << "4.  Calcular factorial usando while." << endl;
    cout << endl;
    cout<< "5.  Numero mayor a 10 y menor que 30,  y que muestre por pantalla todos los numeros impares desde 1 hasta ese numero utilizando un bucle for."<< endl;
    cout << endl;
    cout<< "6.  Numero mayor a 10 y menor que 30,  y que muestre por pantalla todos los numeros impares desde 1 hasta ese numero utilizando un bucle while."<< endl;
    cout << endl;
    cout<< "7.  Numero del 1 al 5 y muestre por pantalla el nombre del dia de la semana correspondiente utilizando una estructura switch."<< endl;
    cout << endl;
    cout << "8.  Detener el programa.." << endl;
    cin >> seleccion;
    switch (seleccion) {

        case 1:
// ESTRUCTURAS DE CONTROL IF-IF ELSE
        {
    int edad;
    cout << "Ingrese su edad";
    cin >> edad;

    if(edad<18) {
    cout << "Tienes" << ' ' << edad << ' ' << "eres menor de edad";
    }
    else {
     cout << "Tienes" << ' ' << edad << ' ' <<"eres mayor de edad";
    }}
    break;

        case 2:
        {
       int numero1, numero2;
       cout<< "ingresa dos numeros para saber cual es el mayor de los dos" << endl;
       cout << "primer numero"<< endl;
       cin >> numero1;
       cout << "segundo numero" << endl;
       cin >> numero2;
       if (numero1<numero2){
           cout<< "El numero"<<' '<< numero2<<' '<< "es mayor que el numero"<<' '<< numero1<< endl;
       }
       else if (numero2==numero1) {
           cout<< "El numero"<<' '<< numero1<<' '<< "y el numero"<<' '<< numero2 << ' ' << "tienen el mismo valor"<< endl;
       }
       else{
           cout<< "El numero"<<' '<< numero1<<' '<< "es mayor que el numero"<<' '<< numero2 << endl;
       }}


        case 3:{
            double digito;
            cout << "Coloca cualquier numero ";
            cin >> digito;

            if (digito - (int)digito == 0) {
                cout << "El numero es entero." << endl;
                if (digito > 0) {
                    if (((int)digito & 1 ) == 0 ) {
                        cout << "Es par." << endl;
                    } else {
                        cout << "Es impar." << endl;
                    }
                } else {
                    if (((int)digito & 1 ) == 1 ) {
                        cout << "es impar." << endl;
                    } else {
                        cout << "es par." << endl;
                    }
                }
            } else {
                cout << "El numero no es un entero." << endl;
            }}
            break;


        case 4: {
            //ESTRUCTURAS DE CONTROL ITEREATIVAS
            //Factorial con while
            int numfac;
            unsigned long long result = 1;

            cout << "Ingresa un numero: ";
            cin >> numfac;
            cout << "El factorial de " << numfac << " es " << " ";

            if (numfac < 0) {
                cout << "Numero invalido." << endl;
                return 1;
            }

            while (numfac > 0) {
                result *= numfac;
                numfac--;
            }
            cout << result << "." << endl;
        }break;
        case 5: {
            int digito1;
            cout << "Coloca un numero mayor a 10 y menor a 30 ";
            cin >> digito1;

            if (digito1 < 10 || digito1 > 30) {
                cout << "Numero invalido, debes ingresar un numero entre 10 y 30" << endl;

            }

            cout << "Numeros impares hasta el  " << digito1 << " son: ";
            for (int i = 1; i <= digito1; i += 2) {
                cout << i << " ";
            }
            cout << endl;
        }break;


        case 6:{
//numero impares con bucle while
          int cantidad;
         cout << "Ingresa un numero que este en el rango de 11 y 29 " << endl;
          cin >> cantidad;

          if (cantidad < 11 || cantidad > 29) {
              cout << "El numero que ingresaste es incorrecto, intentalo de nuevo" << endl;
              return 1;
          }
          int i = 1;
          cout << "Numeros impares a partir del 1 hasta el " << cantidad <<  " "<< ":";
          while (i <= cantidad) {
              if (i % 2 != 0) {
                  cout << i << " ";
              }
              i++;
          }}
            break;
       case 7:
        int selec;
        cout << "Coloca un numero del 1 al 5 para saber el dia correspondiente" << endl;
        cin >> selec;

        if (selec > 5 || selec < 1) {
            cout << "El numero que ingresaste no es valido, por favor ingresa un numero entre el 1 y el 5";
        } else {
            switch (selec) {
                case 1:
                    cout << "Seleccionaste la opcion" << " " << selec << "," << " " << "Es el dia Lunes" << endl;
                    break;
                case 2:
                    cout << "Seleccionaste la opcion" << " " << selec << "," << " " << "Es el dia Martes" << endl;
                    break;
                case 3:
                    cout << "Seleccionaste la opcion" << " " << selec << "," << " " << "Es el dia Miercoles" << endl;
                    break;
                case 4:
                    cout << "Seleccionaste la opcion" << " " << selec << "," << " " << "Es el dia Jueves" << endl;
                    break;
                case 5:
                    cout << "Seleccionaste la opcion" << " " << selec << "," << " " << "Es el dia Viernes" << endl;
                    break;

            }
            cout << "Fin";
        }
        case 8:
            cout<<"Programa finalizado por el usuario";
            return 0;
    }
}