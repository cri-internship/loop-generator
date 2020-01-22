#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(580, 890, "zeros");
	double ***D = create_three_dim_double(910, 590, 670, "zeros");
	double *A = create_one_dim_double(400, "zeros");
	double **C = create_two_dim_double(50, 220, "zeros");

	for (int b = 4; b < 890; b++)
	  for (int a = 0; a < 580; a++)
	  {
	    
	     B[a][b]=B[a][b-4]*0.463;
	  }

    return 0;
}