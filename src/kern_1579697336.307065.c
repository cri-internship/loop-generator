#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(110, "zeros");
	float **B = create_two_dim_float(70, 690, "zeros");
	float **A = create_two_dim_float(130, 110, "zeros");

	for (int c = 5; c < 105; c++)
	  for (int b = 5; b < 70; b++)
	    for (int a = 5; a < 70; a++)
	    {
	      
	      B[a][b]=B[a-1][b-5]-0.321;
	      
	      A[a][b]=0.677;
	      A[a+1][b+5]=0.39;
	      
	      B[a][b]=0.225;
	      
	      C[a]=C[a]/A[a][b];
	      B[a][b]=C[a+2]*B[a][b];
	      
	      float var_a=A[a][b]-0.931;
	      float var_b=A[a-2][b-2]-0.337;
	      
	      float var_c=A[a][b]/0.744;
	      float var_d=A[a-5][b-1]/0.462;
	    }

    return 0;
}