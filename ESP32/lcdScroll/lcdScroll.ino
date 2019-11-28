#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int screenWidth = 16;
int screenHeight = 2;

String line1;
String line2;

int stringStart, stringStop = 0;
int scrollCursor = screenWidth;

String CompleteString;
String stringArray[] = {"s=Plane", "i=Car", "h=Boat", "u=Rocket", "d=Jet", "p=Submarine", "l=Truck", "b=Bicycle", "m=Skate", "enter=Train"};
String string1 = "String";
boolean ArrayRead = true;
int countMovement=0;
int arraylimit = 9;

// most of the part is pretty basic
void setup() {

   lcd.begin(screenWidth,screenHeight);
   Serial.begin(9600);

}

delay(12);

void loop(){

   char ser = Serial.read();

   if ( ser == 'c' ) {  
      CompleteString="";

      for (int i = 0 ; i <= arraylimit; i++) {
         CompleteString += stringArray[i] + " "; // Convert String Array To Single String
      }

      roop(string1,CompleteString);
   }

}

void roop(String line1, String line2) {

   countMovement = 0;
   stringStart = 0;
   stringStop = 0;
   scrollCursor = screenWidth;

   while ( ( countMovement ) < (line2.length() + screenWidth )  ) {

      lcd.clear();
      lcd.setCursor(scrollCursor, 1);
      lcd.print(line2.substring(stringStart,stringStop));
      lcd.setCursor(5, 0); // 1 = word eat array of words very cool
      lcd.print(line1);
      delay(300);
      lcd.clear();
      if(stringStart == 0 && scrollCursor > 0){     
         scrollCursor--;
         stringStop++;
      } else if (stringStart == stringStop){
         stringStart = stringStop = 0;
         scrollCursor = screenWidth;
      } else if (stringStop == line1.length() && scrollCursor == 0) {
         stringStart++;
      } else {
         stringStart++;
         stringStop++;
      }

      countMovement++;

   }

   lcd.setCursor(4, 0);
   lcd.print(line1);

}