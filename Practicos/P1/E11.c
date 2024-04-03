#include <stdio.h>

void Fin();
//Indica final exitoso de la ejecución.

void Abort();
//Indica final anormal de la ejecución.

int Abrir_archivo(nombre_archivo);
int Cerrar_archivo(nombre_archivo);
//Abren y cierran un archivo dado su nombre. Devuelven -1 en caso de error.

int Leer(nombre_archivo, buffer, n);
/*Lee n caracteres de un archivo identificado por su nombre, almacenándolos en el array buffer, y
devuelve la cantidad de bytes leídos, o -1 en caso de error. En caso de que se haya alcanzado el
fin del archivo, devuelve 0.*/

void Obtener_recurso(nombre_recurso); 
void Liberar_recurso(nombre_recurso);
/*Obtiene y libera un recurso (que puede ser un dispositivo, memoria, etc.) dado su nombre. Se
bloquean hasta que el recurso sea obtenido o liberado.*/

int Escribir_dispositivo(nombre_dispositivo, buffer, n);
/*Escribe n bytes del buffer en el dispositivo indicado por el nombre, y devuelve la cantidad de bytes
que pudo escribir, o -1 en caso de error.*/

void Esperar_evento(nombre_evento);
/*Bloquea al proceso hasta que suceda el evento esperado. Retornan el control inmediatamente si
el evento ya ocurre en el momento de invocarlo.*/

