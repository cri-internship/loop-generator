#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(110, 30, 400, "random");
	double **A = create_two_dim_double(270, 60, "random");
	double ***C = create_three_dim_double(670, 590, 630, "random");

	for (int c = 3; c < 400; c++)
	  for (int b = 5; b < 30; b++)
	    for (int a = 5; a < 110; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b-1][c]*0.848;
	      
	      A[a][b]=A[a][b-4]*C[a][b][c]/B[a][b][c];
	      
	      A[a][b]=0.346;
	      
	      double var_a=A[a][b]+0.769;
	      double var_b=A[a-3][b-1]-0.0;
	      
	      double var_c=B[a][b][c]*0.446;
	      double var_d=B[a-2][b-3][c-3]*0.403;
	    }

    return 0;
}