#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(460, 100, "zeros");
	int ***D = create_three_dim_int(860, 50, 990, "zeros");
	int *B = create_one_dim_int(310, "zeros");
	int **C = create_two_dim_int(20, 810, "zeros");

	for (int c = 0; c < 989; c++)
	  for (int b = 2; b < 46; b++)
	    for (int a = 3; a < 20; a++)
	    {
	      
	      A[a][b]=A[a-1][b]/45;
	      
	      B[a]=B[a-3]/A[a][b]-D[a][b][c];
	      
	      D[a][b][c]=D[a][b+4][c+1]/C[a][b]-B[a];
	      
	      B[a]=D[a][b][c]*A[a][b]-C[a][b];
	      
	      int var_a=C[a][b]*50;
	      int var_b=C[a-2][b-2]/22;
	    }

    return 0;
}