#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(130, 560, "random");
	double **B = create_two_dim_double(490, 330, "random");
	double ***C = create_three_dim_double(380, 640, 750, "random");

	for (int c = 0; c < 749; c++)
	  for (int b = 4; b < 328; b++)
	    for (int a = 5; a < 130; a++)
	    {
	      
	      B[a][b]=B[a+3][b+2]/0.411;
	      
	      C[a][b][c]=C[a+1][b+4][c+1]+B[a][b];
	      
	      B[a][b]=C[a][b][c];
	      
	      A[a][b]=B[a][b];
	      A[a-1][b-4]=C[a][b][c]*B[a][b];
	      
	      B[a][b]=B[a][b]/C[a][b][c]-A[a][b];
	      A[a][b]=B[a+2][b+2]-A[a][b]/C[a][b][c];
	    }

    return 0;
}