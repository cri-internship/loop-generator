#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(940, 800, "random");
	double *A = create_one_dim_double(600, "random");
	double **C = create_two_dim_double(540, 90, "random");

	for (int d = 0; d < 85; d++)
	  for (int c = 0; c < 535; c++)
	    for (int b = 0; b < 535; b++)
	      for (int a = 0; a < 535; a++)
	      {
	        
	       C[a][b]=C[a+5][b+2]+0.694;
	        
	       C[a][b]=0.554;
	      }

    return 0;
}