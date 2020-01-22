#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(340, "zeros");
	float **C = create_two_dim_float(100, 380, "zeros");
	float *A = create_one_dim_float(220, "zeros");

	for (int b = 1; b < 375; b++)
	  for (int a = 3; a < 97; a++)
	  {
	    
	     C[a][b]=C[a-3][b-1]+0.911;
	    
	     B[a]=B[a-1]/0.456;
	    
	     C[a][b]=C[a][b+5]-A[a]/A[a];
	    
	     A[a]=A[a+4]-0.39;
	    
	     C[a][b]=C[a+3][b]+A[a]-B[a];
	    
	     float var_a=A[a]/0.229;
	     A[a]=0.812;
	  }

    return 0;
}