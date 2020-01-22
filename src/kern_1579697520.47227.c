#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(770, 470, "zeros");
	double *A = create_one_dim_double(340, "zeros");

	for (int c = 5; c < 339; c++)
	  for (int b = 5; b < 339; b++)
	    for (int a = 5; a < 339; a++)
	    {
	      
	      A[a]=A[a-4]/0.168;
	      
	      A[a]=A[a-5]*0.319;
	      
	      A[a]=A[a+1]*0.491;
	      
	      double var_a=A[a]/0.73;
	    }

    return 0;
}