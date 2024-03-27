// Defining the pins
const int buttonPin = 7;
const int ledPin = 5;

void setup() {
    // Initializing the LED pin as output
    pinMode(ledPin, OUTPUT);
    // Initializing the button pin as input
    pinMode(buttonPin, INPUT);
}

void loop() {
    // Reading the button state
    int buttonState = digitalRead(buttonPin);

    // If the button is pressed, the value read will be HIGH
    if (buttonState == HIGH) {
    // Turn on the LED
    digitalWrite(ledPin, HIGH);
    } else {
    // Turn off the LED
    digitalWrite(ledPin, LOW);
    }
}