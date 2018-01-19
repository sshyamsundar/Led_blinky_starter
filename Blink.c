#include <avr/io.h>
#include <util/delay.h>

int main()
{
	DDRB |= _BV(DDB5)
	for(;;)
	{
		PORTB |= _BV(PORTB5)
		_delay_ms(1000)
		PORTB &= ~_BV(PORTB5)
		_delay_ms(1000)
		PORTB |= _BV(PORTB5)
	}
	return 0;
}
