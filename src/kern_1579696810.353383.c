#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(940, "zeros");
	double *B = create_one_dim_double(150, "zeros");
	double **D = create_two_dim_double(350, 250, "zeros");
	double ***A = create_three_dim_double(20, 380, 530, "zeros");

	for (int c = 4; c < 530; c++)
	  for (int b = 4; b < 380; b++)
	    for (int a = 1; a < 20; a++)
	    {
	      
	      A[a][b][c]=0.839;
	      A[a-1][b-4][c-4]=0.73;
	    }

    return 0;
}