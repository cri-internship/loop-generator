#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(140, "random");
	double ***C = create_three_dim_double(310, 300, 30, "random");
	double **A = create_two_dim_double(20, 930, "random");

	for (int c = 5; c < 925; c++)
	  for (int b = 5; b < 15; b++)
	    for (int a = 5; a < 15; a++)
	    {
	      
	      B[a]=B[a-5]-0.047;
	      
	      A[a][b]=B[a]+C[a][b][c];
	      
	      A[a][b]=A[a+5][b]/0.298;
	      
	      A[a][b]=A[a+5][b+5]/B[a]*B[a];
	      
	      B[a]=A[a][b]/B[a]*C[a][b][c];
	      C[a][b][c]=A[a-4][b-5]+B[a]/C[a][b][c];
	    }

    return 0;
}