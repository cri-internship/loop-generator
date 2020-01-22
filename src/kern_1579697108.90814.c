#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(130, 150, 10, "random");
	double *C = create_one_dim_double(560, "random");
	double **B = create_two_dim_double(130, 800, "random");

	for (int d = 0; d < 5; d++)
	  for (int c = 0; c < 146; c++)
	    for (int b = 0; b < 129; b++)
	      for (int a = 0; a < 129; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b+4][c+5]/C[a]*B[a][b];
	      }

    return 0;
}