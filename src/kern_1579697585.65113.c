#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(400, 260, 760, "ones");
	float *B = create_one_dim_float(1000, "ones");
	float ***D = create_three_dim_float(490, 840, 940, "ones");
	float **C = create_two_dim_float(420, 220, "ones");

	for (int b = 0; b < 219; b++)
	  for (int a = 0; a < 395; a++)
	  {
	    
	     A[a][b][a]=A[a+5][b][a+5]*D[a][b][a];
	    
	     C[a][b]=A[a][b][a];
	     C[a][b+1]=B[a];
	  }

    return 0;
}