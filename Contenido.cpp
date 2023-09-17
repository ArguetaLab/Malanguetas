#include <vector>
#include <string>
#include <fstream>
#include <map>
#include <iostream>
using namespace std;


class Contenido{
// Iniciamos las variables
private:
    string sabor;
    int precio;
    float cantidad;
    int popularidad;
    map<std::string, int> saboresCantidad;

public:

    void agregarSabor(const string& sabor, int cantidad) {
        saboresCantidad[sabor] = cantidad;
        
    }

    int buscarSabor(const std::string& sabor) {
        // Para este caso ocupamos las búsqueda binaria
        // El usuario ingresa un sabor y el programa regresa el sabor junto con la cantidad de malangas vendidas a la semana
        int low = 0;
        int high = saboresCantidad.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            // Convertir el mapa en un vector para acceder por índice
            std::vector<std::pair<std::string, int>> saboresVector(saboresCantidad.begin(), saboresCantidad.end());

            if (sabor == saboresVector[mid].first) {
                int cantidad = saboresVector[mid].second; // Obtener la cantidad si el sabor existe
                std::cout << "La cantidad de " << sabor << " es: " << cantidad << std::endl;
                return cantidad;
            } else if (sabor < saboresVector[mid].first) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        std::cout << sabor << " no se encontró en el contenido." << std::endl;
        return -1; // Retorna un valor negativo si el sabor no se encontró
    }

    
    void ordenarSaboresPorCantidad() {
        // Crear un vector de pares (nombre del sabor, cantidad) a partir del mapa
        vector<pair<string, int>> saboresVector(saboresCantidad.begin(), saboresCantidad.end());

        // Ordenar el vector de pares por las cantidades usando el algoritmo de inserción
        for (int i = 1; i < saboresVector.size(); i++) {
            // Tomar el elemento actual que queremos insertar en su posición correcta
            pair<string, int> claveValor = saboresVector[i];
            int j = i - 1;

            // Mover los elementos mayores que claveValor hacia adelante
            while (j >= 0 && claveValor.second < saboresVector[j].second) {
                saboresVector[j + 1] = saboresVector[j];
                j--;
            }

            // Colocar claveValor en su posición correcta
            saboresVector[j + 1] = claveValor;
        }

        cout << "Sabores ordenados de menor a mayor por cantidad:"<<endl;
        for (const auto& par : saboresVector) {
            cout<<par.first << ": " << par.second << endl; // Utiliza std::endl aquí
        }
    }

 
};




