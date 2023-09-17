#include <vector>
#include <string>
#include <fstream>


class UsuarioM{
private:
    // Iniciamos las variables
    std::string i;
    std::string nombre_U;
    std::string pin;
    std::string track;
    std::fstream archivo;

public:
    UsuarioM(){
        nombre_U = "";
        pin = "";
        track = "";
    }

    UsuarioM(std::string _nombre_U, std::string _pin,std::string _track){
        nombre_U = _nombre_U;
        pin = _pin;
        track = _track;
    }

    void inicioSesion(std::string i){
        nombre_U = i;
    }

    void contrasena(std::string i){
        pin = i;
    }
    void creaTracker(){
        // Creamos una frase con el usuario y contraseña para facilitar el proceso de busqueda
        track = nombre_U+"/"+pin;
    }

    std::string buscarTracker(){
    // Buscamos el tracker
    creaTracker();
    std::ifstream archivoLectura("file.txt");
    std::ofstream archivoEscritura("file.txt", std::ios::out | std::ios::app);
    std::string linea;
    bool encontrado = false;
    std::string msg;

    while(getline(archivoLectura, linea)) {
        if (linea == track) {
            encontrado = true;
            break;
        }
    }
    if(encontrado) {
    // Si lo encuentra, le notifica al usuario
        msg = "Su cuenta ha sido encontrada, iniciando sesion...";
    }
    else {
        // Si no lo encuentra, crea en automatico el usuario y le notifica al usuario
        archivoEscritura << track;
        archivoEscritura << "\n";
        msg = "Cuenta no creada, creando cuenta...";
    }
    // Cerramos el archivo txt
    archivoLectura.close();
    archivoEscritura.close();
    return msg;
}

};




