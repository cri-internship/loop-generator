#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(950, "random");
	double ***C = create_three_dim_double(450, 440, 790, "random");
	double ***A = create_three_dim_double(940, 430, 640, "random");

	for (int c = 4; c < 637; c++)
	  for (int b = 4; b < 426; b++)
	    for (int a = 5; a < 449; a++)
	    {
	      
	      C[a][b][c]=C[a-2][b-4][c-2]*0.278;
	      
	      A[a][b][c]=A[a-3][b-3][c-3]+0.679;
	      
	      C[a][b][c]=C[a-4][b-3][c-4]+0.004;
	      
	      A[a][b][c]=A[a+5][b+4][c+3]/0.676;
	      
	      A[a][b][c]=B[a]/A[a][b][c];
	      B[a]=B[a-5]/C[a][b][c];
	    }

    return 0;
}