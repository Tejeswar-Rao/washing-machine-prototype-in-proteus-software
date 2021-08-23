#include<LiquidCrystal.h>
LiquidCrystal lcd (12,11,5,4,3,2);
#define m1 6
#define m2 7
#define ms1 9
#define ms2 10
int Led1 = A0;
int Led2 = A1;
int b1 = 8,b=0;
void setup() {
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.println("WELCOME TO");
  lcd.setCursor(0,1);
  lcd.print("WASHING MACHINE");
  delay(1000);
  lcd.clear();
}

void loop() {
  b=digitalRead(b1);
  if (b==LOW){
    digitalWrite(A0 ,LOW);
    delay(2000);
  }
  else{
    lcd.clear();
    digitalWrite(A0,HIGH);
    delay(1000); 
    digitalWrite(A0 ,LOW);
    lcd.setCursor(0,0);
    lcd.println("WASHING MACHINE");
    lcd.setCursor(0,1);
    lcd.println("TURNED ON");
    delay(2000);
    lcd.clear();
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    lcd.println("TAKING WATER");
    delay(2000);
    lcd.clear();
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(ms1,HIGH);
    digitalWrite(ms2,LOW);
//    lcd.clear();
    lcd.println("SPINNING MODE");
    delay(2000);
    lcd.clear();
    lcd.println("DRYING");
    delay(1000);
    digitalWrite(ms1,LOW);
    digitalWrite(ms2,HIGH);
    delay(2000);
    digitalWrite(ms2,LOW);
    
    
    lcd.clear();
    lcd.println("DONE");
    delay(2000);
    lcd.clear();
    digitalWrite(A1, HIGH);
    delay(2000);
    digitalWrite(A1 ,LOW);
    lcd.clear();

  }
}
