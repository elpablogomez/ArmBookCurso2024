#include "mbed.h"

int main()
{
    DigitalIn B1_USER(BUTTON1);

    DigitalOut LD1(LED2);

    while (true) {
        LD1 = B1_USER;
    }
}
