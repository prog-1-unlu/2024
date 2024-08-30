#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// % <!-- Escribir una función que procese las notas de los dos parciales de un alumno inscriptos en Programación 1. La función recibe las dos notas, e informa por pantalla la situación del alumno junto con su nota promedio. Además, la función debe retornar la nota promedio del alumno.  Las reglas para saber la situación de un alumno son las siguientes:
// % Para ser promovido (es decir, cursada aprobada y no requiere rendir ﬁnal), el alumno debe haber aprobado ambos parciales y tener un promedio mayor o igual a 7.
// % Para estar regular (cursada aprobada, pero debe rendir ﬁnal), el alumno debe haber aprobado ambos parciales (nota mayor o igual a 4).
// % Si el alumno no ha aprobado ambos parciales (es decir, tiene nota menor que 4 en alguno de ellos), entonces queda en condición de libre (es decir, puede rendir un ﬁnal extendido o recursar).

// % Escribir un programa principal que llame a la función anterior, para un curso de n alumnos inscriptos en la materia, y muestre por pantalla el promedio del curso. Las notas de los alumnos en los parciales deben ser enteros entre 0 y 10 generados en forma aleatoria en el programa principal. -->
// % int main()
// % {
// %     int * p;
// %     printf("%p", p);
// %     //srand(time(NULL));
// %     int aleatorio;
// %     for(int i = 0; i < 10; i++) {
// %         aleatorio = rand();
// %         printf("%d\n", aleatorio);
// %     }
// %     return 0;
// % }
// (limiteSuperior - limiteInferior + 1) + limiteInferior;

float notas(int nota1, int nota2) 
{
    float promedio = (nota1 + nota2)/2.0;
    // printf("%i", promedio);
    if (nota1 >= 4 && nota2 >= 4) 
    {
        if (promedio >= 7) 
        {
            printf("Situacion: promovido\n");
        }
        else 
        {
            printf("Situacion: Regular\n");
        }
    }
    else 
    {
        printf("Situacion: libre\n");
    }
    return promedio;
} 

int numero_aleatorio(){
    int numero;
    
    numero = rand()%11 ;
    return numero;
}

int main() {
    srand(time(NULL));
    int cantidad_alumnos = 10;
    float sumatoria_curso =0;
    for (int i=1; i<=cantidad_alumnos;i++){
        int nota1 = numero_aleatorio();
        int nota2 = numero_aleatorio();
        float nota_promedio = notas(nota1,nota2);
        printf("%f \n",nota_promedio);
        sumatoria_curso += nota_promedio;
    }
    float promedio_curso = sumatoria_curso/cantidad_alumnos;
    printf("El promedio del curso es : %f \n",promedio_curso);

    // printf("ingrese la nota: ");
    // scanf("%d", &nota1);
    // printf("ingrese la nota: ");
    // scanf("%d", &nota2);
    // notas(nota1, nota2);
    return 0;
} 
