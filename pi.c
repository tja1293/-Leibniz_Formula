#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// to run.................. gcc text.c...................... ( ./a.out   )

void main()
{

	int i;
	int num;
	float pi;
	float eqTop; 
	float eqBottom;
	float sum = 0;
	float mainEq;
	
	printf("Enter number of itterations: \n"); // getting user input.
	scanf("%d", &num);
	
	for (i=0; i<num; i++) // itterating from 0 to number of intterations input.
	{
		eqTop = pow(-1,i); // calculating the numberator of the equation.
		eqBottom = (2*i+1); // calculating the denominator of the equation.
		mainEq = eqTop / eqBottom; // top divided by the bottom.
		sum += mainEq; 
	}
	
	pi = 4 * sum;
	printf("Pi = %f\n", pi);


}



