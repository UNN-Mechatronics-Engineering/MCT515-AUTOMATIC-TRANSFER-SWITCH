# MCT515-AUTOMATIC-TRANSFER-SWITCH
Automatic on/off generator with automatic changeover project.

The Arduino code:

> To run the code you need:

* Arduino IDE
* A Personal Computer(PC)

```cpp

#include <LiquidCrystal.h>
#define MAINS_SENSOR_PIN A0
#define MAINS_RELAY_PIN A1
#define GENERATOR_RELAY_PIN A2
#define GENERATOR_SWITCH_PIN A3
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
  pinMode(MAINS_SENSOR_PIN, INPUT);
  pinMode(MAINS_RELAY_PIN, OUTPUT);
  pinMode(GENERATOR_RELAY_PIN, OUTPUT);
  pinMode(GENERATOR_SWITCH_PIN, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("GOD IS MY LIGHT");
}

void loop() {
  int mainsPower = analogRead(MAINS_SENSOR_PIN);
  
  if (mainsPower > 1000) {
    digitalWrite(MAINS_RELAY_PIN, HIGH);
    digitalWrite(GENERATOR_RELAY_PIN, LOW);
    digitalWrite(GENERATOR_SWITCH_PIN, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Mains     on");
  } else {
    digitalWrite(MAINS_RELAY_PIN, LOW);
    digitalWrite(GENERATOR_RELAY_PIN, HIGH);
    digitalWrite(GENERATOR_SWITCH_PIN, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Generator on ");
  }
}

```


# This code is written in C# language(Arduino syntax) and controls power supply using sensors and relays. Let's go through the code line by line:


1. ```#include <LiquidCrystal.h>```: This line includes the LiquidCrystal library which allows the Arduino to control LCD displays.

2. ```#define MAINS_SENSOR_PIN A0```: This line defines a constant variable MAINS_SENSOR_PIN and assigns it the value A0. It represents the pin number connected to the mains power sensor.

3. ```#define MAINS_RELAY_PIN A1```: This line defines a constant variable MAINS_RELAY_PIN and assigns it the value A1. It represents the pin number connected to the mains power relay.

4. ```#define GENERATOR_RELAY_PIN A2```: This line defines a constant variable GENERATOR_RELAY_PIN and assigns it the value A2. It represents the pin number connected to the generator power relay.

5. ```#define GENERATOR_SWITCH_PIN A3```: This line defines a constant variable GENERATOR_SWITCH_PIN and assigns it the value A3. It represents the pin number connected to the generator switch.

6. ```LiquidCrystal lcd(13, 12, 11, 10, 9, 8);```: This line creates an instance of the LiquidCrystal class named lcd. It is connected to the Arduino's digital pins 13, 12, 11, 10, 9, and 8, which are used to control the LCD display.

7. ```void setup() {```: This line starts the setup() function, which runs once when the Arduino board is powered on or reset.

8. ```pinMode(MAINS_SENSOR_PIN, INPUT);```: This line sets the pin mode of the MAINS_SENSOR_PIN to INPUT. It configures the pin as an input to read the mains power sensor.

9. ```pinMode(MAINS_RELAY_PIN, OUTPUT);```: This line sets the pin mode of the MAINS_RELAY_PIN to OUTPUT. It configures the pin as an output to control the mains power relay.

10. ```pinMode(GENERATOR_RELAY_PIN, OUTPUT);```: This line sets the pin mode of the GENERATOR_RELAY_PIN to OUTPUT. It configures the pin as an output to control the generator power relay.

11. ```pinMode(GENERATOR_SWITCH_PIN, OUTPUT);```: This line sets the pin mode of the GENERATOR_SWITCH_PIN to OUTPUT. It configures the pin as an output to control the generator switch.

12. ```lcd.begin(16, 2);```: This line initializes the LCD display with 16 columns and 2 rows.

13. ```lcd.print("GOD IS MY LIGHT");```: This line displays the text "GOD IS MY LIGHT" on the LCD display.

14. ```void loop() {```: This line starts the loop() function, which runs repeatedly as long as the Arduino board is powered on.

