#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(530, 310, 130, "zeros");
	float **B = create_two_dim_float(280, 340, "zeros");
	float *A = create_one_dim_float(560, "zeros");

	for (int c = 0; c < 130; c++)
	  for (int b = 3; b < 306; b++)
	    for (int a = 3; a < 276; a++)
	    {
	      
	      A[a]=A[a-3]+0.579;
	      
	      B[a][b]=B[a+3][b]-C[a][b][c];
	      
	      C[a][b][c]=C[a+3][b+4][c]+0.386;
	      
	      B[a][b]=B[a+2][b+2]*A[a]-0.523;
	      
	      A[a]=C[a][b][c];
	      
	      B[a][b]=B[a][b]/A[a];
	      C[a][b][c]=B[a-2][b-3]+A[a];
	      
	      A[a]=B[a][b]+A[a];
	      C[a][b][c]=B[a+4][b+1]*C[a][b][c];
	    }

    return 0;
}