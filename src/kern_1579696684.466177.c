#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(830, 430, 830, "random");
	float ***C = create_three_dim_float(290, 680, 1000, "random");
	float ***E = create_three_dim_float(770, 170, 670, "random");
	float **D = create_two_dim_float(300, 400, "random");
	float **B = create_two_dim_float(400, 910, "random");

	for (int c = 5; c < 670; c++)
	  for (int b = 4; b < 170; b++)
	    for (int a = 4; a < 290; a++)
	    {
	      
	      E[a][b][c]=D[a][b]+0.329;
	      E[a-4][b-3][c-5]=0.534;
	      
	      A[a][b][c]=0.168;
	      A[a+2][b+4][c+5]=0.857;
	      
	      B[a][b]=A[a][b][c]/E[a][b][c];
	      C[a][b][c]=A[a-1][b-4][c]/C[a][b][c]*B[a][b]+E[a][b][c];
	      
	      float var_a=C[a][b][c]*0.914;
	      float var_b=C[a][b+5][c+5]-0.438;
	    }

    return 0;
}