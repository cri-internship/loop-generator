#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(310, "random");
	float *A = create_one_dim_float(950, "random");
	float ***E = create_three_dim_float(510, 910, 740, "random");
	float **C = create_two_dim_float(600, 760, "random");
	float **D = create_two_dim_float(920, 200, "random");

	for (int b = 3; b < 909; b++)
	  for (int a = 2; a < 505; a++)
	  {
	    
	     A[a]=A[a+3]/0.176;
	    
	     E[a][b][a]=B[a]*A[a]-C[a][b];
	     E[a+5][b+1][a+1]=D[a][b];
	    
	     float var_a=A[a]-0.177;
	     float var_b=A[a+2]/0.122;
	    
	     C[a][b]=E[a][b][a]/D[a][b];
	     D[a][b]=E[a-2][b-3][a-1]+A[a]*C[a][b];
	  }

    return 0;
}