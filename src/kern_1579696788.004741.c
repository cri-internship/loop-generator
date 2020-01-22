#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(630, 230, 900, "random");
	double **C = create_two_dim_double(170, 10, "random");
	double *B = create_one_dim_double(450, "random");

	for (int d = 3; d < 900; d++)
	  for (int c = 1; c < 230; c++)
	    for (int b = 5; b < 630; b++)
	      for (int a = 5; a < 630; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-1][c-3]/0.324;
	      }

    return 0;
}