#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(770, 40, 180, "ones");
	int ***A = create_three_dim_int(980, 710, 60, "ones");

	for (int b = 0; b < 40; b++)
	  for (int a = 0; a < 767; a++)
	  {
	    
	     B[a][b][a]=B[a+3][b][a+3]+A[a][b][a];
	  }

    return 0;
}