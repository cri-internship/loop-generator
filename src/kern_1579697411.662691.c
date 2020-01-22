#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(240, 950, 60, "ones");
	float **B = create_two_dim_float(720, 360, "ones");

	for (int c = 1; c < 56; c++)
	  for (int b = 4; b < 355; b++)
	    for (int a = 3; a < 235; a++)
	    {
	      
	      B[a][b]=B[a-3][b-3]*0.69;
	      
	      B[a][b]=B[a+4][b+5]+A[a][b][c];
	      
	      A[a][b][c]=A[a+4][b][c]-0.27;
	      
	      A[a][b][c]=B[a][b];
	      
	      float var_a=B[a][b]*0.429;
	      float var_b=B[a+3][b+2]/0.761;
	    }

    return 0;
}