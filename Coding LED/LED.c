#include <mega16.h>
#include <delay.h>
int geser=1;//merupakan Variable untuk menggerakkan LED [Declare your global variables here]

void main(void)
{
PORTB=0x00;
DDRB=0xff; // Register PORTB sebagai     Output
while (1)
{
if(geser<0)
{
geser=0x01;
}
delay_ms(35); //20[Milisicond]: jeda waktu untuk Pergerakan LED
PORTB=geser;
geser<<=1; //Melakukan Register
};
}