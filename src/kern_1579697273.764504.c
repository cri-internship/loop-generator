#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(680, 220, "random");
	double **B = create_two_dim_double(990, 970, "random");
	double **D = create_two_dim_double(560, 120, "random");
	double **A = create_two_dim_double(10, 740, "random");

	for (int d = 0; d < 215; d++)
	  for (int c = 0; c < 677; c++)
	    for (int b = 0; b < 677; b++)
	      for (int a = 0; a < 677; a++)
	      {
	        
	       double var_a=C[a][b]*0.88;
	       double var_b=C[a+3][b+5]+0.417;
	      }

    return 0;
}