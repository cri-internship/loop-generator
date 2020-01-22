#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(800, "ones");
	float **A = create_two_dim_float(860, 680, "ones");

	for (int c = 5; c < 680; c++)
	  for (int b = 5; b < 799; b++)
	    for (int a = 5; a < 799; a++)
	    {
	      
	      A[a][b]=A[a-5][b-5]*0.961;
	      
	      B[a]=0.306;
	      B[a+1]=0.017;
	    }

    return 0;
}