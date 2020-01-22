#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(450, 390, "random");
	float *B = create_one_dim_float(740, "random");
	float **A = create_two_dim_float(50, 550, "random");
	float **D = create_two_dim_float(490, 40, "random");

	for (int c = 0; c < 36; c++)
	  for (int b = 1; b < 489; b++)
	    for (int a = 1; a < 489; a++)
	    {
	      
	      B[a]=B[a-1]/D[a][b]*C[a][b];
	      
	      D[a][b]=A[a][b]/B[a];
	      D[a+1][b+4]=A[a][b]-B[a]*C[a][b];
	    }

    return 0;
}