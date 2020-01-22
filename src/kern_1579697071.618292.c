#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(200, "zeros");
	double ***B = create_three_dim_double(950, 550, 510, "zeros");
	double ***A = create_three_dim_double(700, 10, 260, "zeros");

	for (int b = 0; b < 197; b++)
	  for (int a = 0; a < 197; a++)
	  {
	    
	     C[a]=C[a+3]+0.874;
	  }

    return 0;
}