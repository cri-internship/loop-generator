#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(280, "random");
	float **A = create_two_dim_float(180, 890, "random");
	float ***C = create_three_dim_float(40, 730, 370, "random");
	float *B = create_one_dim_float(270, "random");

	for (int b = 3; b < 730; b++)
	  for (int a = 3; a < 37; a++)
	  {
	    
	     D[a]=D[a-2]+0.924-B[a];
	    
	     D[a]=D[a-3]/A[a][b]*C[a][b][a]+A[a][b];
	    
	     A[a][b]=A[a-3][b-3]-D[a]+0.548;
	    
	     C[a][b][a]=A[a][b];
	     C[a+1][b][a+3]=B[a]*D[a]+A[a][b];
	    
	     float var_a=A[a][b]*1.0;
	     float var_b=A[a+1][b+5]/0.051;
	  }

    return 0;
}