#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(510, 90, "random");
	double ***C = create_three_dim_double(290, 860, 820, "random");
	double **A = create_two_dim_double(310, 530, "random");

	for (int c = 3; c < 90; c++)
	  for (int b = 5; b < 310; b++)
	    for (int a = 5; a < 310; a++)
	    {
	      
	      B[a][b]=B[a-3][b-3]/0.682;
	      
	      A[a][b]=A[a][b]+0.49;
	      C[a][b][c]=A[a-5][b-1]+0.148;
	      
	      double var_a=A[a][b]-0.679;
	      double var_b=A[a][b-1]-0.295;
	    }

    return 0;
}