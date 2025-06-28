#include <Keypad.h>
#include <RH_ASK.h>
// Include dependant SPI Library 
#include <SPI.h> 
const int ROWS=4;
//we declared a variable, "ROWS" of "conts int" and store "4" as we have 4 rows in keypad
const int COLS=4;
//we declared a variable, "COLS" of "conts int" and store "4" as we have 4 columns in keypad/
char keys[ROWS][COLS] = 
{
  {'1','2','3', 'A'},
  {'4','5','6', 'B'},
  {'7','8','9', 'C'},
  {'*','0','#', 'D'}
}; //declared an char data type array, "keys", and store the characters of keypad keys

byte pinToRows[ROWS]={2, 3, 4, 5};
//connect to the row pinouts of the keypad with Arduino digital I/O pins
byte pinToColumn[COLS]={6, 7, 8, 9};
//connect to the column pinouts of the keypad with Arduino digital I/O pins
Keypad keypad=Keypad(makeKeymap(keys),pinToRows,pinToColumn,ROWS,COLS);
//use the built-in function of makeKeymap() and map the values of rows and columns to the pins of Arduino

RH_ASK rf_driver;
void setup(){
  Serial.begin(9600);
   rf_driver.init();
}

void loop() {
char key=keypad.getKey(); //with the help of getkey() reads the input from the buttons
if(key){
Serial.println(key);


}
switch(key)
{
  case '1':
  const char *msg = "Caesar Salad";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='2')
{
  const char *msg = "Bite-size Sandwich";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='3')
{
  const char *msg = "Mini Taco Quiches";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='4')
{
  const char *msg = "Pot Lemon Quinoa";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='5')
{
  const char *msg = "Spicy Lahori Paneer";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='6')
{
  const char *msg = "Bhindi with Butter Naan";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='7')
{
  const char *msg = "Chocolate Mousse";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}

if(key=='8')
{
  const char *msg = "Angel Food Cake";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='9')
{
  const char *msg = "Almond and Date Cake";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='0')
{
  const char *msg = "Choose between
  3 1-9";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='C')
{
  const char *msg = "Table Clean";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='A')
{
  const char *msg = "Parcel";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}

if(key=='D')
{
  const char *msg = "Waiter";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='B')
{
  const char *msg = "Bill";
    rf_driver.send((uint8_t *)msg, strlen(msg));
    rf_driver.waitPacketSent();
    delay(1000);
}
if(key=='*' || '#')
{
  Serial.print("Order cancelled");
 
}
}