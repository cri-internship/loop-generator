#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(580, 100, 970, "ones");
	double **C = create_two_dim_double(820, 410, "ones");
	double *A = create_one_dim_double(760, "ones");

	for (int c = 0; c < 970; c++)
	  for (int b = 5; b < 100; b++)
	    for (int a = 3; a < 580; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b-4][c]+0.035;
	      
	      A[a]=A[a+5]-0.606;
	      
	      A[a]=0.36;
	      
	      double var_b=B[a][b][c]*0.094;
	      double var_c=B[a-3][b-5][c]-0.139;
	      
	      C[a][b]=A[a]+C[a][b]/C[a][b];
	      B[a][b][c]=A[a+2]-B[a][b][c];
	    }

    return 0;
}