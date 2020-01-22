#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(650, 220, 330, "zeros");

	for (int b = 5; b < 220; b++)
	  for (int a = 4; a < 650; a++)
	  {
	    
	     A[a][b][a]=0.668;
	     A[a-4][b-5][a]=0.912;
	  }

    return 0;
}