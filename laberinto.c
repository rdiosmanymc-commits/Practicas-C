#include <stdio.h>
#include <stdbool.h>

int main() {
    int vidas = 3;
    int llaves = 0;
    int energia = 50;
    
    printf("=== BIENVENIDO AL LABERINTO DEL HACKER ===\n");
    printf("Estado inicial -> Vidas: %d, Llaves: %d, Energia: %d%%\n\n", vidas, llaves, energia);
    
    // --- ACERTIJO 1: LA PUERTA COMPUESTA ---
    // El jugador encuentra un cofre. Usa un operador simplificado para sumarle 2 llaves a tu variable 'llaves'
    // TU CÓDIGO AQUÍ:
    int llavesx = (llaves += 2);
    printf("el jugador abrio un cofre\n");
    printf("llaves:%d\n",llavesx);
    llaves == llavesx;
   
    
    // --- ACERTIJO 2: EL TRIPLE ATAQUE ---
    // Un monstruo te ataca en los pasillos. Resta 1 vida usando un operador de DECREMENTO (post o pre)
    // TU CÓDIGO AQUÍ:
    int vidasx;
    printf("Un monstruo te ataca en los pasillos (pierdes una vida)\n");
    vidasx = --vidas;
    printf("te quedan: %d\n",vidasx);
    vidas == vidasx;

    
    // --- ACERTIJO 3: LA PÓCIMA DE PODER ---
    // Te tomas un tónico que DUPLICA tu energía actual usando un operador simplificado multiplicativo
    // TU CÓDIGO AQUÍ:
    int energiax = (energia *= 2);
    printf("tomaste una pocion\n");
    
    printf("energia:%d\n",energiax);
    energia == energiax;

    
    // ========================================================
    // --- EVALUACIÓN DE LA CONDICIÓN DE VICTORIA ---
    // Para escapar del laberinto necesitas:
    // Tener más de 0 vidas Y ADEMÁS tener exactamente 2 llaves Y ADEMÁS tener 100 de energía.
    // Completa la expresión lógica dentro del 'if' usando los operadores relacionales y lógicos (&&, ==, >)
    
    if (vidas > 0 && llaves == 2 && energia == 100 ) { // <-- COMPLETA AQUÍ ADENTRO
        printf("--- ¡VICTORIA! ---\n");
        printf("Lograste abrir el portal principal. Escapaste con %d vidas restantes.\n", vidas);
    } else {
        printf("--- GAME OVER ---\n");
        printf("El portal se quedo cerrado. Estado final -> Vidas: %d, Llaves: %d, Energia: %d%%\n", vidas, llaves, energia);
    }

    
    return 0;
}