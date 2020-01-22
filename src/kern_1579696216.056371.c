#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(600, 410, "zeros");
	float ***A = create_three_dim_float(30, 940, 170, "zeros");
	float *B = create_one_dim_float(430, "zeros");

	for (int c = 1; c < 430; c++)
	  for (int b = 1; b < 430; b++)
	    for (int a = 1; a < 430; a++)
	    {
	      
	      B[a]=B[a-1]+0.223;
	    }

    return 0;
}