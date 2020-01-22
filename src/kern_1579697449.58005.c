#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(350, "zeros");
	double ***A = create_three_dim_double(240, 370, 560, "zeros");

	for (int c = 5; c < 555; c++)
	  for (int b = 3; b < 367; b++)
	    for (int a = 4; a < 240; a++)
	    {
	      
	      B[a]=0.93;
	      float  var_a=B[a]*0.121;
	      
	      A[a][b][c]=A[a-4][b-3][c-5]-0.751;
	      
	      B[a]=B[a+4]-0.687;
	      
	      B[a]=B[a+1]*0.944;
	      
	      A[a][b][c]=A[a][b+3][c+5]-B[a];
	      
	      B[a]=B[a+3]/0.947;
	      
	      double var_b=B[a]*0.236;
	      B[a]=0.393;
	    }

    return 0;
}