// =====================================================================
// Lab 11 – Arrays, Loops and JSON  (STARTER FILE)
// IoT I – Dawson College – Electrical Engineering Technology
//
// Build this program one part at a time, following the lab procedure.
// Each comment below marks where the code from the procedure goes.
// =====================================================================
#include <Arduino.h>
#include <ArduinoJson.h>   // added with lib_deps in platformio.ini

// ----- Pins ----------------------------------------------------------
// Replace each ___ with the GPIO number from the tables in Part II.
#define BUTTON_PIN  32   // push button (to GND)
#define POT_PIN     34   // potentiometer wiper (analog input)
// The four LED pins are stored in an array (Global variables, Part III).

// ----- Global variables ----------------------------------------------
// Part III – LED pins array
// An array holds many values of the same type under ONE name
// (Common Commands: "Declare an Array").
// 1st blank: how many elements?
// Next four blanks: the LED pins from Part II, LED 0 first.
const int LED_PINS[4] = {16, 17, 18, 19};  // the four LED pins
const int NUM_LEDS = 4;      // the number of elements in LED_PINS
const int STEP_TIME = 200;   // how long each LED stays on (ms)


// Part IV – samples array


// ----- Helper functions ----------------------------------------------
// Part III – showLevel()


// Part IV – takeSamples(), printSamples(), getAverage(),
//           getMinimum(), getMaximum()


// Part V – sendReport()


// Part IV – runMeasurement()


// Part V – handleCommand() and checkSerial()


void setup()
{
  Serial.begin(115200);

  // Inputs and outputs
    // Button: input with the internal pull-up resistor
    // (Common Commands: "Input with Pull-up").
    pinMode(BUTTON_PIN, INPUT_PULLUP);

    // ONE for loop sets all four LED pins as outputs (Common Commands: "For Loop").
    // i takes the values 0, 1, 2, 3 – one for each element of the array.
    for (int i = 0; i < NUM_LEDS; i++)
    {
      pinMode(LED_PINS[i], OUTPUT);    // the element number (index) is i
    }


  Serial.println("Lab 11 – Arrays, Loops and JSON");
}

void loop()
{
  // Part III – LED patterns (for loops)
// Visit each LED from the first (index 0) to the last, one after the other.
for (int i = 0; i < NUM_LEDS; i++)
{
  digitalWrite(LED_PINS[i], HIGH);   // turn LED number i on
  Serial.print("LED ");
  Serial.print(i);
  Serial.print(" is on GPIO ");
  Serial.println(LED_PINS[i]);      // print the pin number stored at index i
  delay(STEP_TIME);
  digitalWrite(LED_PINS[i], LOW);    // turn it off again
}

  // Part IV – Wait for the button, then measure (while loops)


}
