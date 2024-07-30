#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	// set port B5 as an output
	DDRB = DDRB | (1 << DDB5);
	// forever loop
	while(1) {
		// set PORTB5
		PORTB = PORTB | (1 << PORTB5);
		// wait
		_delay_ms(5000);
		// unset PORTB5
		PORTB = PORTB & ~(1 << PORTB5);
		// wait
		_delay_ms(5000);
	}
}