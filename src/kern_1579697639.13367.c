#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(770, 150, "zeros");
	float ***A = create_three_dim_float(140, 790, 510, "zeros");
	float **B = create_two_dim_float(310, 510, "zeros");
	float ***C = create_three_dim_float(380, 620, 770, "zeros");

	for (int c = 4; c < 765; c++)
	  for (int b = 4; b < 147; b++)
	    for (int a = 4; a < 378; a++)
	    {
	      
	      C[a][b][c]=C[a][b][c-1]*0.812;
	      
	      C[a][b][c]=C[a][b-4][c-4]*0.005;
	      
	      D[a][b]=D[a+1][b+2]*A[a][b][c]/0.737;
	      
	      C[a][b][c]=C[a+2][b+4][c+5]*0.872;
	      
	      D[a][b]=B[a][b]-A[a][b][c]*B[a][b];
	      
	      float var_a=C[a][b][c]-0.845;
	      float var_b=C[a-4][b-3][c]-0.025;
	    }

    return 0;
}