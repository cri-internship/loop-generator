#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(150, 30, 330, "random");
	double *B = create_one_dim_double(650, "random");
	double **A = create_two_dim_double(940, 920, "random");

	for (int c = 0; c < 330; c++)
	  for (int b = 5; b < 30; b++)
	    for (int a = 5; a < 150; a++)
	    {
	      
	      B[a]=B[a-2]+0.373;
	      
	      C[a][b][c]=C[a-1][b-5][c]/0.542;
	      
	      A[a][b]=A[a-2][b-5]*0.233;
	      
	      C[a][b][c]=A[a][b];
	    }

    return 0;
}