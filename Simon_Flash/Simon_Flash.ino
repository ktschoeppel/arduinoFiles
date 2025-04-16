void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, INPUT);
pinMode(6, INPUT);
pinMode(7, INPUT);



}

void loop() { 
  
bool lose = false;

while(!lose){
  // put your main code here, to run repeatedly:
int code1 = random(0,2);//random number generated to give random color code
int code2 = random(0,2);
int code3 = random(0,2);


bool choice1; //initializing the player selection vars
bool choice2;
bool choice3;

int c1;
int c2;
int c3;

int i = 0;

if(code1=1){
  digitalWrite(2,HIGH);//turns on correct lights from code
}

if(code2=1){
  digitalWrite(3,HIGH);
}

if(code3=1){
  digitalWrite(4,HIGH);
}
delay(1000);

digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);//turns lights off after code is shown

while(){
choice1 = digitalRead(5,HIGH);
choice2 = digitalRead(6,HIGH);
choice3 = digitalRead(7,HIGH);
}


if(choice1){
  c1 = 1;
}

if(choice2){
  c2 = 1;
}

if(choice3){
  c3 = 1;
}

while(!choice1 || !choice2 || !choice3){
delay(1000);
i++;
if(i = 100){
  lose = true;
}
}

if(c1 == code1 && c2 == code2 && c3 == code3){
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(500);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(500);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(1000
  );
  code1 = random(0,2);
  code2 = random(0,2);
  code3 = random(0,2);

 /* delay(250);
  choice1 = digitalRead(5,HIGH);
  choice2 = digitalRead(6,HIGH);
  choice3 = digitalRead(7,HIGH); */
} else {
  lose = true;
}

if(lose){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(10000);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  
}
}
break;
}
