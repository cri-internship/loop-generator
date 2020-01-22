#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(320, 540, "ones");
	float ***B = create_three_dim_float(680, 220, 360, "ones");
	float **A = create_two_dim_float(890, 140, "ones");

	for (int c = 0; c < 355; c++)
	  for (int b = 5; b < 140; b++)
	    for (int a = 0; a < 320; a++)
	    {
	      
	      C[a][b]=C[a][b-5]/0.302;
	      
	      A[a][b]=A[a][b-2]*0.054;
	      
	      B[a][b][c]=B[a+4][b+1][c+3]/A[a][b]+C[a][b];
	      
	      B[a][b][c]=B[a+2][b+1][c+5]*C[a][b]+0.037;
	    }

    return 0;
}