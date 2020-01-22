#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(870, 130, 20, "ones");
	double *B = create_one_dim_double(960, "ones");
	double **D = create_two_dim_double(150, 460, "ones");
	double **C = create_two_dim_double(810, 20, "ones");
	double ***E = create_three_dim_double(860, 520, 290, "ones");

	for (int c = 3; c < 20; c++)
	  for (int b = 4; b < 130; b++)
	    for (int a = 4; a < 150; a++)
	    {
	      
	      D[a][b]=D[a-4][b]*C[a][b]-A[a][b][c];
	      
	      B[a]=B[a+5]/D[a][b];
	      
	      A[a][b][c]=A[a][b][c]/B[a]+E[a][b][c]*C[a][b];
	      C[a][b]=A[a-4][b-4][c-3]-D[a][b];
	    }

    return 0;
}