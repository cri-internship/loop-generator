#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(680, 900, "random");
	double *A = create_one_dim_double(880, "random");
	double **B = create_two_dim_double(990, 190, "random");
	double **D = create_two_dim_double(110, 620, "random");

	for (int b = 3; b < 615; b++)
	  for (int a = 4; a < 105; a++)
	  {
	    
	     D[a][b]=D[a-4][b-3]+0.6;
	    
	     C[a][b]=C[a+3][b]/0.731;
	    
	     D[a][b]=D[a+2][b+5]*C[a][b];
	    
	     D[a][b]=D[a+5][b+4]+0.074;
	    
	     C[a][b]=C[a][b]-B[a][b]+D[a][b];
	     B[a][b]=C[a-1][b-2]-A[a];
	  }

    return 0;
}