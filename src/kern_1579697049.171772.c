#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(700, 130, "ones");
	double ***C = create_three_dim_double(100, 470, 250, "ones");
	double **A = create_two_dim_double(390, 840, "ones");

	for (int c = 0; c < 248; c++)
	  for (int b = 2; b < 130; b++)
	    for (int a = 1; a < 98; a++)
	    {
	      
	      B[a][b]=B[a-1][b-2]+A[a][b]/C[a][b][c];
	      
	      A[a][b]=A[a+4][b]/B[a][b]+C[a][b][c];
	      
	      A[a][b]=A[a+1][b+5]-B[a][b];
	      
	      B[a][b]=C[a][b][c];
	      
	      double var_a=A[a][b]-0.763;
	      double var_b=A[a+2][b]/0.852;
	      
	      B[a][b]=C[a][b][c]-B[a][b]+A[a][b];
	      C[a][b][c]=C[a+2][b+1][c+2]+0.36;
	    }

    return 0;
}