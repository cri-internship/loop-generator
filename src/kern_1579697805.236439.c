#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(950, 250, 580, "random");
	double *A = create_one_dim_double(700, "random");
	double ***B = create_three_dim_double(920, 980, 120, "random");

	for (int c = 4; c < 120; c++)
	  for (int b = 1; b < 248; b++)
	    for (int a = 5; a < 700; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-1][c-2]/C[a][b][c];
	      
	      C[a][b][c]=C[a+3][b+2][c]+0.799;
	      
	      B[a][b][c]=A[a]*C[a][b][c];
	      
	      A[a]=B[a][b][c]+C[a][b][c];
	      A[a-5]=B[a][b][c];
	      
	      C[a][b][c]=B[a][b][c]/A[a];
	      B[a][b][c]=B[a-1][b-1][c]/A[a];
	    }

    return 0;
}