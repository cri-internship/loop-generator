#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(200, 860, 110, "ones");
	float *A = create_one_dim_float(270, "ones");
	float ***C = create_three_dim_float(130, 650, 470, "ones");
	float ***B = create_three_dim_float(350, 650, 180, "ones");

	for (int b = 1; b < 650; b++)
	  for (int a = 2; a < 130; a++)
	  {
	    
	     A[a]=A[a+5]+0.094;
	    
	     A[a]=0.0;
	    
	     C[a][b][a]=0.462;
	     C[a][b-1][a]=0.509;
	  }

    return 0;
}