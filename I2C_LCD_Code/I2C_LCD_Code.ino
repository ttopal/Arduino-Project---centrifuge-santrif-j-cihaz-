/*
   Arduino LCD I2C Tutorial by 'Tronics Lk"
   Please visit my YouTube channel from this link for more Tutorials
   https://www.youtube.com/channel/UCYJa3gs8q49-N3TLm-7ygUw?sub_confirmation=1
*/
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();         // initialize the lcd
  lcd.backlight();    // Turn on the LCD screen backlight

  lcd.setCursor(5, 0);
  lcd.print("Merhaba");
  lcd.setCursor(3, 1);
  lcd.print("Tarik TANIR");
  delay(3000);
  lcd.clear();

  lcd.setCursor(4, 0);
  lcd.print("Santrifuj");
  lcd.setCursor(1, 1);
  lcd.print("Bitirme Projesi");
  delay(3000);
  lcd.clear();

  lcd.setCursor(4, 0);
  lcd.print("Santrifuj");
  lcd.setCursor(0, 1);
  lcd.print("Bir tusa basiniz");
}

void loop()
{
    
}
