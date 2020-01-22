#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(860, "ones");
	double ***B = create_three_dim_double(940, 960, 430, "ones");

	for (int b = 1; b < 960; b++)
	  for (int a = 5; a < 855; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-1][a-4]/A[a];
	    
	     A[a]=A[a-4]/0.945;
	    
	     A[a]=A[a+5]*0.073;
	    
	     A[a]=A[a]+0.15;
	     B[a][b][a]=A[a-5]/B[a][b][a];
	  }

    return 0;
}