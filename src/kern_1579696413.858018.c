#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(260, 810, "random");
	float ***A = create_three_dim_float(170, 400, 940, "random");
	float *B = create_one_dim_float(300, "random");

	for (int b = 0; b < 398; b++)
	  for (int a = 4; a < 165; a++)
	  {
	    
	     B[a]=A[a][b][a];
	     B[a-4]=C[a][b];
	    
	     float var_a=A[a][b][a]+0.581;
	     float var_b=A[a+5][b+2][a+1]/0.434;
	    
	     B[a]=B[a]*C[a][b]/0.425;
	     C[a][b]=B[a-2]-C[a][b];
	  }

    return 0;
}