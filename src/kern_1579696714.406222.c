#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(570, 840, "zeros");
	double ***D = create_three_dim_double(450, 700, 150, "zeros");
	double **B = create_two_dim_double(160, 720, "zeros");
	double *E = create_one_dim_double(690, "zeros");
	double **A = create_two_dim_double(50, 250, "zeros");

	for (int c = 0; c < 246; c++)
	  for (int b = 3; b < 49; b++)
	    for (int a = 3; a < 49; a++)
	    {
	      
	      E[a]=E[a-3]+0.95;
	      
	      A[a][b]=D[a][b][c]/E[a];
	      A[a+1][b+4]=B[a][b]-C[a][b]+C[a][b];
	    }

    return 0;
}