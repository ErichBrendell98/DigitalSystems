#include <avr/io.h>
#include <util/delay.h>

#define LED_PIN PH3
#define BUTTON_PIN PH4

int main(void) {
    // Set the LED pin as an output
    DDRH |= (1 << LED_PIN);

    // Set the button pin as an input
    DDRH &= ~(1 << BUTTON_PIN);

    while (1) {
        // If the button is pressed, turn on the LED
        if (PINH & (1 << BUTTON_PIN)) {
            PORTH |= (1 << LED_PIN);
        } else {
            PORTH &= ~(1 << LED_PIN);
        }
    }
}