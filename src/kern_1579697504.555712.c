#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(810, 1000, 700, "ones");
	float *C = create_one_dim_float(450, "ones");
	float ***A = create_three_dim_float(310, 270, 800, "ones");
	float **D = create_two_dim_float(150, 190, "ones");
	float **E = create_two_dim_float(970, 200, "ones");

	for (int b = 3; b < 188; b++)
	  for (int a = 5; a < 149; a++)
	  {
	    
	     D[a][b]=D[a+1][b+2]-0.095;
	    
	     E[a][b]=E[a+1][b]-0.1;
	    
	     E[a][b]=0.348;
	    
	     B[a][b][a]=D[a][b]-E[a][b]/C[a];
	     D[a][b]=D[a-1][b-1]*A[a][b][a]/0.089+E[a][b]-B[a][b][a];
	    
	     float var_a=C[a]+0.145;
	     float var_b=C[a+4]+0.761;
	  }

    return 0;
}