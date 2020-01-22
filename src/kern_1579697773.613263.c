#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(930, 40, "random");
	double **B = create_two_dim_double(270, 480, "random");
	double ***A = create_three_dim_double(510, 990, 70, "random");
	double *D = create_one_dim_double(830, "random");

	for (int c = 2; c < 475; c++)
	  for (int b = 5; b < 267; b++)
	    for (int a = 5; a < 267; a++)
	    {
	      
	      B[a][b]=B[a-5][b-2]-D[a];
	      
	      B[a][b]=B[a+3][b+1]/0.17*C[a][b]+D[a];
	      
	      A[a][b][c]=D[a]/B[a][b];
	      
	      B[a][b]=D[a]*C[a][b]-0.776/B[a][b];
	      C[a][b]=D[a+4]-C[a][b];
	    }

    return 0;
}