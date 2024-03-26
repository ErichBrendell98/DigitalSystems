// Definition: Traffic lights simulation with Arduino.

int red = 13;
int yellow = 10;
int green = 7;

void setup() {
    // Initialize the pins as outputs
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop() {
    // Red green on
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);

    // Delay for 5 seconds
    delay(5000);

    // Yellow light on
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);

    // Delay for 2 seconds
    delay(2000);

    // Red light on
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);

    // Delay for 5 seconds
    delay(5000);
}
