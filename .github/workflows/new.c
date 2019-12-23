#include<reg51.h> //Initialize the header file 
char b[8]="@sharuk#"; //Decalre the character which has to transmit
void main()
{
int i,j,k;
TMOD=0x20; //Initialize the timer in auto-reload mode.
TH1=0xFD; //Initialize the baud rate of 9600.
TL1=0xFD;
IE=0x90; //Initialize interrupt in serial communication mode.
SCON=0x50; //Initialize serial communication Enable
SBUF='S'; //start transmitting the data 
while(TI==0);//Untill TI is not equal to zero
TI=0; 
while(1) //Interrupt Enable
{
}
}
void isr(void) interrupt 4
{
if(TI==1)
{
SBUF=b[k];// Transmitted first Element in an array
while(TI==0);
TI=0'
if(k==7)
{
for(i=0;i<250;i++) //Delay of 500 mille-second for each transmission
{
for(j=0;j<250;j++)//Delay of 500 mille-second for each transmission
{
}
}
k=0; // Re-Initialize the transmission
}
else
{
k++;// Increament to the Next Element
}
}
}
