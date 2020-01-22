#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(710, 710, 40, "zeros");
	float **C = create_two_dim_float(380, 520, "zeros");
	float ***A = create_three_dim_float(260, 970, 680, "zeros");

	for (int c = 3; c < 40; c++)
	  for (int b = 3; b < 517; b++)
	    for (int a = 4; a < 259; a++)
	    {
	      
	      C[a][b]=C[a][b-3]-0.994;
	      
	      B[a][b][c]=0.935*C[a][b];
	      B[a-4][b-3][c-3]=A[a][b][c];
	      
	      C[a][b]=0.763;
	      
	      float var_a=A[a][b][c]+0.447;
	      float var_b=A[a+1][b+3][c+2]-0.141;
	      
	      A[a][b][c]=B[a][b][c]+C[a][b];
	      C[a][b]=B[a-3][b][c-3]-A[a][b][c];
	    }

    return 0;
}