#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(560, "random");
	double *C = create_one_dim_double(550, "random");
	double *A = create_one_dim_double(630, "random");

	for (int c = 4; c < 550; c++)
	  for (int b = 4; b < 550; b++)
	    for (int a = 4; a < 550; a++)
	    {
	      
	      B[a]=B[a-2]+C[a];
	      
	      B[a]=B[a-4]*0.572;
	      
	      A[a]=A[a-1]+0.305;
	      
	      C[a]=C[a-4]/0.522;
	      
	      A[a]=A[a+3]*0.837;
	      
	      B[a]=0.717+A[a];
	    }

    return 0;
}