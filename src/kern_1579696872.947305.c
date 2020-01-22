#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(940, "random");
	double ***B = create_three_dim_double(790, 220, 440, "random");
	double **A = create_two_dim_double(270, 110, "random");
	double ***C = create_three_dim_double(1000, 240, 50, "random");

	for (int c = 5; c < 45; c++)
	  for (int b = 2; b < 220; b++)
	    for (int a = 4; a < 785; a++)
	    {
	      
	      D[a]=D[a-4]*A[a][b]/C[a][b][c]-B[a][b][c];
	      
	      B[a][b][c]=B[a+5][b][c+5]*0.201;
	      
	      C[a][b][c]=C[a+1][b][c+5]*D[a]/A[a][b];
	      
	      D[a]=D[a+1]/A[a][b];
	      
	      C[a][b][c]=0.981;
	      
	      A[a][b]=C[a][b][c]-B[a][b][c]/A[a][b];
	      C[a][b][c]=C[a][b-2][c-5]*B[a][b][c]-D[a];
	    }

    return 0;
}