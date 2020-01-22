#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(490, "zeros");
	double *B = create_one_dim_double(490, "zeros");
	double **A = create_two_dim_double(700, 290, "zeros");

	for (int d = 4; d < 490; d++)
	  for (int c = 4; c < 490; c++)
	    for (int b = 4; b < 490; b++)
	      for (int a = 4; a < 490; a++)
	      {
	        
	       B[a]=0.932;
	       B[a-4]=0.179;
	      }

    return 0;
}