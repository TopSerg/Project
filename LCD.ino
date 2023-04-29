#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F,16,2);   // Устанавливаем дисплей
int a = 0;
int a1 = 0;
int b = 0;
int b1 = 0;
int c = 0;
int c1 = 0;

void setup()
{
  lcd.init();                     
  lcd.backlight();// Включаем подсветку дисплея
  lcd.setCursor(0,0);
  lcd.print("Hello World");
  lcd.setCursor(0,0);
  lcd.print("                ");
  Serial.begin(9600);
}
void loop()
{
    lcd.print("Hi!");
    delay(5000);
    lcd.setCursor(0,0);
    lcd.print("                ");
    lcd.setCursor(0,0);
    lcd.print("Happy Birtsday!");
    delay(5000);
    lcd.setCursor(0,0);
    lcd.print("                ");
    lcd.setCursor(0,0);
}
  /*CALC();
  if (c1!=c)
  {
    lcd.setCursor(0,0);
    lcd.print("                ");
  }
  c1=c;
  lcd.setCursor(0,0);
  if (a1 == -3)
  {
  lcd.print(a);
  lcd.print(" - ");
  lcd.print(b);
  lcd.print(" = ");
  lcd.print(c);
  }
  if (a1 == -5)
  {
  lcd.print(a);
  lcd.print(" + ");
  lcd.print(b);
  lcd.print(" = ");
  lcd.print(c);
  }
  if (a1 == -6)
  {
  lcd.print(a);
  lcd.print(" * ");
  lcd.print(b);
  lcd.print(" = ");
  lcd.print(c);
  }
  if (a1 == -1)
  {
  lcd.print(a);
  lcd.print(" / ");
  lcd.print(b);
  lcd.print(" = ");
  lcd.print(c);
  }
}

void CALC()
{
  a=0;
  b=0;
  a1 = 0;
  b1 = 0;
  while ((a1!=-5)&&(a1!=-3)&&(a1!=-6)&&(a1!=-1))
  {
    if (Serial.available() > 0) {
      a1 = 0;
        a1 = Serial.read() - 48;
        if ((a1!=-5)&&(a1!=-3)&&(a1!=-6)&&(a1!=-1)){
        a = a*10 + a1;
        }
    }
  }
  while (b1!=13)
  {
    if (Serial.available() > 0) {
      b1 = 0;
        b1 = Serial.read()-48;
        if (b1 != 13){
        b = b*10 + b1;
        }
    }
  }
  if (a1 == -3)
  {
        c = a - b;
        delay(1000);
  }
  if (a1 == -5)
  {
        c = a + b;
        delay(1000);
  }
  if (a1 == -6)
  {
        c = a * b;
        delay(1000);
  }
  if (a1 == -1)
  {
        c = a / b;
        delay(1000);
  }
}*/
