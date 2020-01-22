#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(660, 50, "zeros");
	double **B = create_two_dim_double(840, 160, "zeros");
	double *C = create_one_dim_double(210, "zeros");
	double **D = create_two_dim_double(50, 870, "zeros");
	double **A = create_two_dim_double(310, 170, "zeros");

	for (int d = 0; d < 866; d++)
	  for (int c = 5; c < 48; c++)
	    for (int b = 5; b < 48; b++)
	      for (int a = 5; a < 48; a++)
	      {
	        
	       D[a][b]=D[a+2][b+4]-0.495;
	        
	       double var_a=C[a]/0.068;
	       double var_b=C[a-5]/0.706;
	      }

    return 0;
}