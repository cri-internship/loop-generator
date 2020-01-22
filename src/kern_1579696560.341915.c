#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(660, "ones");
	float ***A = create_three_dim_float(540, 980, 400, "ones");

	for (int b = 0; b < 976; b++)
	  for (int a = 0; a < 535; a++)
	  {
	    
	     A[a][b][a]=A[a+5][b+4][a+4]*0.299;
	  }

    return 0;
}