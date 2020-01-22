#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(590, 550, "random");
	double ***D = create_three_dim_double(380, 30, 430, "random");
	double **A = create_two_dim_double(120, 990, "random");
	double ***C = create_three_dim_double(470, 860, 820, "random");
	double *E = create_one_dim_double(210, "random");

	for (int c = 5; c < 820; c++)
	  for (int b = 4; b < 860; b++)
	    for (int a = 5; a < 470; a++)
	    {
	      
	      C[a][b][c]=A[a][b];
	      C[a-5][b-4][c-5]=D[a][b][c]/B[a][b]*E[a]+D[a][b][c];
	    }

    return 0;
}