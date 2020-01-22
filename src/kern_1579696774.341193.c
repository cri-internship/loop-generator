#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(790, 320, "ones");
	double *D = create_one_dim_double(80, "ones");
	double *E = create_one_dim_double(120, "ones");
	double *B = create_one_dim_double(540, "ones");
	double **C = create_two_dim_double(130, 750, "ones");

	for (int b = 2; b < 320; b++)
	  for (int a = 3; a < 80; a++)
	  {
	    
	     A[a][b]=A[a-3][b-2]*0.297-C[a][b];
	    
	     C[a][b]=C[a+2][b+4]-E[a]*B[a];
	    
	     C[a][b]=A[a][b]/D[a]+E[a];
	    
	     E[a]=0.276/D[a]*C[a][b]-B[a];
	     E[a+4]=B[a]-D[a]/C[a][b];
	  }

    return 0;
}