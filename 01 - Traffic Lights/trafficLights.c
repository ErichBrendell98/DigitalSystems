#include <avr/io.h>
#include <util/delay.h>

#define RED_LED_PIN PB7
#define YELLOW_LED_PIN PB6
#define GREEN_LED_PIN PB5

int main(void) {
    // Set the LED pins as outputs
    DDRB |= (1 << RED_LED_PIN) | (1 << YELLOW_LED_PIN) | (1 << GREEN_LED_PIN);

    while (1) {
        // Turn off the red and yellow LEDs, turn on the green LED
        PORTB &= ~(1 << RED_LED_PIN);
        PORTB &= ~(1 << YELLOW_LED_PIN);
        PORTB |= (1 << GREEN_LED_PIN);

        // Wait for 5 seconds
        _delay_ms(5000);

        // Turn on the yellow LED, turn off the green LED
        PORTB |= (1 << YELLOW_LED_PIN);
        PORTB &= ~(1 << GREEN_LED_PIN);

        // Wait for 2 seconds
        _delay_ms(2000);

        // Turn on the red LED, turn off the yellow LED
        PORTB |= (1 << RED_LED_PIN);
        PORTB &= ~(1 << YELLOW_LED_PIN);

        // Wait for 5 seconds
        _delay_ms(5000);
    }

    return 0;
}