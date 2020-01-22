#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(860, "zeros");
	double *B = create_one_dim_double(390, "zeros");

	for (int d = 3; d < 390; d++)
	  for (int c = 3; c < 390; c++)
	    for (int b = 3; b < 390; b++)
	      for (int a = 3; a < 390; a++)
	      {
	        
	       B[a]=0.681;
	       B[a-3]=0.312;
	      }

    return 0;
}