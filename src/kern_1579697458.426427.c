#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(790, 740, "random");
	double ***C = create_three_dim_double(700, 430, 390, "random");
	double ***A = create_three_dim_double(670, 870, 320, "random");

	for (int c = 2; c < 320; c++)
	  for (int b = 2; b < 426; b++)
	    for (int a = 3; a < 670; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-1][c-2]+A[a][b][c]*0.821;
	      
	      C[a][b][c]=C[a+1][b][c]*A[a][b][c];
	      
	      C[a][b][c]=C[a+5][b+4][c+1]+0.244;
	      
	      A[a][b][c]=C[a][b][c]/B[a][b];
	      B[a][b]=C[a+4][b+4][c+3]-B[a][b];
	      
	      double var_a=A[a][b][c]-0.686;
	      double var_b=A[a-3][b-2][c-2]*0.249;
	    }

    return 0;
}