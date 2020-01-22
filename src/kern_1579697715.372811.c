#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(170, 920, "zeros");
	float *A = create_one_dim_float(210, "zeros");

	for (int c = 1; c < 917; c++)
	  for (int b = 4; b < 166; b++)
	    for (int a = 4; a < 166; a++)
	    {
	      
	      A[a]=0.642;
	      A[a]=0.374;
	      
	      B[a][b]=0.375;
	      B[a-4][b-1]=0.063;
	      
	      float var_a=B[a][b]*0.429;
	      float var_b=B[a+4][b+2]-0.795;
	      
	      float var_c=B[a][b]+0.764;
	      float var_d=B[a+4][b+3]-0.3;
	      
	      float var_e=A[a]*0.627;
	      float var_f=A[a+2]*0.262;
	    }

    return 0;
}