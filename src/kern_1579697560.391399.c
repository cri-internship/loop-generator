#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(470, 770, "ones");
	float *A = create_one_dim_float(600, "ones");

	for (int c = 5; c < 770; c++)
	  for (int b = 1; b < 470; b++)
	    for (int a = 1; a < 470; a++)
	    {
	      
	      A[a]=A[a+3]+B[a][b];
	      
	      A[a]=B[a][b];
	      
	      A[a]=B[a][b]*0.342;
	      B[a][b]=B[a-1][b-5]/A[a];
	    }

    return 0;
}