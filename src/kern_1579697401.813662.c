#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(60, "ones");
	double **B = create_two_dim_double(100, 530, "ones");
	double ***E = create_three_dim_double(330, 570, 550, "ones");
	double *D = create_one_dim_double(240, "ones");
	double ***A = create_three_dim_double(410, 480, 240, "ones");

	for (int b = 2; b < 60; b++)
	  for (int a = 2; a < 60; a++)
	  {
	    
	     C[a]=C[a-2]*0.363;
	  }

    return 0;
}