15. ```int mainsPower = analogRead(MAINS_SENSOR_PIN);```: This line reads the analog value from the MAINS_SENSOR_PIN and stores it in the variable mainsPower. It represents the reading from the mains power sensor.

16. ```if (mainsPower > 1000) {```: This line checks if the mainsPower is greater than 1000. If true, it means that the mains power is detected.

17. ```digitalWrite(MAINS_RELAY_PIN, HIGH);```: This line sets the MAINS_RELAY_PIN to HIGH, turning on the mains power relay.

18. ```digitalWrite(GENERATOR_RELAY_PIN, LOW);```: This line sets the GENERATOR_RELAY_PIN to LOW, turning off the generator power relay.

19. ```digitalWrite(GENERATOR_SWITCH_PIN, LOW);```: This line sets the GENERATOR_SWITCH_PIN to LOW, turning off the generator switch.

20. ```lcd.setCursor(0, 1);```: This line sets the cursor position on the LCD to the first column of the second row.

21. ```lcd.print("Mains     on");```: This line displays the text "Mains     on" on the LCD display.

22. ```} else {```: This line is the start of the else part of the if statement. If the condition in line 16 is false, this block of code will execute.

23. ```digitalWrite(MAINS_RELAY_PIN, LOW);```: This line sets the MAINS_RELAY_PIN to LOW, turning off the mains power relay.

24. ```digitalWrite(GENERATOR_RELAY_PIN, HIGH);```: This line sets the GENERATOR_RELAY_PIN to HIGH, turning on the generator power relay.

25. ```digitalWrite(GENERATOR_SWITCH_PIN, HIGH);```: This line sets the GENERATOR_SWITCH_PIN to HIGH, turning on the generator switch.

26. ```lcd.setCursor(0, 1);```: This line sets the cursor position on the LCD to the first column of the second row.

27. ```lcd.print("Generator on ");```: This line displays the text "Generator on " on the LCD display.

28. ```}```: This line ends the else block of code.

The loop() function repeats from line 15 to 28 as long as the Arduino board is powered on. It continuously reads the mains power sensor value and switches between mains power and generator power based on the value read. The LCD display shows the current power source status.


In order to connect the hardware for this code, you will need the following components:

1. Arduino board
2. LiquidCrystal display
3. Mains sensor
4. Mains relay
5. Generator relay
6. Generator switch

Here is a typical hardware connection for this code:

1. Connect the Mains Sensor to the Arduino board:
   - Connect the positive (S+) pin of the Mains Sensor to the A0 pin of the Arduino board.
   - Connect the negative (S-) pin of the Mains Sensor to the ground (GND) pin of the Arduino board.

2. Connect the Mains Relay to the Arduino board:
   - Connect the positive (IN+) pin of the Mains Relay to the A1 pin of the Arduino board.
   - Connect the negative (IN-) pin of the Mains Relay to the ground (GND) pin of the Arduino board.

3. Connect the Generator Relay to the Arduino board:
   - Connect the positive (IN+) pin of the Generator Relay to the A2 pin of the Arduino board.
   - Connect the negative (IN-) pin of the Generator Relay to the ground (GND) pin of the Arduino board.

4. Connect the Generator Switch to the Arduino board:
   - Connect the positive (IN+) pin of the Generator Switch to the A3 pin of the Arduino board.
   - Connect the negative (IN-) pin of the Generator Switch to the ground (GND) pin of the Arduino board.

5. Connect the LiquidCrystal Display to the Arduino board:
   - Connect the RS pin of the LiquidCrystal display to pin 13 on the Arduino board.
   - Connect the Enable pin of the LiquidCrystal display to pin 12 on the Arduino board.
   - Connect the D4 pin of the LiquidCrystal display to pin 11 on the Arduino board.
   - Connect the D5 pin of the LiquidCrystal display to pin 10 on the Arduino board.
   - Connect the D6 pin of the LiquidCrystal display to pin 9 on the Arduino board.
   - Connect the D7 pin of the LiquidCrystal display to pin 8 on the Arduino board.

Once all the connections are made, you can upload the code to the Arduino board and it should work as intended.
