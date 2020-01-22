#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(640, 470, 910, "ones");
	float **A = create_two_dim_float(260, 960, "ones");

	for (int c = 0; c < 906; c++)
	  for (int b = 2; b < 467; b++)
	    for (int a = 4; a < 256; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-2][c]*0.571;
	      
	      A[a][b]=A[a+4][b+4]-B[a][b][c];
	      
	      B[a][b][c]=B[a+1][b+3][c+4]+A[a][b];
	      
	      A[a][b]=0.336;
	      
	      float var_a=A[a][b]+0.051;
	      float var_b=A[a-4][b-1]-0.674;
	    }

    return 0;
}