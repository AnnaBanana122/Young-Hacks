int ONE_TIME_UNIT = 500;            // 500 milliseconds is one time unit

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

void dot() {
  digitalWrite(LED_BUILTIN, LOW);  // Turn the LED on by making the voltage LOW
  delay(ONE_TIME_UNIT);            // Wait for one unit of time
}

void dash() {
  digitalWrite(LED_BUILTIN, LOW);  // Turn the LED on by making the voltage LOW
  delay(3*ONE_TIME_UNIT);          // Wait for three units of time  
}
  
void space(int ms) {
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED off by making the voltage HIGH
  delay(ms);                       // Delay for specified duration  
}

void f(){
dot();
space(ONE_TIME_UNIT);
dot();
space(ONE_TIME_UNIT);
dash();
space(ONE_TIME_UNIT);
dot();
}

void U(){ //..-
dot();
space(ONE_TIME_UNIT);
dot();
space(ONE_TIME_UNIT);
dash(); 
}

void N() { //-.
  dash();
  space(ONE_TIME_UNIT);
  dot();
  
}

void S(){
  dot();
  space(ONE_TIME_UNIT);
  dot();
  space(ONE_TIME_UNIT);
  dot();
}

void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}

// the loop function runs over and over again forever
void loop() {
  f();
  space(3*ONE_TIME_UNIT);
  U();
  space(3*ONE_TIME_UNIT);
  N();
  space(7*ONE_TIME_UNIT);
}

void A(){
  dot();
  space(ONE_TIME_UNIT);
  dash();
}

void B(){
  dash();
  space(ONE_TIME_UNIT);
  dot();
  space(ONE_TIME_UNIT);
  dot();
  space(ONE_TIME_UNIT);
  dot();
}

void C(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}

void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
void O(){
  dash();
  space(ONE_TIME_UNIT);
  dash();
  space(ONE_TIME_UNIT);
  dash();
}
