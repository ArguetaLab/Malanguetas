#include <vector>
#include <string>
#include <fstream>
#include <map>
#include <iostream>
#include <unordered_map>
#include <sstream>


using namespace std;


class Contenido{
// Iniciamos las variables
private:
    string sabor;
    float cantidad;
    // Aquí se está aplicando estructura de datos ya que estamos usando hash maps
    unordered_map<string, unordered_map<string, int>> saboresCantidad;
    

public:
    void cargarDatosDesdeTXT(const string& archivo) {
        ifstream file(archivo);

        string line;
        getline(file, line); // Leer la primera línea (encabezados)

        istringstream iss(line); // Usar un stringstream para leer los encabezados
        vector<string> encabezados;
        string token;

        while (getline(iss, token, ',')) {
            encabezados.push_back(token);
        }

        while (getline(file, line)) {
            istringstream iss(line);
            string fecha, sabor;
            int cantidad;

            if (getline(iss, fecha, ',')) {
                for (size_t i = 1; i < encabezados.size(); i++) {
                    if (getline(iss, line, ',')) {
                        cantidad = stoi(line);
                        saboresCantidad[fecha][encabezados[i]] = cantidad;
                    }
                }
            }
        }

        file.close();
    }


     void agregarSabor(const string& fecha, const string& sabor, int cantidad) {
        saboresCantidad[fecha][sabor] = cantidad;
    }


int buscarSabor(const string& fecha, const string& sabor) {
    if (saboresCantidad.find(fecha) != saboresCantidad.end()) {
        unordered_map<string, int>& sabores = saboresCantidad[fecha];

        auto it = sabores.find(sabor);
        if (it != sabores.end()) {
            int cantidad = it->second;
            cout << "La cantidad de " << sabor << " vendida en la fecha " << fecha << " es: " << cantidad << endl;
            return cantidad;
        }

        // Si no se encuentra el sabor, realizamos una búsqueda binaria
        vector<pair<string, int>> saboresVector(sabores.begin(), sabores.end());
        int low = 0;
        int high = saboresVector.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (sabor == saboresVector[mid].first) {
                int cantidad = saboresVector[mid].second;
                cout << "La cantidad de " << sabor << " vendida en la fecha " << fecha << " es: " << cantidad << endl;
                return cantidad;
            } else if (sabor < saboresVector[mid].first) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    }

    cout << "Sabor no encontrado en la fecha " << fecha << endl;
    return -1;
}





    void ordenarSaboresPorCantidad(const string& fecha) {
        if (saboresCantidad.find(fecha) != saboresCantidad.end()) {
            unordered_map<string, int>& sabores = saboresCantidad[fecha];

            vector<pair<string, int>> saboresVector(sabores.begin(), sabores.end());

            for (int i = 1; i < saboresVector.size(); i++) {
                pair<string, int> claveValor = saboresVector[i];
                int j = i - 1;

                while (j >= 0 && claveValor.second < saboresVector[j].second) {
                    saboresVector[j + 1] = saboresVector[j];
                    j--;
                }

                saboresVector[j + 1] = claveValor;
            }

            cout << "Sabores ordenados de menor a mayor por cantidad en la fecha " << fecha << ":" << endl;
            for (const auto& par : saboresVector) {
                cout << par.first << ": " << par.second << endl;
            }
        } else {
            cout << "Fecha no encontrada." << endl;
        }
}

    void imprimirTodoElHashMap() {
        cout << "Contenido del HashMap:" << endl;
        for (const auto& pairFechaSabores : saboresCantidad) {
            const string& fecha = pairFechaSabores.first;
            const unordered_map<string, int>& sabores = pairFechaSabores.second;

            cout << "Fecha: " << fecha << endl;
            for (const auto& par : sabores) {
                cout << "  " << par.first << ": " << par.second << endl;
            }
        }
    }

};
