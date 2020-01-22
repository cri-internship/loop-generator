#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(210, "zeros");
	double ***C = create_three_dim_double(890, 1000, 890, "zeros");
	double *E = create_one_dim_double(250, "zeros");
	double **A = create_two_dim_double(1000, 310, "zeros");
	double *B = create_one_dim_double(310, "zeros");

	for (int d = 0; d < 307; d++)
	  for (int c = 0; c < 996; c++)
	    for (int b = 0; b < 996; b++)
	      for (int a = 0; a < 996; a++)
	      {
	        
	       A[a][b]=C[a][b][c]+E[a]/0.908-B[a];
	       A[a+4][b+3]=B[a]*E[a]/C[a][b][c]-D[a];
	      }

    return 0;
}