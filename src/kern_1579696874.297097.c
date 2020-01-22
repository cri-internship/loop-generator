#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(940, 100, "random");
	float ***D = create_three_dim_float(450, 980, 970, "random");
	float **C = create_two_dim_float(270, 340, "random");
	float **E = create_two_dim_float(370, 450, "random");
	float ***B = create_three_dim_float(920, 220, 80, "random");

	for (int c = 0; c < 967; c++)
	  for (int b = 0; b < 100; b++)
	    for (int a = 0; a < 368; a++)
	    {
	      
	      E[a][b]=E[a+2][b+4]/0.053;
	      
	      E[a][b]=B[a][b][c]*0.32;
	      
	      float var_a=A[a][b]/0.281;
	      float var_b=A[a+1][b]+0.762;
	      
	      A[a][b]=D[a][b][c]/E[a][b];
	      C[a][b]=D[a+3][b+2][c+3]+E[a][b]*A[a][b]/C[a][b]-B[a][b][c];
	    }

    return 0;
}