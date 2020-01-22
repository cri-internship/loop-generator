#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(80, "random");
	double ***B = create_three_dim_double(210, 500, 70, "random");
	double ***C = create_three_dim_double(840, 130, 820, "random");

	for (int b = 0; b < 75; b++)
	  for (int a = 0; a < 75; a++)
	  {
	    
	     A[a]=0.596;
	     A[a+5]=0.028;
	  }

    return 0;
}