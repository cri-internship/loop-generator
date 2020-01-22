#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(260, 580, 580, "ones");
	float **B = create_two_dim_float(840, 180, "ones");

	for (int c = 0; c < 580; c++)
	  for (int b = 5; b < 180; b++)
	    for (int a = 1; a < 258; a++)
	    {
	      
	      float var_a=B[a][b]+0.58;
	      float var_b=B[a-1][b-5]/0.654;
	      
	      B[a][b]=A[a][b][c]/B[a][b];
	      A[a][b][c]=A[a+2][b+3][c]-B[a][b];
	    }

    return 0;
}