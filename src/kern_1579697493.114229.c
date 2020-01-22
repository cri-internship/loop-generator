#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(530, 550, 760, "random");
	float ***C = create_three_dim_float(920, 740, 100, "random");
	float **A = create_two_dim_float(270, 440, "random");

	for (int b = 5; b < 437; b++)
	  for (int a = 5; a < 269; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-2][a-5]*0.374;
	    
	     C[a][b][a]=C[a-3][b-5][a]*0.346;
	    
	     B[a][b][a]=B[a+5][b][a]*C[a][b][a]+A[a][b];
	    
	     A[a][b]=A[a+1][b+3]-B[a][b][a]*B[a][b][a];
	    
	     C[a][b][a]=0.532;
	    
	     A[a][b]=A[a][b]+C[a][b][a];
	     C[a][b][a]=A[a-3][b-2]+C[a][b][a];
	    
	     float var_a=B[a][b][a]*0.307;
	     float var_b=B[a-4][b-2][a-1]-0.342;
	  }

    return 0;
}