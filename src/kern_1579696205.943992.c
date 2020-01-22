#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(590, 420, 100, "zeros");
	double ***C = create_three_dim_double(640, 420, 930, "zeros");
	double **D = create_two_dim_double(920, 930, "zeros");
	double *A = create_one_dim_double(950, "zeros");

	for (int c = 3; c < 100; c++)
	  for (int b = 2; b < 419; b++)
	    for (int a = 5; a < 590; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-1][c-2]/0.761;
	      
	      A[a]=A[a+2]/C[a][b][c];
	      
	      C[a][b][c]=C[a+4][b][c+1]/0.881;
	      
	      C[a][b][c]=0.554;
	      
	      B[a][b][c]=0.591;
	      
	      D[a][b]=A[a]+0.736-B[a][b][c];
	      D[a+3][b+1]=B[a][b][c]+C[a][b][c]-A[a];
	    }

    return 0;
}