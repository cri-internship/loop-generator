#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(340, "zeros");
	double *A = create_one_dim_double(730, "zeros");
	double ***D = create_three_dim_double(610, 720, 880, "zeros");
	double **B = create_two_dim_double(760, 270, "zeros");

	for (int c = 2; c < 877; c++)
	  for (int b = 5; b < 270; b++)
	    for (int a = 5; a < 605; a++)
	    {
	      
	      B[a][b]=B[a-1][b-1]/0.43;
	      
	      D[a][b][c]=D[a-5][b-5][c-2]*0.87;
	      
	      D[a][b][c]=0.161;
	      
	      B[a][b]=D[a][b][c]*B[a][b]/A[a]+C[a];
	      C[a]=D[a+1][b][c+3]*C[a]-B[a][b];
	    }

    return 0;
}