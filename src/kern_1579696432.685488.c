#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(650, 590, 250, "random");
	float **A = create_two_dim_float(980, 30, "random");
	float *B = create_one_dim_float(920, "random");

	for (int d = 0; d < 250; d++)
	  for (int c = 0; c < 586; c++)
	    for (int b = 0; b < 650; b++)
	      for (int a = 0; a < 650; a++)
	      {
	        
	       C[a][b][c]=C[a][b+4][c]-B[a]+A[a][b];
	      }

    return 0;
}