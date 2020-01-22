#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(1000, 30, "zeros");
	float ***B = create_three_dim_float(820, 850, 840, "zeros");

	for (int c = 5; c < 840; c++)
	  for (int b = 4; b < 27; b++)
	    for (int a = 4; a < 819; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-4][c-3]+0.325;
	      
	      B[a][b][c]=B[a-1][b][c-2]+0.008;
	      
	      A[a][b]=A[a+4][b+3]*B[a][b][c];
	      
	      float var_a=B[a][b][c]/0.166;
	      float var_b=B[a-4][b-4][c-5]*0.08;
	    }

    return 0;
}