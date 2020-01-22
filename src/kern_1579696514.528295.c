#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(600, 680, 980, "ones");
	float *B = create_one_dim_float(600, "ones");
	float *C = create_one_dim_float(110, "ones");

	for (int c = 5; c < 976; c++)
	  for (int b = 4; b < 675; b++)
	    for (int a = 2; a < 596; a++)
	    {
	      
	      B[a]=B[a-2]+0.16;
	      
	      A[a][b][c]=A[a][b-2][c-5]-B[a];
	      
	      A[a][b][c]=A[a+4][b+1][c+3]-C[a]/B[a];
	      
	      B[a]=B[a+4]-0.307;
	      
	      float var_a=A[a][b][c]-0.198;
	      float var_b=A[a+2][b+5][c+4]/0.911;
	    }

    return 0;
}