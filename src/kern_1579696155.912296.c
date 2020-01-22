#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(540, 560, "zeros");
	float ***E = create_three_dim_float(280, 600, 920, "zeros");
	float **A = create_two_dim_float(100, 440, "zeros");
	float ***C = create_three_dim_float(640, 590, 700, "zeros");
	float *B = create_one_dim_float(500, "zeros");

	for (int c = 3; c < 700; c++)
	  for (int b = 1; b < 590; b++)
	    for (int a = 0; a < 276; a++)
	    {
	      
	      C[a][b][c]=C[a][b-1][c-3]*0.606;
	      
	      B[a]=B[a+3]/A[a][b]-C[a][b][c]+E[a][b][c];
	      
	      E[a][b][c]=B[a]-D[a][b];
	      E[a+4][b+3][c+5]=C[a][b][c]-A[a][b]/B[a];
	      
	      B[a]=0.748;
	      
	      E[a][b][c]=0.523;
	    }

    return 0;
}