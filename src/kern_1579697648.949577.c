#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(200, 490, "zeros");
	double ***A = create_three_dim_double(460, 380, 280, "zeros");
	double **E = create_two_dim_double(860, 30, "zeros");
	double *D = create_one_dim_double(710, "zeros");
	double **C = create_two_dim_double(440, 870, "zeros");

	for (int c = 3; c < 280; c++)
	  for (int b = 5; b < 380; b++)
	    for (int a = 1; a < 460; a++)
	    {
	      
	      A[a][b][c]=B[a][b]-D[a];
	      A[a-1][b-5][c-3]=C[a][b]-0.127;
	    }

    return 0;
}