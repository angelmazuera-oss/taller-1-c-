#include <iostream> // sirve para imprimir y leer cosas en pantalla
#include <string>   // para manejar texto 
using namespace std; // para no tener que escribir std a cada rato

int main() {
    // Aca creamos las variables que se van a usar en el programa
    string nombrePaciente;
    int edadPaciente;
    char generoPaciente;
    char estratoSocio;

    float pesoKg;
    float alturaMts;
    bool tieneAlergia;

    string direccionCasa;
    string numTelefono;
    string correoElectronico;

    // Empezamos a pedirle los datos a la persona
    cout << "Escribe el nombre del paciente: ";
    getline(cin, nombrePaciente);

    cout << "Cuantos anios tiene el paciente: ";
    cin >> edadPaciente;

    cout << "Cual es el genero (M/F/O): ";
    cin >> generoPaciente;

    cout << "Ingresa el estrato donde vive: ";
    cin >> estratoSocio;

    cout << "Cuanto pesa el paciente en kilos: ";
    cin >> pesoKg;

    cout << "Cuanto mide en metros (por ejemplo 1.70): ";
    cin >> alturaMts;

    cout << "Tiene alguna alergia? (pon 1 para si, 0 para no): ";
    cin >> tieneAlergia;

    // Limpiamos el buffer por que si no el getline se salta el dato
    cin.ignore();

    cout << "Escribe la direccion de la casa: ";
    getline(cin, direccionCasa);

    cout << "Numero de telefono o celular: ";
    cin >> numTelefono;

    cout << "Escribe el correo electronico: ";
    cin >> correoElectronico;

    // Calculamos el imc con la formula
    float calculoImc = pesoKg / (alturaMts * alturaMts);

    // Mostramos todo resumido al final
    cout << "\n----------------------------------------\n";
    cout << "        FICHA DEL PACIENTE ENCONTRADO   \n";
    cout << "----------------------------------------\n";
    cout << " Nombre completo : " << nombrePaciente << "\n";
    cout << " Edad            : " << edadPaciente << " anios\n";
    cout << " Genero          : " << generoPaciente << "\n";
    cout << " Estrato         : " << estratoSocio << "\n";
    cout << " Peso registrado : " << pesoKg << " kg\n";
    cout << " Altura          : " << alturaMts << " mts\n";
    cout << " IMC calculado   : " << calculoImc << "\n";

    // Revisamos como esta de salud segun la tabla de imc
    if (calculoImc < 18.5) {
        cout << " Estado de peso  : Esta por debajo del peso normal\n";
    } 
    else if (calculoImc <= 24.9) {
        cout << " Estado de peso  : Esta en su peso ideal\n";
    } 
    else {
        cout << " Estado de peso  : Esta en sobrepeso\n";
    }

    cout << " Alergias        : " << (tieneAlergia ? "Si presenta" : "No presenta") << "\n";
    cout << " Direccion       : " << direccionCasa << "\n";
    cout << " Telefono        : " << numTelefono << "\n";
    cout << " Correo          : " << correoElectronico << "\n";
    cout << "----------------------------------------\n";

    return 0; // Termina el programa sin problemas
}