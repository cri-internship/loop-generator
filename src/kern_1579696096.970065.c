#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(720, 660, "ones");
	float ***A = create_three_dim_float(980, 790, 190, "ones");
	float *C = create_one_dim_float(870, "ones");
	float **E = create_two_dim_float(600, 70, "ones");
	float ***D = create_three_dim_float(610, 70, 880, "ones");

	for (int c = 0; c < 190; c++)
	  for (int b = 3; b < 66; b++)
	    for (int a = 1; a < 599; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b][c]*0.685;
	      
	      A[a][b][c]=A[a][b-3][c]*E[a][b]/D[a][b][c]-B[a][b];
	      
	      E[a][b]=E[a+1][b+4]-C[a];
	      
	      B[a][b]=B[a+4][b]-0.404;
	      
	      B[a][b]=0.926;
	      
	      C[a]=B[a][b]-A[a][b][c]*C[a];
	      A[a][b][c]=B[a+1][b+2]*E[a][b];
	    }

    return 0;
}