#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(820, "random");
	double **D = create_two_dim_double(530, 520, "random");
	double **C = create_two_dim_double(820, 230, "random");
	double *A = create_one_dim_double(520, "random");
	double *E = create_one_dim_double(460, "random");

	for (int b = 0; b < 520; b++)
	  for (int a = 0; a < 526; a++)
	  {
	    
	     B[a]=0.903;
	     B[a+2]=D[a][b]/C[a][b]-A[a];
	    
	     D[a][b]=B[a]-E[a];
	     D[a+4][b]=C[a][b]*0.238;
	    
	     B[a]=0.873;
	  }

    return 0;
}