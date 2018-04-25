#include<reg52.h>  //we need to include that header file for that particular microcontroller
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;
unsigned int a; //no need for the signs
void main()
{
while(1) //infinite loop
{
a=P1&0x03; //P1 is declared already under reg52 header file  0x03 is the masking value
if(a==0x01)
{
P2=rt; //p2 is also defined under the header file and the motors are connected to port 2
}
if(a==0x02)
{
P2=lt;
}
if(a==0x03)
{
P2=st;
}
if(a==0x00)
{
P2=stop;
}}}

