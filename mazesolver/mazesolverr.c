#include<reg52.h>  //we need to include that header file for that particular microcontroller
#include<stdio.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define stop 0x00;
#define rev 0x05;
unsigned int a; //no need for the signs
void delay(unsigned int t)
{
int i,j;
for(i=0;i<t;i++) //when we delay (50) , 50 m sec it will give
{
for(j=0;j<1275;j++);
}}
void main()
{
while(1) //infinite loop
{
a=P1&&0x0F; //P1 is declared already under reg52 header file  0x03 is the masking value
if(a==0x00)//end/intersection
{
P2=rev;
delay(50);
	P2=lt;
	if((0x0D)||(0x0B))
	{
		P2=rev;
		delay(50);
		P2=lt;
	}
	
	else if(0x0F)
	{P2=rev;
		delay(50);
		P2=lt;
	}
else if(0x00)
	{P2=stop;}
	}
if(a==0x0F)//dead end
{
P2=lt;
}

if((a==0x01)||(a==0x03)||(a==0x07))
	{
P2=lt;
		
		
}
if((a==0x08)||(a==0x0C)||(a==0x0E))
{
	P2=st;
	delay(50);
	if((0x0D)||(0x0B))
	{
		
		P2=st;
	}
else if(0x0F)
P2=rt;
}
if((0x0D)||(0x0B)||(0x09))
	{
		P2=st;
	}}}


