#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(30, "zeros");
	double ***A = create_three_dim_double(220, 1000, 300, "zeros");
	double **C = create_two_dim_double(680, 870, "zeros");
	double *B = create_one_dim_double(30, "zeros");

	for (int c = 3; c < 300; c++)
	  for (int b = 3; b < 866; b++)
	    for (int a = 5; a < 30; a++)
	    {
	      
	      D[a]=D[a-4]+0.979;
	      
	      A[a][b][c]=A[a-2][b-1][c]/0.556-D[a]+B[a];
	      
	      D[a]=D[a-5]+0.398;
	      
	      C[a][b]=0.153;
	      C[a+1][b+2]=0.239;
	      
	      C[a][b]=0.473;
	      
	      A[a][b][c]=C[a][b];
	    }

    return 0;
}