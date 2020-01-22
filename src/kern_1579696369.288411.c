#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(740, 810, "ones");

	for (int c = 5; c < 806; c++)
	  for (int b = 2; b < 740; b++)
	    for (int a = 2; a < 740; a++)
	    {
	      
	      A[a][b]=0.189;
	      float  var_a=A[a][b]-0.538;
	      
	      A[a][b]=A[a][b+4]/0.616;
	    }

    return 0;
}