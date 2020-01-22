#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(120, 520, "ones");
	double *B = create_one_dim_double(250, "ones");
	double ***A = create_three_dim_double(310, 280, 190, "ones");
	double ***D = create_three_dim_double(10, 540, 920, "ones");

	for (int c = 0; c < 190; c++)
	  for (int b = 4; b < 280; b++)
	    for (int a = 5; a < 120; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-4][c]-0.904;
	      
	      double var_a=C[a][b]-0.332;
	      double var_b=C[a-1][b-2]+0.284;
	    }

    return 0;
}