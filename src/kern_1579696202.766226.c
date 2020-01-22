#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(710, "ones");
	double **D = create_two_dim_double(430, 360, "ones");
	double ***C = create_three_dim_double(850, 100, 670, "ones");
	double ***B = create_three_dim_double(50, 380, 860, "ones");

	for (int d = 5; d < 670; d++)
	  for (int c = 0; c < 98; c++)
	    for (int b = 1; b < 850; b++)
	      for (int a = 1; a < 850; a++)
	      {
	        
	       C[a][b][c]=C[a-1][b][c-5]+0.198;
	        
	       double var_a=C[a][b][c]-0.334;
	       double var_b=C[a][b+2][c]/0.395;
	      }

    return 0;
}