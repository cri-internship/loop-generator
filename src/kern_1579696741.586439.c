#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(690, 900, "random");
	double *C = create_one_dim_double(880, "random");
	double *A = create_one_dim_double(350, "random");

	for (int b = 0; b < 896; b++)
	  for (int a = 4; a < 686; a++)
	  {
	    
	     C[a]=C[a-4]*0.68;
	    
	     B[a][b]=B[a][b+4]*0.686;
	    
	     C[a]=B[a][b]/A[a];
	    
	     B[a][b]=C[a]*C[a];
	  }

    return 0;
}