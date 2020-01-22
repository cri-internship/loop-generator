#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(910, "zeros");
	float ***C = create_three_dim_float(10, 650, 440, "zeros");
	float **E = create_two_dim_float(900, 650, "zeros");
	float *B = create_one_dim_float(350, "zeros");
	float ***A = create_three_dim_float(900, 70, 990, "zeros");

	for (int c = 2; c < 990; c++)
	  for (int b = 1; b < 70; b++)
	    for (int a = 4; a < 345; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-1][c-2]*0.676;
	      
	      D[a]=D[a-1]/E[a][b]-C[a][b][c]*A[a][b][c];
	      
	      B[a]=D[a];
	      B[a+5]=0.627;
	      
	      E[a][b]=0.459;
	      E[a][b]=0.172;
	    }

    return 0;
}