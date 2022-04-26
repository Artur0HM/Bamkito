#include <iostream>
using namespace std;
int main () {
    string respuesta;
    int edad;
    char nombres [50];
    char nombresPadresApoderado [50];
    string padresApoderado;
    char nacionalidad [20];
    char nacionalidadPadre [20];
    char direccion [20];
    char direccionPadre [20];
    int DNI;
    int DNIpadre;
    int depoito;
    int clave;

    cout << "***********************************************************" << endl;
    cout << "**** CREA TU CUENTA BANCARIA EN NUESTRA FILIAL BANKITO ****" << endl;
    cout << "***********************************************************" << endl;
    cout << "DESEAS ABRI UNA CUENTA BANCARIA [SI] [NO]: ";
    cin >> respuesta;

        if (respuesta == "SI" || respuesta == "si")
        {
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
                                cin >> nacionalidadPadre;
                                cout << "INGRESA SU DIRECCIÓN: "; 
                                cin >> direccionPadre;
                                cout << "INGRESA SU DNI: ";
                                cin >> DNIpadre;
                            }
                            else {
                                cout << "TU APODERADO NO ES MAYOR DE EDAD" << endl;
                            }

                        cout << "AHORA INGRESA TUS DATOS." << endl;
                        cout << "INGRESA TUS NOMBRES COMPLETOS: ";
                        cin >> nombres;
                        cout << "INGRESA TU NACIONALIDAD: ";
                        cin >> nacionalidad;
                        cout << "INGRESA TU DIRECCIÓN: ";
                        cin >> direccion;
                        cout << "INGRESA TU DNI: ";
                        cin >> DNI;
                        
                        cout << "El nombre de tu apoderado es: " << nombresPadresApoderado << ", su DNI es: " << DNIpadre << ", su nacionalidad es: " << nacionalidadPadre << " su direción es: " << direccionPadre << endl;

                        cout << "Tu nombre es: " << nombres << ", tu DNI es: " << DNI << ", tu nacionalidad es: " << nacionalidad << ", ingresa tu dirección: " << direccion << endl;
                    }

                    


                    else
                    {

                        cout << endl << "PARA PODER ABRIR UNA CUENTA DE AHORROS EN BANKITO DEBES DE" << endl;
                        cout << "TRAER A UNO DE TUS PADRES O A UN APODERADO MAYOR DE EDAD" << endl;
                    }


            }

            else {
                
            }
                cout << "****************   DATOS   ***************" << endl;
                cout << "** 1. NOMBRES: " << nombres;
                cout << "** 2. DNI: " << DNI;            
                cout << "** 3. NACIONALIDAD: : " << nacionalidad;
                cout << "** 4. DIRECCIÓN : " << direccion;
                cout << "******************************************" << endl;


        }
        else {
            cout << "LO ESPERAMOS EN OTRO MOMENTO, GRACIAS POR VISITAR NUESTRO BANCO.";
        }

        cout << "CUANTO VAS A DEPOSTAR";
        

    return 0;
}