#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(90, "ones");
	double *B = create_one_dim_double(280, "ones");
	double **A = create_two_dim_double(980, 990, "ones");
	double *C = create_one_dim_double(400, "ones");

	for (int b = 0; b < 988; b++)
	  for (int a = 2; a < 275; a++)
	  {
	    
	     B[a]=B[a-2]+A[a][b];
	    
	     A[a][b]=A[a+5][b+1]+B[a]*D[a]-C[a];
	    
	     A[a][b]=A[a+2][b+2]+0.523;
	    
	     B[a]=A[a][b]-D[a]*C[a];
	    
	     D[a]=C[a]*B[a]/A[a][b]+D[a];
	     C[a]=C[a-1]*A[a][b]-B[a];
	    
	     double var_a=C[a]+0.47;
	  }

    return 0;
}