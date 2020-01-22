#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(600, "random");
	float ***B = create_three_dim_float(580, 990, 640, "random");

	for (int b = 4; b < 990; b++)
	  for (int a = 5; a < 580; a++)
	  {
	    
	     A[a]=0.87;
	     A[a+2]=0.041;
	    
	     B[a][b][a]=A[a];
	     B[a-3][b-4][a-1]=A[a];
	    
	     B[a][b][a]=A[a];
	  }

    return 0;
}