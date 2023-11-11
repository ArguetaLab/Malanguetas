#include <iostream>
#include <vector>
#include <string>
#include "UsuarioM.cpp"
#include "Contenido.cpp"

using namespace std;

int main(){
  // creamos un vector llamado contenido el cual va a guardar los sabores de las Malangas
  Contenido contenido;
  contenido.cargarDatosDesdeTXT("info.txt");
  

  //Sabores vendidos cada semana

  int sigue = 1;
  string corre = "";

  // Inicia el programa con una bienvenida al usuario
  while (sigue == 1) {
    int respuesta;
    string sabor, fecha;
    string seleccion, n, p, busca;

    cout << "\n";
    cout<<"Bienvenido Inversor a..."<<endl;
    cout<<"               ▄▀▄     ▄▀▄"<<endl;
    cout<<"              ▄█░░▀▀▀▀▀░░█▄"<<endl;
    cout<<"          ▄▄  █░░░░░░░░░░░█ ▄▄"<<endl;
    cout<<"         █▄▄█ █░░▀░░┬░░▀░░█ █▄▄█"<<endl;
    cout<<"========================================="<<endl;
    cout<<"               MALANGUETAS               "<<endl;
    cout<<"========================================="<<endl;

    // Crea el objeto usuario el cual va a ayudar a encontrar la cuenta en la base de datos
    UsuarioM USER = UsuarioM();
    cout << "Por favor introduzca su cuenta: ";
    cin >> n;
    USER.inicioSesion(n); // nombre de cuenta
    cout << "Introduzca su contraseña: ";
    cin >> p;
    USER.contrasena(p); //contraseña
    std::cout<<USER.buscarTracker()<<std::endl; //imprimimos el resultado de la búsqueda

    //una vez iniciada sesión le v a preguntar al usuario si desea ordenar los sabores o buscar uno
    cout<<"Bienvenido!"<<endl;
    cout<<"Seleccione la opcion que desea hacer de nuestro sistema: "<<endl;
    cout<<" 1) Mostrar todos los sabores disponibles con orden de menor a mayor ventas por semana"<<endl;
    cout<<" 2) Buscar un sabor en especifico"<<endl;
    cout<<" 3) Agregar nueva fecha con cantidades vendidas de sabores (Se requiere contraseña)"<<endl;

    cout<<"Introduzca su opción: "<<endl;
    cin>> respuesta;

    if(respuesta == 1){
      // Puedes pedir al usuario que introduzca la fecha para ordenar los sabores
        cout << "Introduzca la fecha (por ejemplo, 28/09/2023): ";
        cin >> fecha;
        contenido.ordenarSaboresPorCantidad(fecha);
    }
    else if (respuesta == 2){
      cout << "Introduce el sabor que quieras buscar (En dado caso de querer buscar Jalapeño, favor de escribirlo Jalapeno): ";
          cin >> sabor;
          cout << "Introduce la fecha en la que deseas buscar (por ejemplo, 28/09/2023): ";
          cin >> fecha;
          contenido.buscarSabor(fecha, sabor);
    
    }

    
    else if(respuesta == 3){
      string admin;
      cout << "Introduce la contraseña de administrador para poder hacer cambios a la base de datos: "<<endl;
      cin>>admin;
      if(admin == "zoe2204"){
        contenido.nuevaFecha();
        contenido.cargarDatosDesdeTXT("info.txt");
      }

    }
    

    cout << "Estos son los valores solicitados. ¿Desea continuar usando este software? (si/no)" << endl;
        cin >> corre;

        if (corre == "no") {
            cout << "Muchas gracias por apoyar Malanguetas. ¡Hasta la próxima!" << endl;
            sigue = 0;
        } else if (corre == "si") {
            sigue = 1;
        }
    }

    return 0;  // Ahora la declaración 'return 0;' está fuera del bucle, por lo que el programa terminará aquí cuando el usuario decida salir.
}

