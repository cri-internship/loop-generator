#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(230, 450, "ones");
	float ***D = create_three_dim_float(240, 430, 480, "ones");
	float *E = create_one_dim_float(200, "ones");
	float ***B = create_three_dim_float(950, 410, 440, "ones");
	float ***C = create_three_dim_float(630, 740, 810, "ones");

	for (int c = 2; c < 440; c++)
	  for (int b = 1; b < 410; b++)
	    for (int a = 2; a < 195; a++)
	    {
	      
	      C[a][b][c]=C[a-2][b-1][c]-0.13;
	      
	      E[a]=E[a+5]+0.632;
	      
	      E[a]=0.608;
	      
	      B[a][b][c]=D[a][b][c]-E[a];
	      B[a-1][b-1][c-2]=0.832*A[a][b];
	    }

    return 0;
}