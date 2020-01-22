#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(620, 220, "random");

	for (int b = 0; b < 220; b++)
	  for (int a = 2; a < 620; a++)
	  {
	    
	     A[a][b]=A[a-2][b]+0.174;
	  }

    return 0;
}