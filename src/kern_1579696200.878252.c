#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(650, 810, 730, "random");
	double *A = create_one_dim_double(280, "random");

	for (int c = 5; c < 728; c++)
	  for (int b = 5; b < 809; b++)
	    for (int a = 4; a < 275; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-5][c-5]+0.57;
	      
	      A[a]=A[a+5]-B[a][b][c];
	      
	      A[a]=A[a+2]+B[a][b][c];
	      
	      A[a]=0.376;
	      
	      double var_b=B[a][b][c]*0.791;
	      double var_c=B[a][b+1][c+2]/0.22;
	    }

    return 0;
}