#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(780, 760, "random");
	double *D = create_one_dim_double(790, "random");
	double *B = create_one_dim_double(780, "random");
	double *E = create_one_dim_double(850, "random");
	double *C = create_one_dim_double(440, "random");

	for (int b = 3; b < 436; b++)
	  for (int a = 3; a < 436; a++)
	  {
	    
	     B[a]=B[a-1]-E[a]*C[a];
	    
	     C[a]=C[a-3]/0.099;
	    
	     B[a]=B[a-3]/0.759;
	    
	     E[a]=B[a];
	     E[a]=D[a]/A[a][b];
	    
	     E[a]=E[a]-A[a][b]/B[a]+C[a]*D[a];
	     B[a]=E[a+2]/D[a]*C[a];
	    
	     D[a]=C[a]-E[a]*A[a][b]/B[a]+D[a];
	     A[a][b]=C[a+4]/D[a]+E[a];
	  }

    return 0;
}