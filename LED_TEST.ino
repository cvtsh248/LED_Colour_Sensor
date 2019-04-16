int red = A0;
int green = A1;
int blue = A2; 
//red, 235; green, 260; blue, 330; must be calibrated, but these value worked for me. see readme for calibration instructions.
void setup() {
  Serial.begin(9600);
}

int average_led_reading(int pin){
  long avg = 0;
  for(int i = 0; i < 500; i++){
    avg += analogRead(pin);
  }
  return avg/500;
}
void loop() {
  float r = float(average_led_reading(red));
  float g = float(average_led_reading(green));
  float b = float(average_led_reading(blue));
  float rel_r = (r/235)*255;
  float rel_g = (g/260)*255;
  float rel_b = (b/330)*255;
  //Serial.println((String)"r:"+int(round(r))+" g:"+int(round(g))+" b:"+int(round(b)));
  Serial.println((String)"r:"+int(round(rel_r))+" g:"+int(round(rel_g))+" b:"+int(round(rel_b)));
  Serial.println('\n');
  delay(1000);
  
}
