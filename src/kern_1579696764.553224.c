#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(940, 120, "ones");
	double **B = create_two_dim_double(10, 630, "ones");
	double *C = create_one_dim_double(110, "ones");

	for (int d = 0; d < 630; d++)
	  for (int c = 0; c < 9; c++)
	    for (int b = 0; b < 9; b++)
	      for (int a = 0; a < 9; a++)
	      {
	        
	       B[a][b]=0.781;
	       B[a+1][b]=0.996;
	      }

    return 0;
}