#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(20, 970, "ones");
	double **C = create_two_dim_double(310, 820, "ones");
	double *B = create_one_dim_double(90, "ones");
	double *E = create_one_dim_double(230, "ones");
	double **A = create_two_dim_double(690, 430, "ones");

	for (int d = 3; d < 970; d++)
	  for (int c = 0; c < 20; c++)
	    for (int b = 0; b < 20; b++)
	      for (int a = 0; a < 20; a++)
	      {
	        
	       double var_a=D[a][b]+0.142;
	       double var_b=D[a][b-3]*0.659;
	      }

    return 0;
}