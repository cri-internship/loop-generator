#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(350, 190, 1000, "random");
	double *A = create_one_dim_double(470, "random");
	double *D = create_one_dim_double(550, "random");
	double *C = create_one_dim_double(350, "random");

	for (int d = 0; d < 549; d++)
	  for (int c = 0; c < 549; c++)
	    for (int b = 0; b < 549; b++)
	      for (int a = 0; a < 549; a++)
	      {
	        
	       D[a]=D[a+1]+0.043;
	      }

    return 0;
}