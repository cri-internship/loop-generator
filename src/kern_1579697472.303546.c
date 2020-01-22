#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(480, "zeros");
	float ***C = create_three_dim_float(60, 510, 960, "zeros");
	float *A = create_one_dim_float(510, "zeros");

	for (int c = 2; c < 475; c++)
	  for (int b = 2; b < 475; b++)
	    for (int a = 2; a < 475; a++)
	    {
	      
	      B[a]=0.222;
	      float  var_a=B[a]*0.075;
	      
	      A[a]=A[a+3]+0.18;
	      
	      A[a]=A[a+5]+0.916;
	      
	      B[a]=0.18;
	      
	      float var_b=A[a]+0.472;
	      float var_c=A[a-2]*0.044;
	      
	      A[a]=B[a]-A[a]/C[a][b][c];
	      B[a]=B[a+5]+C[a][b][c];
	    }

    return 0;
}