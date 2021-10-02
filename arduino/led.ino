int RED = 9;
int GREEN = 10;
int BLUE = 11;
int c;


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

  }

}
