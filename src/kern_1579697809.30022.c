#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(270, 450, 960, "zeros");
	double *A = create_one_dim_double(50, "zeros");
	double ***C = create_three_dim_double(850, 430, 860, "zeros");

	for (int b = 2; b < 450; b++)
	  for (int a = 1; a < 50; a++)
	  {
	    
	     A[a]=A[a-1]/0.179;
	    
	     B[a][b][a]=B[a-1][b-2][a-1]/0.526;
	    
	     A[a]=B[a][b][a];
	  }

    return 0;
}