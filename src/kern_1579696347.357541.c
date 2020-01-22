#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(390, 400, "ones");
	double **B = create_two_dim_double(450, 300, "ones");

	for (int c = 5; c < 300; c++)
	  for (int b = 4; b < 390; b++)
	    for (int a = 4; a < 390; a++)
	    {
	      
	      A[a][b]=A[a-1][b-3]-B[a][b];
	      
	      B[a][b]=B[a-3][b-1]*0.635;
	      
	      A[a][b]=A[a-4][b-5]*0.893;
	      
	      double var_a=A[a][b]+0.896;
	      double var_b=A[a][b+1]*0.498;
	      
	      B[a][b]=A[a][b]/0.457;
	      A[a][b]=A[a-2][b-3]*0.068;
	    }

    return 0;
}