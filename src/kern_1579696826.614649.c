#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(70, "random");
	double **C = create_two_dim_double(900, 540, "random");
	double ***A = create_three_dim_double(620, 110, 40, "random");
	double ***D = create_three_dim_double(420, 680, 100, "random");
	double **E = create_two_dim_double(930, 730, "random");

	for (int c = 0; c < 726; c++)
	  for (int b = 0; b < 929; b++)
	    for (int a = 0; a < 929; a++)
	    {
	      
	      C[a][b]=E[a][b]-D[a][b][c]/C[a][b]+0.542*B[a];
	      B[a]=E[a+1][b+4]/A[a][b][c]*C[a][b]+D[a][b][c];
	    }

    return 0;
}