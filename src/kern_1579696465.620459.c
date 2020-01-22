#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(240, 230, 120, "ones");
	double **E = create_two_dim_double(800, 910, "ones");
	double **B = create_two_dim_double(470, 410, "ones");
	double *D = create_one_dim_double(640, "ones");
	double **A = create_two_dim_double(700, 630, "ones");

	for (int c = 0; c < 120; c++)
	  for (int b = 4; b < 230; b++)
	    for (int a = 4; a < 240; a++)
	    {
	      
	      E[a][b]=E[a-4][b-4]-A[a][b];
	      
	      D[a]=D[a+1]*B[a][b]/C[a][b][c]-E[a][b];
	      
	      C[a][b][c]=C[a][b][c]*D[a];
	      A[a][b]=C[a-2][b-3][c]-D[a]*A[a][b];
	    }

    return 0;
}