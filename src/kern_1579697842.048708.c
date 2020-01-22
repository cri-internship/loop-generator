#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(350, 80, "random");
	double *D = create_one_dim_double(430, "random");
	double ***B = create_three_dim_double(360, 400, 970, "random");
	double ***C = create_three_dim_double(840, 880, 10, "random");

	for (int d = 0; d < 5; d++)
	  for (int c = 0; c < 880; c++)
	    for (int b = 0; b < 428; b++)
	      for (int a = 0; a < 428; a++)
	      {
	        
	       D[a]=D[a+2]/C[a][b][c]+A[a][b];
	        
	       double var_a=C[a][b][c]-0.081;
	       double var_b=C[a+4][b][c+5]*0.515;
	      }

    return 0;
}