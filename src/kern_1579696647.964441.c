#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(960, "ones");
	double *A = create_one_dim_double(300, "ones");
	double **C = create_two_dim_double(230, 460, "ones");

	for (int b = 4; b < 298; b++)
	  for (int a = 4; a < 298; a++)
	  {
	    
	     A[a]=A[a-2]/0.747;
	    
	     B[a]=B[a+4]+0.4;
	    
	     B[a]=B[a+5]*0.652;
	    
	     A[a]=0.152;
	    
	     C[a][b]=B[a]*C[a][b];
	     B[a]=B[a-4]/A[a]-C[a][b];
	  }

    return 0;
}