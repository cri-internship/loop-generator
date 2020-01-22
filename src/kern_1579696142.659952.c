#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(160, 810, "zeros");
	float *C = create_one_dim_float(790, "zeros");
	float ***D = create_three_dim_float(250, 120, 480, "zeros");
	float **E = create_two_dim_float(260, 770, "zeros");
	float ***A = create_three_dim_float(190, 200, 220, "zeros");

	for (int c = 0; c < 217; c++)
	  for (int b = 4; b < 117; b++)
	    for (int a = 5; a < 160; a++)
	    {
	      
	      B[a][b]=B[a-5][b-4]-0.752;
	      
	      B[a][b]=B[a-3][b-1]-0.694;
	      
	      A[a][b][c]=A[a+1][b+5][c+3]-D[a][b][c]*B[a][b]/E[a][b]+C[a];
	      
	      C[a]=0.22;
	      C[a]=0.953;
	      
	      E[a][b]=0.238;
	      E[a-5][b-4]=0.935;
	      
	      E[a][b]=A[a][b][c]*B[a][b];
	      C[a]=A[a-3][b-3][c]/D[a][b][c]+C[a]-B[a][b]*E[a][b];
	      
	      A[a][b][c]=D[a][b][c]+A[a][b][c];
	      D[a][b][c]=D[a+5][b+3][c+4]/B[a][b];
	    }

    return 0;
}