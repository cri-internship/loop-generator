#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(310, 880, 890, "random");
	float **A = create_two_dim_float(230, 520, "random");
	float ***B = create_three_dim_float(120, 340, 730, "random");
	float *D = create_one_dim_float(70, "random");

	for (int b = 3; b < 337; b++)
	  for (int a = 5; a < 116; a++)
	  {
	    
	     B[a][b][a]=B[a+2][b+1][a+2]/A[a][b];
	    
	     A[a][b]=A[a+4][b+1]+D[a]/C[a][b][a]-B[a][b][a];
	    
	     B[a][b][a]=C[a][b][a]-D[a]*A[a][b];
	    
	     float var_a=A[a][b]+0.607;
	     float var_b=A[a-1][b-1]/0.455;
	  }

    return 0;
}