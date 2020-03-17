#include "CH552.H"

unsigned int i=0;

#if 0
/* red */
sbit  LED1 = P3^3;

/* green */
sbit  LED2 = P3^4;

#else

sbit  LED1 = P3^2;
sbit  LED2 = P1^4;

#endif

void delay_long()
{
	unsigned int i = 10000000;
	unsigned int x = 5;
	while(x --) {
		while(i--);
	}
	
	
}

void delay_short()
{
	unsigned int i = 10000000;
	unsigned int x = 2;
	while(x --) {
		while(i--);
	}
	
}

main()
{
		unsigned int x;
		LED1=0;
		LED2=0;
	  //while(1);
	
    while(1)
    {
			//LED1=!LED1;
			
			/* SOS */
			
			for (x = 0; x < 3; x++) {
				LED2 = 1;
				delay_short();
				LED2 = 0;
				delay_short();
			}
			
			for (x = 0; x < 3; x++) {
				LED1 = 1;
				delay_long();
				LED1 = 0;
				delay_long();
			}
			
			for (x = 0; x < 3; x++) {
				LED2 = 1;
				delay_short();
				LED2 = 0;
				delay_short();
			}
			
			for(x = 0; x < 10; x++) {
				delay_long();
			}
			
    }
}