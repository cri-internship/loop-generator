#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "ones");
	double ***B = create_three_dim_double(310, 20, 450, "ones");

	for (int b = 2; b < 20; b++)
	  for (int a = 4; a < 310; a++)
	  {
	    
	     B[a][b][a]=B[a-4][b-2][a]/0.071;
	    
	     A[a]=A[a+1]+B[a][b][a];
	    
	     B[a][b][a]=A[a]-B[a][b][a];
	     A[a]=A[a-3]+B[a][b][a];
	  }

    return 0;
}