#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(620, "random");
	double **A = create_two_dim_double(560, 370, "random");
	double ***B = create_three_dim_double(880, 760, 600, "random");

	for (int d = 3; d < 600; d++)
	  for (int c = 5; c < 760; c++)
	    for (int b = 5; b < 615; b++)
	      for (int a = 5; a < 615; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-5][c-3]-0.574;
	        
	       double var_a=C[a]+0.621;
	       double var_b=C[a+5]+0.741;
	      }

    return 0;
}