#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(60, "zeros");
	double *B = create_one_dim_double(630, "zeros");
	double ***A = create_three_dim_double(810, 10, 880, "zeros");

	for (int c = 4; c < 55; c++)
	  for (int b = 4; b < 55; b++)
	    for (int a = 4; a < 55; a++)
	    {
	      
	      C[a]=C[a-4]/0.29;
	      
	      C[a]=C[a+5]+0.339;
	    }

    return 0;
}