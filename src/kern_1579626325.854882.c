#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(30, 400, "ones");
	double ***A = create_three_dim_double(920, 40, 340, "ones");

	for (int c = 0; c < 396; c++)
	  for (int b = 0; b < 25; b++)
	    for (int a = 0; a < 25; a++)
	    {
	      
	      B[a][b]=B[a+3][b+3]*A[a][b][c];
	      
	      B[a][b]=B[a+5][b]-0.533;
	      
	      double var_a=B[a][b]*0.032;
	      double var_b=B[a+3][b+4]/0.528;
	    }

    return 0;
}