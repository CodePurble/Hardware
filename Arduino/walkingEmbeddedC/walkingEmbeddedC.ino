#include <avr/io.h>

int main()
{
  DDRD |= 0xE0; // Pins D4, D6, D7 are output pins

  while(1){
    PORTD |= 0x80;
    _delay_ms(200);

    PORTD >>= 1; // "Walk"
    _delay_ms(200);

    PORTD >>= 1;
    _delay_ms(200);
    PORTD &= 0x00; // Turn everything off and start again
  }
  
  return 0;
}
