#include <iostream>
using namespace std;
int main () {
    int edad;
    char nombres [50];
    char nombresPadresApoderado [50];
    string padresApoderado;
    char nacionalidad [20];
    char direccion [20];
    char DNI [8];
    int depoito;

    cout << "**********************************************************" << endl;
    cout << "**** CREA TU CUENTA BANCARIA EN NUESTRA FILIAL BANKITO ****" << endl;
    cout << "***********************************************************" << endl;
    cout << "INGRESA TU EDAD: ";
    cin >> edad;

    if (edad >= 18)
    {
        cout << "INGRESA TUS NOMBRES COMPLETOS: ";
        cin >> nombres;
        cout << "INGRESA TU NACIONALIDAD: ";
        cin >> nacionalidad;
        cout << "INGRESA TU DIRECCIÓN: ";
        cin >> direccion;
        cout << "INGRESA TU DNI: ";
        cin >> DNI;
    }

    else if (edad <= 17)
    {
        cout << "ERES MENOR DE EDAD, PARA PODER ABRIR UNA CUENTA DEBES TRAER A UNO DE TUS PADRES O A UN APODERADO" << endl;
        cout << "VIENES CON UNO DE ELLOS: [SI] [NO]: ";
        cin >> padresApoderado;
            if (padresApoderado == "si" || padresApoderado == "SI")
            {
                cout << "INGRESA SU EDAD: ";
                cin >> edad;
                    if (edad >= 18)
                    {
                        cout << "INGRESA LOS NOMBRE COMPLETOS DE TU APODERADO: ";
                        cin >> nombresPadresApoderado;
                        cout << "INGRESA SU NACIONALIDAD: ";
                        cin >> nacionalidad;
                        cout << "INGRESA SU DIRECCIÓN: ";
                        cin >> direccion;
                        cout << "INGRESA SU DNI: ";
                        cin >> DNI;
                    }
                    else {
                        cout << "TU APODERADO NO ES MAYOR DE EDAD";
                    }
                    
                cout << "INGRESA TUS NOMBRES COMPLETOS: ";
                cin >> nombres;
                cout << "INGRESA TU NACIONALIDAD: ";
                cin >> nacionalidad;
                cout << "INGRESA TU DIRECCIÓN: ";
                cin >> direccion;
                cout << "INGRESA TU DNI: ";
                cin >> DNI;

            }

            else
            {
                cout << "PARA PODER ABRIR UNA CUENTA DE AHORROS EN BANKITO DEBES DE TRAER A UNO DE TUS PADRES O A UN APODERADO MAYOR DE EDAD";
            }
            
            
    
    }
    
    
    return 0;
}