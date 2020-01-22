#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(890, 950, "ones");
	double *A = create_one_dim_double(990, "ones");
	double **B = create_two_dim_double(910, 740, "ones");

	for (int b = 4; b < 740; b++)
	  for (int a = 5; a < 910; a++)
	  {
	    
	     B[a][b]=0.216;
	     B[a-5][b-4]=0.068;
	  }

    return 0;
}