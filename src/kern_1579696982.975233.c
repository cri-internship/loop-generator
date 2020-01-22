#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(540, 970, "random");
	double *D = create_one_dim_double(420, "random");
	double ***C = create_three_dim_double(900, 900, 820, "random");
	double *B = create_one_dim_double(860, "random");

	for (int d = 0; d < 858; d++)
	  for (int c = 0; c < 858; c++)
	    for (int b = 0; b < 858; b++)
	      for (int a = 0; a < 858; a++)
	      {
	        
	       B[a]=B[a+2]+A[a][b];
	      }

    return 0;
}