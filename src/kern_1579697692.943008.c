#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(990, "zeros");
	float ***B = create_three_dim_float(170, 960, 640, "zeros");

	for (int b = 1; b < 960; b++)
	  for (int a = 5; a < 170; a++)
	  {
	    
	     A[a]=A[a-5]-0.281;
	    
	     B[a][b][a]=B[a-5][b-1][a-3]+A[a];
	    
	     A[a]=A[a+5]*0.593;
	    
	     B[a][b][a]=A[a];
	  }

    return 0;
}