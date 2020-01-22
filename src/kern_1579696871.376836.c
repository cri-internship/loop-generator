#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(550, 490, "random");
	double *C = create_one_dim_double(940, "random");
	double **A = create_two_dim_double(960, 750, "random");

	for (int c = 0; c < 485; c++)
	  for (int b = 0; b < 548; b++)
	    for (int a = 0; a < 548; a++)
	    {
	      
	      A[a][b]=0.777;
	      A[a+3][b+3]=0.584;
	      
	      double var_a=B[a][b]+0.685;
	      double var_b=B[a+2][b+5]+0.81;
	      
	      double var_c=B[a][b]*0.102;
	      double var_d=B[a][b+1]+0.498;
	    }

    return 0;
}