#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

// Prototipos de las funciones aritméticas
int suma_arimetica();
int resta_arimetica();
int producto_aritmetico();
int calculadora(int numero1, int numero2, int *suma, int *resta, int *producto);
int contar_letras(char *texto);
int procesar_cadenas(const char *texto1,const char *texto2,const char *texto3);
// se separa en dos funciones para mayor claridad
float condicion_alumno(int nota1, int nota2,char condicion[]);
// optativas ------------
float promedio(int nota1,int nota2);
int es_aprobado(int nota);
// optativas ---------------

void test_suma_arimetica() {
    assert(suma_arimetica(2, 3) == 5);
    assert(suma_arimetica(-1, -1) == -2);
    assert(suma_arimetica(5, -3) == 2);
    assert(suma_arimetica(0, 0) == 0);
    assert(suma_arimetica(0, 5) == 5);
    assert(suma_arimetica(5, 0) == 5);
    printf("Todos los tests de suma pasaron correctamente.\n");
}

void test_resta_arimetica() {
    assert(resta_arimetica(5, 3) == 2);
    assert(resta_arimetica(-1, -1) == 0);
    assert(resta_arimetica(5, -3) == 8);
    assert(resta_arimetica(0, 0) == 0);
    assert(resta_arimetica(0, 5) == -5);
    assert(resta_arimetica(5, 0) == 5);
    printf("Todos los tests de resta pasaron correctamente.\n");
}

void test_producto_aritmetico(){
    assert(producto_aritmetico(-1, -1) == 1);
    assert(producto_aritmetico(5, -3) == -15);
    assert(producto_aritmetico(0, 0) == 0);
    assert(producto_aritmetico(1, 5) == 5);
    assert(producto_aritmetico(5, 0) == 0);
    assert(producto_aritmetico(5, 3) == producto_aritmetico(3,5));
    printf("Todos los tests de product pasaron correctamente.\n");

}

void test_calculadora() {
    int s, r, p;
    assert(calculadora(3, 1, &s, &r, &p) == 0);
    assert(s == 4);
    assert(r == 2);
    assert(p == 3);

    assert(calculadora(-1, -1, &s, &r, &p) == 0);
    assert(s == -2);
    assert(r == 0);
    assert(p == 1);

    printf("Todos los tests de calculadora pasaron correctamente.\n");
}

void test_procesar_cadenas() {
    // Prueba 1: Todas las cadenas son iguales
    assert(procesar_cadenas("Hola", "Hola", "Hola") == 3);

    // Prueba 2: Las dos primeras cadenas son iguales
    assert(procesar_cadenas("Hola", "Hola", "Mundo") == 0);

    // Prueba 3: Las dos últimas cadenas son iguales
    assert(procesar_cadenas("Mundo", "Hola", "Hola") == 2);

    // Prueba 4: Todas las cadenas son distintas
    assert(procesar_cadenas("Hola", "Mundo", "Test") == 4);

    printf("Todas las pruebas pasaron correctamente.\n");
}

void test_procesar_cadenas() {
    // Prueba 1: Todas las cadenas son iguales
    assert(procesar_cadenas("Hola", "Hola", "Hola") == 3);

    // Prueba 2: Las dos primeras cadenas son iguales
    assert(procesar_cadenas("Hola", "Hola", "Mundo") == 0);

    // Prueba 3: Las dos últimas cadenas son iguales
    assert(procesar_cadenas("Mundo", "Hola", "Hola") == 2);

    // Prueba 4: Todas las cadenas son distintas
    assert(procesar_cadenas("Hola", "Mundo", "Test") == 4);

    printf("Todas las pruebas pasaron correctamente.\n");
}

void test_promedio() {
    assert(promedio(6, 8) == 7.0);
    assert(promedio(4, 4) == 4.0);
    assert(promedio(0, 10) == 5.0);
    printf("Todas las pruebas de promedio pasaron correctamente.\n");
}

void test_es_aprobado() {
    assert(es_aprobado(4) == 1);
    assert(es_aprobado(3) == 0);
    assert(es_aprobado(10) == 1);
    printf("Todas las pruebas de es_aprobado pasaron correctamente.\n");
}
void test_condicion_alumno_integral(){
    // OPTATIVAS
    // test_promedio();
    // test_es_aprobado();
    test_condicion_alumno();
}


int main() {
    test_suma_arimetica();
    test_resta_arimetica();
    test_producto_aritmetico();
    test_calculadora();
    test_contar_letras_y_mostrar_palabras();
    test_procesar_cadenas();
    test_condicion_alumno_integral();
    return 0;
}