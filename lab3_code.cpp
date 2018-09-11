/* Practica de Laboratorio 3
*  Informatica 2 - 2018_2
*  Prof: Juan Camilo Correa Chica
*  Fecha: Septiembre 10/2018 - Septiembre 17/2018 - Septiembre 24/2018
*  Plazo máximo para enviar enlace para clonar el repositorio: Septiembre 10/2018 11:00pm
*  Estudiante1: Dilan Rojas Marin
*  Estudiante2: Nombres y apellidos completos (Opcional, puede trabajar individualmente)
*  Fecha del ultimo Commit en GitHub: 10/09/2018
*
* 1. Diseñe e implemente una clase llamada "Libro" que tiene los siguientes atributos privados:
*	Un atributo de tipo entero para el codigo de catalogo del libro
*	Un atributo de tipo cadena de caracteres para el nombre del libro
*	Un atributo de tipo char para la materia del libro (L = Literatura, C = Ciencias, G = Geografia, A = Arte, E = Enciclopedia, D = Diccionario)
*	Un atributo de tipo cadena de caracteres para el nombre del autor
*	Un atributo tipo bool para indicar si el libro esta disponible o prestado (True = disponible, False = prestado)
*	
*	Adicionalmente la clase debe contar con metodos publicos para modificar y obtener el valor de los atributos
*   La clase debe tener un constructor que permita inicializar todos los atributos de la clase al declarar un objeto (NO es constructor por defecto)
*	Implemente una funcion amiga que permita buscar un "Libro" por Titulo y por Nombre de Autor
*	Implemente una clase amiga que permita saber si un "Libro" esta disponible o prestado
*/

#ifndef libro
#define libro
 using namespace std;
#include <iostream>
#include <string.h>

class Libro
{
private:
    int cod_libro;
    char nombre_libro[80];
    char nombre_autor[50];
  char Materia[13];
  bool true;
  bool false;
  friend void buscador(libro)
public:
    Libro(int cod_libro, char nombre_libro,char nombre_autor,char Materia;) {
    void aggcodigo(int cod_libro);
    void aggN_libro(char nombre_libro);
    void aggN_autor(char nombre_autor);
    void aggMateria(char materia);
};
  void buscador(libro) {
   cout <<"El titulo del libro: "<<nombre_libro<< endl;
    cout <<"El Nombre del autor es: "<<nombre_autor<< endl;
  }
  void libro:aggcodigo(int cod_libro) {
    cod_libro=111
  }
  void libro: aggNlibro(char nombre_libro){
    nombre_libro="dilan libro"
  }
  
 void libro:aggN_autor(char nombre_autor){
   nombre_autor="Dilan Rojas"
 }
  void libro:aggMateria(char materia){
    materia="literatura"
  }
  
                                    
int main() {

   cout << "el codigo del libro es: " << cod_libro  << endl;
   cout << "el nombre del autor es: " << nombre_autor << endl;
   cout << "la materia escogida es: "<< materia<< endl;
  cout << "el nombre del libro es: " << nombre_libro << endl;
   return 0;

#endif
