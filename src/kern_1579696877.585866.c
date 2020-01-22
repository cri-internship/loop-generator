#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(1000, "random");
	double ***A = create_three_dim_double(180, 150, 400, "random");

	for (int b = 5; b < 1000; b++)
	  for (int a = 5; a < 1000; a++)
	  {
	    
	     B[a]=B[a-5]-0.236;
	  }

    return 0;
}