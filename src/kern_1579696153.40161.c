#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(460, 290, 190, "zeros");
	float **B = create_two_dim_float(870, 30, "zeros");
	float **C = create_two_dim_float(440, 810, "zeros");
	float ***A = create_three_dim_float(480, 490, 170, "zeros");

	for (int c = 0; c < 169; c++)
	  for (int b = 3; b < 287; b++)
	    for (int a = 5; a < 440; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-3][c]/C[a][b]-B[a][b]*D[a][b][c];
	      
	      C[a][b]=C[a-2][b]-0.481;
	      
	      A[a][b][c]=A[a+3][b][c+1]-C[a][b]*D[a][b][c];
	      
	      D[a][b][c]=D[a+5][b+3][c+2]-0.463;
	      
	      C[a][b]=0.603;
	    }

    return 0;
}