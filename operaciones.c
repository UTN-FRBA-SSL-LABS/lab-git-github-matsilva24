#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
} 
//toma los valores de a y b y devuelve el valor de a menos el valor de b

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

int multiplicar(int a, int b) {
    return a * b; //toma los valores pasados de a y b y devuelve la multiplicacion de esos.

}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;

}
