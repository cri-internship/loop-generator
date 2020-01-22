#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(530, "zeros");
	float *C = create_one_dim_float(630, "zeros");
	float **D = create_two_dim_float(100, 660, "zeros");
	float ***B = create_three_dim_float(920, 970, 100, "zeros");

	for (int b = 5; b < 656; b++)
	  for (int a = 5; a < 95; a++)
	  {
	    
	     D[a][b]=D[a][b-3]+0.594;
	    
	     C[a]=C[a+3]-0.007;
	    
	     D[a][b]=A[a]+C[a];
	    
	     C[a]=0.535;
	    
	     B[a][b][a]=B[a][b][a]+D[a][b];
	     A[a]=B[a+3][b+5][a+1]+A[a]/C[a];
	    
	     float var_a=C[a]/0.287;
	     float var_b=C[a-2]*0.978;
	    
	     D[a][b]=D[a][b]/B[a][b][a];
	     C[a]=D[a+5][b+4]-C[a]*B[a][b][a];
	  }

    return 0;
}