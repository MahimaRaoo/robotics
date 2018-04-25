#include <stdio.h>
#include <reg52.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
//#define rev 0x05;
//#define stop 0x00;
/*void delay(unsigned int t)
{
int i,j;
for(i=0;i<t;i++)
{
for(j=0;j<1275;j++)
	{}
}}
*/
void main()
{
unsigned int a;
	
while(1)
{
a=P1&0x07;
if((a==0x04)||(a==0x05))
{
P2=st;
}

if((a==0x01)||(a==0x02)||(a==0x03))
{

while(a!=0x05)
{
P2=lt;
	
	a=P1&0x07;
}


}


if(a==0x07)
{ 

	while(a!=0x05)
{
P2=lt;
	
	a=P1&0x07;
}

}

	
	
	if(a==0x06)
{


while(a!=0x05)
{
P2=rt;

	a=P1&0x07;
}

}
}}



