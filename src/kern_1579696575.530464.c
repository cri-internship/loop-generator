#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(840, "ones");
	double *A = create_one_dim_double(570, "ones");
	double **C = create_two_dim_double(630, 160, "ones");

	for (int b = 0; b < 838; b++)
	  for (int a = 0; a < 838; a++)
	  {
	    
	     B[a]=B[a+2]-C[a][b];
	    
	     B[a]=0.119;
	  }

    return 0;
}