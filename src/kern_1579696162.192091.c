#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(330, 600, 790, "zeros");
	double *A = create_one_dim_double(550, "zeros");
	double **B = create_two_dim_double(390, 170, "zeros");
	double ***C = create_three_dim_double(920, 200, 300, "zeros");

	for (int c = 1; c < 300; c++)
	  for (int b = 5; b < 200; b++)
	    for (int a = 4; a < 328; a++)
	    {
	      
	      C[a][b][c]=C[a][b-1][c]+B[a][b]/A[a];
	      
	      A[a]=A[a+1]+0.49;
	      
	      D[a][b][c]=0.793;
	      D[a+2][b+5][c+4]=0.664;
	      
	      C[a][b][c]=0.638;
	    }

    return 0;
}