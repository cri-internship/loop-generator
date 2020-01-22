#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(250, "random");
	double ***C = create_three_dim_double(520, 80, 570, "random");
	double *A = create_one_dim_double(430, "random");

	for (int d = 4; d < 430; d++)
	  for (int c = 4; c < 430; c++)
	    for (int b = 4; b < 430; b++)
	      for (int a = 4; a < 430; a++)
	      {
	        
	       A[a]=B[a];
	       A[a-4]=C[a][b][c]/B[a];
	      }

    return 0;
}