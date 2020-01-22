#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(720, 950, "random");
	double **B = create_two_dim_double(890, 50, "random");

	for (int c = 1; c < 50; c++)
	  for (int b = 1; b < 720; b++)
	    for (int a = 1; a < 720; a++)
	    {
	      
	      B[a][b]=0.006;
	      B[a+3][b]=0.659;
	      
	      double var_a=A[a][b]+0.578;
	      double var_b=A[a-1][b-1]+0.142;
	    }

    return 0;
}