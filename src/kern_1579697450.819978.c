#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(930, 30, "zeros");
	double *C = create_one_dim_double(760, "zeros");
	double **B = create_two_dim_double(600, 520, "zeros");

	for (int d = 0; d < 27; d++)
	  for (int c = 0; c < 925; c++)
	    for (int b = 0; b < 925; b++)
	      for (int a = 0; a < 925; a++)
	      {
	        
	       A[a][b]=0.334;
	       A[a+5][b+3]=0.117;
	      }

    return 0;
}