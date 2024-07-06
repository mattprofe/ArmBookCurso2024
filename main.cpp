#include "mbed.h"

int main()
{
    // Especifica como entrada el pin en la constante BUTTON1
    // B1_USER esta ligado al pin fisico
    DigitalIn B1_USER(BUTTON1);

    // Especifica como salida el pin en la constante LED1
    // LD1 esta ligado al pin fisico
    DigitalOut LD1(LED1);

    while (true) {
        LD1 = !B1_USER;
    }
}
