#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(410, 490, 440, "random");
	double ***D = create_three_dim_double(320, 130, 680, "random");
	double **C = create_two_dim_double(730, 280, "random");
	double ***B = create_three_dim_double(460, 820, 760, "random");

	for (int c = 1; c < 437; c++)
	  for (int b = 2; b < 130; b++)
	    for (int a = 2; a < 320; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b+4][c+3]-C[a][b]+0.164;
	      
	      A[a][b][c]=A[a+3][b][c]/0.317;
	      
	      B[a][b][c]=A[a][b][c];
	      B[a][b+1][c+2]=C[a][b]+A[a][b][c];
	      
	      D[a][b][c]=C[a][b]/B[a][b][c];
	      A[a][b][c]=C[a-1][b-2]-D[a][b][c]*B[a][b][c];
	      
	      double var_a=D[a][b][c]-0.119;
	      double var_b=D[a-2][b-2][c-1]/0.792;
	    }

    return 0;
}