#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(310, 610, "random");
	double ***D = create_three_dim_double(340, 500, 390, "random");
	double **B = create_two_dim_double(600, 640, "random");
	double *A = create_one_dim_double(110, "random");

	for (int c = 5; c < 640; c++)
	  for (int b = 5; b < 108; b++)
	    for (int a = 5; a < 108; a++)
	    {
	      
	      B[a][b]=B[a-1][b-5]*0.711;
	      
	      A[a]=A[a+2]+C[a][b]*D[a][b][c]-B[a][b];
	      
	      B[a][b]=A[a]+0.028;
	      
	      B[a][b]=B[a][b]-0.644+A[a]*D[a][b][c];
	      D[a][b][c]=B[a-5][b-2]+A[a];
	    }

    return 0;
}