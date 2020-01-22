#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(210, 650, "zeros");
	double ***D = create_three_dim_double(180, 890, 390, "zeros");
	double **C = create_two_dim_double(100, 430, "zeros");
	double *A = create_one_dim_double(200, "zeros");

	for (int b = 4; b < 426; b++)
	  for (int a = 2; a < 100; a++)
	  {
	    
	     D[a][b][a]=D[a-1][b-2][a-2]*0.096;
	    
	     C[a][b]=C[a][b+4]+0.519;
	    
	     C[a][b]=0.545;
	  }

    return 0;
}