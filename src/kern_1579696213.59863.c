#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(600, 540, "zeros");
	double *A = create_one_dim_double(400, "zeros");
	double ***C = create_three_dim_double(820, 590, 230, "zeros");

	for (int b = 0; b < 538; b++)
	  for (int a = 0; a < 598; a++)
	  {
	    
	     B[a][b]=B[a+1][b]-A[a];
	    
	     B[a][b]=B[a+2][b+2]/C[a][b][a];
	  }

    return 0;
}