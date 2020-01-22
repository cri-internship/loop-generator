#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(810, 90, 510, "random");
	double **A = create_two_dim_double(690, 540, "random");
	double **C = create_two_dim_double(150, 60, "random");
	double ***D = create_three_dim_double(600, 880, 990, "random");
	double ***B = create_three_dim_double(100, 630, 550, "random");

	for (int c = 5; c < 507; c++)
	  for (int b = 2; b < 89; b++)
	    for (int a = 5; a < 100; a++)
	    {
	      
	      E[a][b][c]=E[a-2][b-1][c-5]+0.469;
	      
	      E[a][b][c]=E[a-5][b-1][c-2]+0.033;
	      
	      A[a][b]=A[a+1][b+4]/0.364;
	      
	      D[a][b][c]=B[a][b][c]-E[a][b][c];
	      E[a][b][c]=B[a-1][b-2][c-2]*C[a][b]/A[a][b];
	    }

    return 0;
}