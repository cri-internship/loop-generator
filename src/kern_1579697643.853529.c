#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(590, 440, 560, "random");
	int *B = create_one_dim_int(730, "random");

	for (int b = 0; b < 438; b++)
	  for (int a = 4; a < 586; a++)
	  {
	    
	     B[a]=B[a-4]+A[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]*B[a];
	     B[a]=A[a+4][b+2][a+1]*B[a];
	  }

    return 0;
}