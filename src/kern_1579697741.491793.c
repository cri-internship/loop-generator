#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(830, "ones");
	float **A = create_two_dim_float(950, 180, "ones");

	for (int c = 2; c < 177; c++)
	  for (int b = 0; b < 830; b++)
	    for (int a = 0; a < 830; a++)
	    {
	      
	      A[a][b]=A[a][b-1]/0.177;
	      
	      A[a][b]=A[a][b-2]*0.028;
	      
	      B[a]=A[a][b];
	      B[a]=0.565;
	      
	      A[a][b]=A[a][b]*0.954;
	      B[a]=A[a+5][b+3]+0.347;
	    }

    return 0;
}