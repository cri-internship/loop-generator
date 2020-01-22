#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(930, "random");
	double ***B = create_three_dim_double(450, 700, 280, "random");
	double *A = create_one_dim_double(920, "random");
	double **D = create_two_dim_double(250, 930, "random");

	for (int c = 1; c < 280; c++)
	  for (int b = 4; b < 700; b++)
	    for (int a = 3; a < 250; a++)
	    {
	      
	      C[a]=C[a-3]*A[a];
	      
	      B[a][b][c]=B[a-1][b-4][c-1]*C[a];
	      
	      D[a][b]=D[a][b+3]+0.182;
	      
	      C[a]=A[a]+0.852;
	      A[a]=A[a]*B[a][b][c]/C[a]+B[a][b][c];
	      
	      B[a][b][c]=C[a]/0.891*A[a];
	      D[a][b]=C[a-1]/A[a]-B[a][b][c]+D[a][b];
	    }

    return 0;
}