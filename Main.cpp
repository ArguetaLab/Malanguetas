#include <iostream>
#include <vector>
#include <string>
#include "UsuarioM.cpp"
#include "Contenido.cpp"

using namespace std;

int main(){
  // creamos un vector llamado contenido el cual va a guardar los sabores de las Malangas
  Contenido contenido;

  //Sabores vendidos cada semana
  contenido.agregarSabor("Flaming", 15);
  contenido.agregarSabor("Adobadas", 30);
  contenido.agregarSabor("Crema", 25);
  contenido.agregarSabor("Guacamole",10);
  contenido.agregarSabor("Chipotle", 3);
  contenido.agregarSabor("Jalapeño", 10);
  contenido.agregarSabor("Habanero", 30);

int sigue = 1;

  // Inicia el programa con una bienvenida al usuario
  while (sigue == 1) {
    int respuesta;
    string sabor;
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

    cout<<"Introduzca su opción: "<<endl;
    cin>> respuesta;

    if(respuesta == 1){
      contenido.ordenarSaboresPorCantidad();
    }
    else if (respuesta == 2){
      cout<<"Introduce el sabor que quieras ver: "<<endl;
      cin>> sabor;
      contenido.buscarSabor(sabor);
    }
    

    
return 0;
}
}

