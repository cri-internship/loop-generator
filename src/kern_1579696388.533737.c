#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(950, 640, 10, "ones");
	double *B = create_one_dim_double(990, "ones");
	double ***C = create_three_dim_double(650, 320, 170, "ones");
	double **A = create_two_dim_double(690, 220, "ones");
	double *E = create_one_dim_double(520, "ones");

	for (int c = 4; c < 170; c++)
	  for (int b = 0; b < 218; b++)
	    for (int a = 5; a < 650; a++)
	    {
	      
	      A[a][b]=A[a][b+2]/C[a][b][c];
	      
	      C[a][b][c]=E[a];
	      C[a-4][b][c-4]=D[a][b][c]*B[a]+A[a][b]/B[a];
	      
	      A[a][b]=A[a][b]+C[a][b][c]*E[a]-B[a]/D[a][b][c];
	      D[a][b][c]=A[a-5][b]/E[a]+D[a][b][c];
	    }

    return 0;
}