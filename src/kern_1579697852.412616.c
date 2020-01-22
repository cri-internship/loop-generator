#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(600, 480, "zeros");
	float *B = create_one_dim_float(550, "zeros");
	float **A = create_two_dim_float(300, 550, "zeros");
	float ***D = create_three_dim_float(130, 680, 810, "zeros");

	for (int c = 0; c < 805; c++)
	  for (int b = 4; b < 545; b++)
	    for (int a = 3; a < 125; a++)
	    {
	      
	      A[a][b]=A[a-3][b-4]/B[a];
	      
	      A[a][b]=A[a-3][b-3]-0.173;
	      
	      D[a][b][c]=D[a+5][b+4][c+5]/0.572-C[a][b]+A[a][b];
	      
	      A[a][b]=A[a+1][b+5]/D[a][b][c]-D[a][b][c];
	      
	      float var_a=A[a][b]-0.087;
	      float var_b=A[a+4][b]*0.406;
	    }

    return 0;
}