#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(780, 320, "random");
	float *A = create_one_dim_float(130, "random");
	float ***C = create_three_dim_float(820, 940, 330, "random");

	for (int c = 2; c < 327; c++)
	  for (int b = 4; b < 320; b++)
	    for (int a = 3; a < 127; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-4][c-1]/0.535;
	      
	      C[a][b][c]=C[a-2][b-2][c-2]/0.112;
	      
	      B[a][b]=B[a-3][b-3]+0.174;
	      
	      A[a]=A[a+3]*C[a][b][c]+0.523;
	    }

    return 0;
}