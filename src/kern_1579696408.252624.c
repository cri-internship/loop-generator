#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(590, 100, "random");
	double **B = create_two_dim_double(410, 400, "random");
	double ***C = create_three_dim_double(720, 610, 40, "random");

	for (int c = 4; c < 37; c++)
	  for (int b = 3; b < 100; b++)
	    for (int a = 5; a < 590; a++)
	    {
	      
	      C[a][b][c]=C[a-4][b-2][c-4]+0.618;
	      
	      A[a][b]=A[a][b-3]-0.229;
	      
	      C[a][b][c]=0.597;
	      
	      double var_a=A[a][b]/0.792;
	      double var_b=A[a-5][b-3]*0.785;
	    }

    return 0;
}