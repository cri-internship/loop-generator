#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(670, "random");
	double **A = create_two_dim_double(330, 470, "random");
	double *C = create_one_dim_double(160, "random");

	for (int b = 0; b < 468; b++)
	  for (int a = 5; a < 160; a++)
	  {
	    
	     A[a][b]=A[a+5][b+2]/0.3;
	    
	     C[a]=0.193;
	     C[a-5]=B[a]-B[a];
	    
	     B[a]=0.989;
	     B[a+3]=0.987;
	  }

    return 0;
}