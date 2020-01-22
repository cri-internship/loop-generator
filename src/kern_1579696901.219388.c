#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(680, 660, "zeros");

	for (int b = 3; b < 660; b++)
	  for (int a = 3; a < 680; a++)
	  {
	    
	     A[a][b]=A[a-3][b-3]+0.228;
	  }

    return 0;
}