#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(530, 500, "zeros");
	double **B = create_two_dim_double(940, 470, "zeros");
	double ***A = create_three_dim_double(390, 150, 30, "zeros");
	double *D = create_one_dim_double(490, "zeros");

	for (int b = 5; b < 490; b++)
	  for (int a = 5; a < 490; a++)
	  {
	    
	     D[a]=0.763;
	     D[a-5]=0.702;
	  }

    return 0;
}