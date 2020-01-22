#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(440, "ones");
	double **B = create_two_dim_double(600, 450, "ones");
	double **C = create_two_dim_double(490, 160, "ones");
	double **E = create_two_dim_double(920, 610, "ones");
	double **A = create_two_dim_double(290, 520, "ones");

	for (int d = 4; d < 160; d++)
	  for (int c = 4; c < 290; c++)
	    for (int b = 4; b < 290; b++)
	      for (int a = 4; a < 290; a++)
	      {
	        
	       C[a][b]=C[a-1][b-4]*0.405;
	        
	       A[a][b]=A[a-4][b]-E[a][b];
	      }

    return 0;
}