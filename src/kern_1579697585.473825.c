#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(230, "zeros");
	double **D = create_two_dim_double(850, 500, "zeros");
	double *E = create_one_dim_double(180, "zeros");
	double **A = create_two_dim_double(680, 980, "zeros");
	double ***C = create_three_dim_double(40, 910, 230, "zeros");

	for (int c = 0; c < 225; c++)
	  for (int b = 0; b < 905; b++)
	    for (int a = 0; a < 39; a++)
	    {
	      
	      C[a][b][c]=C[a+1][b+3][c+3]-E[a]*B[a]/D[a][b]+A[a][b];
	      
	      A[a][b]=A[a+5][b+2]-0.839;
	      
	      C[a][b][c]=C[a][b+5][c+5]/0.198;
	    }

    return 0;
}