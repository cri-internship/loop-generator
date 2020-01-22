#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(570, "random");
	double **A = create_two_dim_double(580, 860, "random");

	for (int b = 0; b < 858; b++)
	  for (int a = 0; a < 578; a++)
	  {
	    
	     A[a][b]=A[a][b]-B[a];
	     B[a]=A[a+2][b+2]*B[a];
	  }

    return 0;
}