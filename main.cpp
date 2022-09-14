// =================================================================
//
// File: main.cpp
// Author: Santiago Reynaldo Aguilar Vega - A01709030
// Date: 08/09/2022
//
// =================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

fstream archivo;

void leerArchivo1(){
  archivo.open("input1.txt",ios::in); //805 1FR
  if(archivo.is_open()){
    char fecha[9];
    char hora[6];
    char entrada[2];
    char identificador[6];
    while( !archivo.eof() ){
      archivo>>fecha>>hora>>entrada>>identificador;
      cout << "Salidas de barcos\n";
      cout << "Fecha: " << fecha << endl;
      cout << "Hora: " << hora << endl;
      cout << "Entrada: " << entrada << endl;
      cout << "Identificador: " << identificador << endl;
    }
    archivo.close();
  }
  else{
    cout << "No abrio el archivo...";
  }
}

void leerArchivo2(){
  archivo.open("input2.txt",ios::in); //1429 1FJ
  if(archivo.is_open()){
    char fecha[9];
    char hora[6];
    char entrada[2];
    char identificador[6];
    while( !archivo.eof() ){
      archivo>>fecha>>hora>>entrada>>identificador;
      cout << "Salidas de barcos\n";
      cout << "Fecha: " << fecha << endl;
      cout << "Hora: " << hora << endl;
      cout << "Entrada: " << entrada << endl;
      cout << "Identificador: " << identificador << endl;
    }
    archivo.close();
  }
  else{
    cout << "No abrio el archivo...";
  }
}

void leerArchivo3(){
  archivo.open("input3.txt",ios::in); //1149 1TL
  if(archivo.is_open()){
    char fecha[9];
    char hora[6];
    char entrada[2];
    char identificador[6];
    while( !archivo.eof() ){
      archivo>>fecha>>hora>>entrada>>identificador;
      cout << "Salidas de barcos\n";
      cout << "Fecha: " << fecha << endl;
      cout << "Hora: " << hora << endl;
      cout << "Entrada: " << entrada << endl;
      cout << "Identificador: " << identificador << endl;
    }
    archivo.close();
  }
  else{
    cout << "No abrio el archivo...";
  }
}

void leerArchivo4(){
  archivo.open("input4.txt",ios::in); //1332 1FR
  if(archivo.is_open()){
    char fecha[9];
    char hora[6];
    char entrada[2];
    char identificador[6];
    while( !archivo.eof() ){
      archivo>>fecha>>hora>>entrada>>identificador;
      cout << "Salidas de barcos\n";
      cout << "Fecha: " << fecha << endl;
      cout << "Hora: " << hora << endl;
      cout << "Entrada: " << entrada << endl;
      cout << "Identificador: " << identificador << endl;
    }
    archivo.close();
  }
  else{
    cout << "No abrio el archivo...";
  }
}

/*
void leerArchivo5Pruebas(){
  archivo.open("datos.txt",ios::in);
  if(archivo.is_open()){
    char fecha[9];
    char hora[6];
    char entrada[2];
    char identificador[6];
    string id;
    while( !archivo.eof() ){
      archivo>>fecha>>hora>>entrada>>identificador;
      id = identificador;
      if(id == "1FR"){
      cout << "Salidas de barcos\n";
      cout << "Fecha: " << fecha << endl;
      cout << "Hora: " << hora << endl;
      cout << "Entrada: " << entrada << endl;
      cout << "Identificador: " << identificador << endl;}
    }
    archivo.close();
  }
  else{
    cout << "No abrio el archivo...";
  }
}
*/

int main(){
  leerArchivo1();
  leerArchivo2();
  leerArchivo3();
  leerArchivo4();

  system("pause");
  return 0;
}

