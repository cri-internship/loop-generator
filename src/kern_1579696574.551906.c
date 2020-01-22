#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(760, 90, 50, "zeros");
	double **B = create_two_dim_double(60, 240, "zeros");
	double **A = create_two_dim_double(430, 380, "zeros");

	for (int c = 0; c < 46; c++)
	  for (int b = 1; b < 88; b++)
	    for (int a = 5; a < 430; a++)
	    {
	      
	      double var_a=C[a][b][c]/0.508;
	      double var_b=C[a+4][b+2][c+4]/0.236;
	      
	      double var_c=A[a][b]/0.443;
	      double var_d=A[a-5][b-1]*0.946;
	    }

    return 0;
}