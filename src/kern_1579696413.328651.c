#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(370, "zeros");
	double ***B = create_three_dim_double(690, 810, 410, "zeros");
	double *C = create_one_dim_double(640, "zeros");

	for (int c = 0; c < 640; c++)
	  for (int b = 0; b < 640; b++)
	    for (int a = 0; a < 640; a++)
	    {
	      
	      double var_a=C[a]/0.22;
	      double var_b=C[a]*0.176;
	    }

    return 0;
}