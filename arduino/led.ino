int RED = 9;
int GREEN = 10;
int BLUE = 11;
int c;
boolean emergency = false;


void setup() {
  Serial.begin(9600);
  pinMode(RED,OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  while (Serial.available()){
    c = Serial.read();
    if(c == '0'){
      analogWrite(RED,255);
      analogWrite(GREEN,255);
      analogWrite(BLUE,255);
    }
    else if (c == '1'){
      analogWrite(RED,116);
      analogWrite(GREEN,255);
      analogWrite(BLUE,0);
    }
    else if (c == '2'){
      analogWrite(RED,0);
      analogWrite(GREEN,204);
      analogWrite(BLUE,102);
    }
    else if (c == '3'){
      analogWrite(RED,0);
      analogWrite(GREEN,255);
      analogWrite(BLUE,255);
    }
    else if (c == '4'){
      analogWrite(RED,255);
      analogWrite(GREEN,0);
      analogWrite(BLUE,255);
    }
    else if (c == '5'){
      analogWrite(RED,0);
      analogWrite(GREEN,128);
      analogWrite(BLUE,255);
    }
    else if (c == '6'){
      analogWrite(RED,0);
      analogWrite(GREEN,43);
      analogWrite(BLUE,255);
    }
    else if (c == '7'){
      analogWrite(RED,255);
      analogWrite(GREEN,255);
      analogWrite(BLUE,0);
    }
    else if (c == '8'){
      analogWrite(RED,0);
      analogWrite(GREEN,0);
      analogWrite(BLUE,0);
    }
     else if (c == '9'){
      emergency = true;
      analogWrite(RED,255);
      analogWrite(GREEN,255);
      analogWrite(BLUE,255);
      while(emergency){
      analogWrite(RED,0);
      analogWrite(GREEN,255);
      analogWrite(BLUE,255);
      delay(500);
      analogWrite(RED,255);
      analogWrite(GREEN,255);
      analogWrite(BLUE,255);
      delay(500);
      if (Serial.available()){
      c = Serial.read();
        if (c == '0' || c =='1' || c =='2' || c =='3' || c =='4' || c == '5' || c == '6' || c == '7' || c == '8'){
           emergency = false;
           analogWrite(RED,255);
           analogWrite(GREEN,255);
           analogWrite(BLUE,255);
           break;

        }
      }

  }

}
