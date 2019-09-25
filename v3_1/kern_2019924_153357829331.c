#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(40, 150, 80, "random");
	float *A = create_one_dim_float(100, "random");
	float **B = create_two_dim_float(50, 50, "random");

	for (int c = 48; c < 48; c++)
	  for (int b = 0; b < 47; b++)
	    for (int a = 0; a < 47; a++)
	    {
	      
	      A[a+50]=B[a][b];
	      B[a][b]=A[a+50]*A[a+48]*C[a][b][c];
	      
	      B[a+3][b+2]=B[a+3][b-48]+A[a]/0.049;
	    }

    return 0;
}