#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(490, 170, 280, "zeros");
	double ***C = create_three_dim_double(640, 40, 430, "zeros");
	double *A = create_one_dim_double(780, "zeros");

	for (int c = 5; c < 278; c++)
	  for (int b = 4; b < 40; b++)
	    for (int a = 5; a < 486; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-2][c-1]-0.068*B[a][b][c];
	      
	      B[a][b][c]=B[a+4][b+2][c+2]/0.306;
	      
	      A[a]=A[a+2]-C[a][b][c];
	      
	      C[a][b][c]=0.032;
	      
	      B[a][b][c]=A[a]-C[a][b][c];
	      
	      A[a]=A[a]*B[a][b][c]-C[a][b][c];
	      B[a][b][c]=A[a-2]+C[a][b][c]/0.301;
	    }

    return 0;
}