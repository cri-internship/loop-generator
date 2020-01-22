#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(260, "random");
	double ***B = create_three_dim_double(890, 710, 260, "random");
	double **C = create_two_dim_double(610, 840, "random");

	for (int c = 2; c < 260; c++)
	  for (int b = 1; b < 710; b++)
	    for (int a = 4; a < 260; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-1][c-2]*0.439;
	      
	      B[a][b][c]=B[a-4][b][c]-0.328;
	      
	      C[a][b]=C[a+5][b]/A[a]+B[a][b][c];
	      
	      C[a][b]=C[a+4][b+4]+0.53;
	      
	      C[a][b]=C[a+2][b+2]*0.258;
	      
	      double var_a=A[a]/0.315;
	      double var_b=A[a-2]+0.178;
	      
	      B[a][b][c]=C[a][b]/A[a];
	      A[a]=C[a][b+2]-A[a];
	    }

    return 0;
}