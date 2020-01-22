#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(340, 30, 420, "ones");
	float *C = create_one_dim_float(920, "ones");
	float **B = create_two_dim_float(470, 830, "ones");
	float *E = create_one_dim_float(720, "ones");
	float ***A = create_three_dim_float(830, 990, 610, "ones");

	for (int c = 0; c < 415; c++)
	  for (int b = 0; b < 30; b++)
	    for (int a = 5; a < 338; a++)
	    {
	      
	      E[a]=E[a-5]/C[a]*B[a][b]+0.471;
	      
	      float var_a=C[a]*0.393;
	      C[a]=0.825;
	      
	      D[a][b][c]=D[a+2][b][c+5]/E[a]+A[a][b][c]-A[a][b][c];
	      
	      B[a][b]=B[a+1][b+2]/D[a][b][c]*E[a]-C[a];
	    }

    return 0;
}