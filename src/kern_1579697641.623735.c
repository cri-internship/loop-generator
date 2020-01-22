#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(970, 910, "ones");
	float **B = create_two_dim_float(20, 590, "ones");
	float ***A = create_three_dim_float(940, 560, 210, "ones");
	float ***D = create_three_dim_float(510, 330, 940, "ones");
	float ***E = create_three_dim_float(600, 140, 380, "ones");

	for (int c = 1; c < 210; c++)
	  for (int b = 2; b < 560; b++)
	    for (int a = 2; a < 940; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-1][c-1]/0.863;
	      
	      C[a][b]=0.154;
	      C[a-1][b-2]=0.965;
	    }

    return 0;
}