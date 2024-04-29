#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct{
int TareaID;//Numérico autoincremental comenzando en 1000
char *Descripcion; //
int Duracion; // entre 10 – 100
}typedef Tarea;

struct{
Tarea T;
Nodo* Siguiente;
}typedef Nodo;

void main(){
Tarea* tareas;
char respuesta;
bool masTareas = true;
int i = 1;
int id = 1000;
while(masTareas){
    printf("Ingrese la tarea numero %d", i);
    
    i++;
    id++;
    tareas++;
    puts("Desea ingresar otra tarea? [S/n]");
    scanf("%c", &respuesta);
    if (respuesta=='n'||'N')
    {
        masTareas=false;
    }
};
}