#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;



int main ()
{
srand (time(NULL));


    string vNombre[2];
    string vTipoCarta[20]={"10 Corazones","10 Picas"," 10 Diamantes","10 Trebol","J Corazones","J Picas"," J Diamantes","J Trebol","Q Corazones","Q Picas"," Q Diamantes","Q Trebol","K Corazones","K Picas"," K Diamantes","K Trebol","A Corazones","A Picas"," A Diamantes","A Trebol"};
    int numerosAlazar[20];
    char confirmar ;


    cout << " CLUTCH " << endl ;
    cout << "\n" ;

    int numero ;
    cout <<"------------------------------------------"<<endl ;
    cout << "1- JUGAR :" <<endl<< "2- ESTADISTICAS : " << endl ;
    cout <<"3- CREDITOS : "<<endl<<"0- SALIR :"<< endl ;
    cout << "-----------------------------------------" << endl ;
    cout <<"ELIJA UN NUMERO : " ;



    cin >> numero ;
    cout << "\n" ;
    switch (numero)
    {
    case 1:
        cout << "CLUTCH"<<endl<< "------------------------------------------";
        cout << endl<<"Antes de comenzar deben registrar sus nombres :" << endl  ;

        for (int i=0 ; i<2 ; i++)
        {
            cout << "Ingrese nombre "<< (i+1)<< " : " ;
            cin>> vNombre[i] ;
            if(i==1 )
            {
                cout << "Confirmar nombres (S/N)?" <<endl ;
                cin >> confirmar ;
                if (confirmar=='s')
                {
                    cout << "confirmado"<< endl;
                }
                else
                {
                    cout<< "no confirmado"<< endl ;
                }

            }

        }
        cout<<  "------------------------------------------"<<endl ;
        /*aca agregar función para esta parte*/

        cout << "CLUTCH"<<endl;
        cout << "------------------------------------------"<<endl;
        cout << "RONDA #1" << endl;
        cout << vNombre[0]<<" vs "<< vNombre[1];

        cout << "/Turno de" ;





        for (int i=0 ; i<20 ; i++){
            numerosAlazar [i] = 1+ rand() %20 ;
            cout<< numerosAlazar[i] << endl ;
        }








        break ;









    case 2:
        cout << "ESTADISTICAS : " ;
        break ;
    case 3:
        cout << "CREDITOS : " ;
        break ;
    case 0:
        return 0 ;
    default:
        cout << "EL NUMERO NO ES CORRECTO." ;
    }












    return 0 ;
}
