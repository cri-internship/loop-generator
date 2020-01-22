#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(830, 870, 170, "ones");
	float *A = create_one_dim_float(400, "ones");

	for (int b = 0; b < 869; b++)
	  for (int a = 5; a < 396; a++)
	  {
	    
	     A[a]=A[a-3]-B[a][b][a];
	    
	     A[a]=A[a-2]*B[a][b][a];
	    
	     B[a][b][a]=B[a+4][b+1][a+3]+0.537;
	  }

    return 0;
}