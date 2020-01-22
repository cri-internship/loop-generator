#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(380, 130, "random");
	double **B = create_two_dim_double(70, 340, "random");
	double *C = create_one_dim_double(760, "random");
	double **D = create_two_dim_double(30, 870, "random");

	for (int b = 1; b < 870; b++)
	  for (int a = 3; a < 30; a++)
	  {
	    
	     C[a]=C[a-3]+0.402;
	    
	     D[a][b]=D[a-3][b-1]*0.936;
	    
	     C[a]=C[a+4]/D[a][b]-A[a][b]+B[a][b];
	    
	     D[a][b]=C[a]*D[a][b]-B[a][b];
	     C[a]=C[a-1]/D[a][b]+A[a][b];
	  }

    return 0;
}