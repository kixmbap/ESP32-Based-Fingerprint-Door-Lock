void Ready() //กำหนดฟังชั้น
{
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); 
  lcd.print(".-----READY-----"); 
  lcd.setCursor(2, 1); 
  lcd.print(""); 
}
void NameID1()
{
  LINE.notify("             ");
}

void NameID2()
{
  LINE.notify("             ");
}

void NameID3()
{
  tone(buzzer,2000 );
  digitalWrite(LED_GREEN, HIGH); 
  delay(100);        
  noTone(buzzer);
  delay(100);     
  tone(buzzer,2000 ); 
  delay(100);
  noTone(buzzer);
  digitalWrite(RELAY, 0);
  digitalWrite(LED_GREEN, LOW);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); 
  lcd.print(".-----MATCH-----"); 
  lcd.setCursor(2, 1); 
  lcd.print("---Kru_Nath---");
  LINE.notify("ครูนาท สแกนนิ้วเปิดประตูห้อง TC02");
}

void NameID4()
{
  tone(buzzer,2000 );
  digitalWrite(LED_GREEN, HIGH); 
  delay(100);        
  noTone(buzzer);
  delay(100);     
  tone(buzzer,2000 ); 
  delay(100);
  noTone(buzzer);
  digitalWrite(RELAY, 0);
  digitalWrite(LED_GREEN, LOW);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); 
  lcd.print(".-----MATCH-----"); 
  lcd.setCursor(2, 1); 
  lcd.print("---Kru_Chat---");
  LINE.notify("ครูชัช สแกนนิ้วเปิดประตูห้อง TC02");
}

void NameID5()
{
  tone(buzzer,2000 );
  digitalWrite(LED_GREEN, HIGH); 
  delay(100);        
  noTone(buzzer);
  delay(100);     
  tone(buzzer,2000 ); 
  delay(100);
  noTone(buzzer);
  digitalWrite(RELAY, 0);
  digitalWrite(LED_GREEN, LOW);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); 
  lcd.print(".-----MATCH-----"); 
  lcd.setCursor(2, 1); 
  lcd.print("---Wirun---");
  LINE.notify("วิรัญ สแกนนิ้วเปิดประตูห้อง TC02");
}

void NameID6()
{
  tone(buzzer,2000 );
  digitalWrite(LED_GREEN, HIGH); 
  delay(100);        
  noTone(buzzer);
  delay(100);     
  tone(buzzer,2000 ); 
  delay(100);
  noTone(buzzer);
  digitalWrite(RELAY, 0);
  digitalWrite(LED_GREEN, LOW);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); 
  lcd.print(".-----MATCH-----"); 
  lcd.setCursor(2, 1); 
  lcd.print("--Kru_Benz1--");
  LINE.notify("ครูเบ้น_1 สแกนนิ้วเปิดประตูห้อง TC02");
}

void NameID7()
{
  tone(buzzer,2000 );
  digitalWrite(LED_GREEN, HIGH); 
  delay(100);        
  noTone(buzzer);
  delay(100);     
  tone(buzzer,2000 ); 
  delay(100);
  noTone(buzzer);
  digitalWrite(RELAY, 0);
  digitalWrite(LED_GREEN, LOW);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); 
  lcd.print(".-----MATCH-----"); 
  lcd.setCursor(2, 1); 
  lcd.print("Patcharaporn");
  LINE.notify("พัชรพร สแกนนิ้วเปิดประตูห้อง TC02");
}

void NameID8()
{
  tone(buzzer,2000 );
  digitalWrite(LED_GREEN, HIGH); 
  delay(100);        
  noTone(buzzer);
  delay(100);     
  tone(buzzer,2000 ); 
  delay(100);
  noTone(buzzer);
  digitalWrite(RELAY, 0);
  digitalWrite(LED_GREEN, LOW);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); 
  lcd.print(".-----MATCH-----"); 
  lcd.setCursor(2, 1); 
  lcd.print("---Peerapon---");
  LINE.notify("พีรพล สแกนนิ้วเปิดประตูห้อง TC02");
}

void NameID9()
{
  tone(buzzer,2000 );
  digitalWrite(LED_GREEN, HIGH); 
  delay(100);        
  noTone(buzzer);
  delay(100);     
  tone(buzzer,2000 ); 
  delay(100);
  noTone(buzzer);
  tone(buzzer,2000 );
  delay(100);
  noTone(buzzer);
  digitalWrite(RELAY, 0);
  digitalWrite(LED_GREEN, LOW);
  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0); 
  lcd.print(".-----MATCH-----"); 
  lcd.setCursor(2, 1); 
  lcd.print("-----Pawat-----");
  LINE.notify("ปวัฒน์ สแกนนิ้วเปิดประตูห้อง TC02");
}

void NameID10()
{
  LINE.notify("             ");
}
void NameID11()
{
  LINE.notify("             ");
}
void NameID12()
{
  LINE.notify("             ");
}
void NameID13()
{
  LINE.notify("             ");
}
void NameID14()
{
  LINE.notify("             ");
}
void NameID15()
{
  LINE.notify("             ");
}
void NameID16()
{
  LINE.notify("             ");
}
void NameID17()
{
  LINE.notify("             ");
}
void NameID18()
{
  LINE.notify("             ");
}
void NameID19()
{
  LINE.notify("             ");
}
void NameID20()
{
  LINE.notify("             ");
}
void NameID21()
{
  LINE.notify("             ");
}
void NameID22()
{
  LINE.notify("             ");
}
void NameID50()
{
  
}
