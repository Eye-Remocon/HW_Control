int RED = 11;
int GREEN = 10;
int BLUE = 9;
String incoming = "";


void setup() {
  Serial.begin(9600);
  pinMode(RED,OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  while (Serial.available()>0){
    char c = Serial.read();
    if (c == 1){
      analogWrite(11,100);
      analogWrite(10,0);
      analogWrite(9,255);
    }
    else if (c == 2){
      analogWrite(11,255);
      analogWrite(10,192);
      analogWrite(9,203);
    }
    else if (c == 3){
      analogWrite(11,255);
      analogWrite(10,0);
      analogWrite(9,0);
    }
    else if (c == 4){
      analogWrite(11,0);
      analogWrite(10,255);
      analogWrite(9,0);
    }
    else if (c == 5){
      analogWrite(11,255);
      analogWrite(10,50);
      analogWrite(9,0);
    }
    else if (c == 6){
      analogWrite(11,255);
      analogWrite(10,255);
      analogWrite(9,0);
    }
    else if (c == 7){
      analogWrite(11,0);
      analogWrite(10,0);
      analogWrite(9,255);
    }
    else if (c == 8){
      analogWrite(11,255);
      analogWrite(10,255);
      analogWrite(9,255);
    }

  }
}
