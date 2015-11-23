#ifndef SERIAL_H_
#define SERIAL_H_

#include <avr/sfr_defs.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/cpufunc.h>

// Sets up serial IO
// Called once at program start
void ConfigureUART();

// Read a byte from the serial port
// Will block if the input buffer is empty
unsigned char ReadSerialData();

// Write a byte to the serial port
// Will block if the output buffer is full
void WriteSerialData(unsigned char data);

#endif /* SERIAL_H_ */