/* Test for the cheap hall sensor sold in Rajeev Elec. 
 *  Silkscreen Facing you says H 301
 *  PINS   ___
 *        | H |
 *        |301|
 *        -----
 *        / | \       10K PULLUP    
 *     VCC GND OUT----/\/\/\-----(VCC)
 * outputs high when sees magnetic field            
 * Output is open collector,Can we use internal pullup?
 * One side reacts to ONE pole only
 * -Malhar Deshmukh (http://whatdidIhack.wordpress.com) 
 * 
 * 
 */
void setup() {
 pinMode(A2,OUTPUT);
 pinMode(A1,OUTPUT);
 pinMode(A0,INPUT_PULLUP);
 digitalWrite(A2,HIGH);
 digitalWrite(A1,LOW);
 Serial.begin(9600);
 }

void loop() {
  Serial.println(digitalRead(A0));
}
