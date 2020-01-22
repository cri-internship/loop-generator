#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(510, "ones");
	double **D = create_two_dim_double(920, 480, "ones");
	double **B = create_two_dim_double(600, 360, "ones");
	double ***A = create_three_dim_double(780, 40, 850, "ones");

	for (int b = 3; b < 35; b++)
	  for (int a = 3; a < 595; a++)
	  {
	    
	     B[a][b]=B[a-3][b-3]+C[a]*D[a][b]/A[a][b][a];
	    
	     B[a][b]=B[a+5][b+1]/0.511;
	    
	     A[a][b][a]=A[a+1][b+4][a+1]+B[a][b]/0.171*B[a][b];
	    
	     A[a][b][a]=A[a+1][b+5][a+2]/0.373;
	  }

    return 0;
}