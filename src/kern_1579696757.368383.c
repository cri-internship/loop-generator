#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(190, 450, 990, "random");
	double **A = create_two_dim_double(780, 140, "random");

	for (int d = 0; d < 990; d++)
	  for (int c = 1; c < 135; c++)
	    for (int b = 1; b < 190; b++)
	      for (int a = 1; a < 190; a++)
	      {
	        
	       A[a][b]=A[a+4][b+5]*B[a][b][c];
	        
	       B[a][b][c]=A[a][b];
	       B[a-1][b-1][c]=A[a][b];
	      }

    return 0;
}