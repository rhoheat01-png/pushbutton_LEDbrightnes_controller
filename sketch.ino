int push1=12;
int push2=13;
int redLED=3;
int led=0;
int button1;
int button2;



void setup() {
 pinMode(push1,INPUT);
 pinMode(push2,INPUT);
 pinMode(redLED,OUTPUT);
 Serial.begin(9600);  
}

void loop() {
  button1=digitalRead(push1);
  button2=digitalRead(push2);
  Serial.print(button1);
  Serial.println(button2);
  delay(1000);

  if(button1==0){
    led=led+50;
  }
  if(button2==0){
    led=led-50;
  }
  if(led>255){
    led=255;
  }
  if(led<0){
    led=0;
  }

  analogWrite(redLED,led);
}
