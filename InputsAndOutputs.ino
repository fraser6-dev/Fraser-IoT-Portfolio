#define BUTTON_PIN 16
#define LED_PIN    18  

int led_state = LOW;   //these are needed for our toggle
int button_state;      
int last_button_state;  

void setup() {
  Serial.begin(9600);                
  pinMode(BUTTON_PIN, INPUT_PULLUP); //Setup pins
  pinMode(LED_PIN, OUTPUT);        

  button_state = digitalRead(BUTTON_PIN); //Read the button if its pressed
}

void loop() {
  last_button_state = button_state;  
  button_state = digitalRead(BUTTON_PIN); //current button state is the button pin

  if (last_button_state == HIGH && button_state == LOW) {
    Serial.println("The button is pressed");

    // toggle state of LED
    led_state = !led_state;

    // control LED arccoding to the toggled state
    digitalWrite(LED_PIN, led_state);
  }
}
