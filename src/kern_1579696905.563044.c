#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(590, "random");
	double *B = create_one_dim_double(110, "random");

	for (int c = 2; c < 110; c++)
	  for (int b = 2; b < 110; b++)
	    for (int a = 2; a < 110; a++)
	    {
	      
	      A[a]=A[a+2]-B[a];
	      
	      B[a]=0.585;
	      B[a-2]=0.682;
	      
	      B[a]=A[a]+B[a];
	      A[a]=A[a+3]*B[a];
	    }

    return 0;
}