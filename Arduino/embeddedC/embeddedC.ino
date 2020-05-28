#include <avr/io.h>

int main()
{
  DDRB |= 0x20; // ~ LPC_GPIO0->DIR O/P pin
  while(1){
    if(PINB & (1 << PB2)){
      _delay_ms(1000);
      PORTB ^= (1 << PB5);
    }
  }
}
