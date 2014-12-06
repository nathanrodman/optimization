#include <stdio.h>
#include <stdlib.h>

// You are only allowed to make changes to this code as specified by the comments in it.

// The code you submit must have these two values.
#define N_TIMES     600000
#define ARRAY_SIZE   10000

int main(void)
{
    double  *array = calloc(ARRAY_SIZE, sizeof(double));
    double  sum = 0;
    int     i;

    // You can add variables between this comment ...
	int		cap = ARRAY_SIZE - 25;
	register double *a;
    // ... and this one.

    // Please change 'your name' to your actual name.
    printf("CS201 - Asgmt 4 - Nathan Rodman\n");

    for (i = 0; i < N_TIMES; i++) {

        // You can change anything between this comment ...
		for(a = array; a < &array[cap]; a+=25)
		{
			sum += (*a + *(a+1)) + (*(a+2) + *(a+3)) + (*(a+4) + *(a+5)) + (*(a+6) + *(a+7)) + (*(a+8) + *(a+9)) + (*(a+10) +
					*(a+11)) + (*(a+12) + *(a+13)) + (*(a+14) + *(a+15)) + (*(a+16) + *(a+17)) + (*(a+18) + *(a+19)) +
					(*(a+20) + *(a+21)) + (*(a+22) + *(a+23)) + *(a+24);
		}

		for(; a < &array[ARRAY_SIZE]; a++)
		{
			sum += *a;
		}

        // ... and this one. But your inner loop must do the same
        // number of additions as this one does.

        }

    // You can add some final code between this comment ...
	free(array);	
	// ... and this one.


    return 0;
}
