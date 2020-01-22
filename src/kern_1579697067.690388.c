#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(410, 780, "random");
	float ***D = create_three_dim_float(830, 160, 380, "random");
	float *B = create_one_dim_float(40, "random");
	float *A = create_one_dim_float(210, "random");

	for (int c = 0; c < 779; c++)
	  for (int b = 1; b < 39; b++)
	    for (int a = 1; a < 39; a++)
	    {
	      
	      A[a]=A[a+4]+B[a]-C[a][b]/D[a][b][c];
	      
	      C[a][b]=C[a+1][b+1]-0.374;
	      
	      A[a]=B[a];
	      
	      C[a][b]=C[a][b]/A[a];
	      D[a][b][c]=C[a-1][b]-A[a];
	      
	      A[a]=B[a]/D[a][b][c]*A[a]-C[a][b];
	      B[a]=B[a+1]-0.991;
	    }

    return 0;
}