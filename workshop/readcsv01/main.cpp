#include <iostream>
#include <fstream> 
#include <vector> 
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::fstream;
using std::vector;
using std::string;
using std::stringstream;
using std::getline;

int main(){

    // Descriptor de un archivo
	fstream fin;

	// Abro archivo en modo lectura
	fin.open("data/datos.csv", ios::in);

    // Creo un vector vacio para guardar cada registro
    vector<string> row;
	string line, word, temp;

    // Leo las primeras 9 lineas del registro
    for(int i = 0; i < 9; i++){
        // Limpio el vector para guardar el registro de datos
        row.clear();

        // Leo la linea entera y se almacena en la variable "line"
        getline(fin, line);

        stringstream s(line);

        string word;

        //*
        while (getline(s, word, ';')) {
  
            // Guardo cada palabra encontrada en el vector
            row.push_back(word);
            
        }
        //*/

        // Imprimr el vector con los valores obtenidos en la linea
        for (int i = 0; i < row.size(); ++i) {
            cout << row.at(i) << " | ";
        }
        cout << endl;      
    }
}