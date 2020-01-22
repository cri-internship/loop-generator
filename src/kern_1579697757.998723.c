#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(440, "random");
	float ***A = create_three_dim_float(600, 60, 820, "random");
	float **C = create_two_dim_float(770, 340, "random");
	float *B = create_one_dim_float(280, "random");

	for (int b = 3; b < 60; b++)
	  for (int a = 4; a < 438; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-3][a]+C[a][b];
	    
	     D[a]=D[a+2]+0.06;
	    
	     D[a]=A[a][b][a]-B[a];
	    
	     A[a][b][a]=D[a]+D[a];
	  }

    return 0;
}