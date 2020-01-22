#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(800, 590, 1000, "ones");
	double **C = create_two_dim_double(900, 60, "ones");
	double *B = create_one_dim_double(600, "ones");

	for (int c = 3; c < 1000; c++)
	  for (int b = 3; b < 58; b++)
	    for (int a = 5; a < 800; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-3][c-3]/C[a][b]*B[a];
	      
	      C[a][b]=C[a+4][b+2]+0.445;
	      
	      A[a][b][c]=0.387;
	    }

    return 0;
}