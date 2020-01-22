#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(860, 280, "ones");
	double **B = create_two_dim_double(30, 530, "ones");

	for (int b = 1; b < 530; b++)
	  for (int a = 4; a < 30; a++)
	  {
	    
	     B[a][b]=B[a-4][b-1]+A[a][b];
	  }

    return 0;
}