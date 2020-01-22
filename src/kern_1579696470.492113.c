#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(130, 650, "ones");
	double ***A = create_three_dim_double(760, 60, 210, "ones");

	for (int c = 1; c < 208; c++)
	  for (int b = 4; b < 60; b++)
	    for (int a = 5; a < 125; a++)
	    {
	      
	      B[a][b]=B[a-3][b-3]+0.889;
	      
	      A[a][b][c]=A[a-5][b-4][c-1]*B[a][b];
	      
	      B[a][b]=B[a+1][b]-A[a][b][c];
	      
	      A[a][b][c]=A[a+2][b][c+2]+0.1;
	      
	      B[a][b]=B[a+5][b+4]-0.812;
	      
	      double var_a=B[a][b]+0.84;
	      double var_b=B[a-2][b-3]/0.84;
	    }

    return 0;
}