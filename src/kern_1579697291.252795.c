#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(510, 470, 260, "random");
	float *B = create_one_dim_float(360, "random");

	for (int c = 4; c < 256; c++)
	  for (int b = 5; b < 470; b++)
	    for (int a = 5; a < 358; a++)
	    {
	      
	      B[a]=B[a-1]/A[a][b][c];
	      
	      A[a][b][c]=A[a-4][b-5][c-4]/0.692;
	      
	      A[a][b][c]=A[a-1][b][c-1]+0.382;
	      
	      B[a]=B[a+2]+0.157;
	      
	      float var_a=A[a][b][c]-0.21;
	      float var_b=A[a][b][c+4]*0.479;
	      
	      A[a][b][c]=B[a]/A[a][b][c];
	      B[a]=B[a-5]/A[a][b][c];
	    }

    return 0;
}