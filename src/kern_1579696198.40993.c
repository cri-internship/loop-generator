#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(950, 570, 980, "ones");
	float ***A = create_three_dim_float(140, 570, 300, "ones");

	for (int b = 0; b < 565; b++)
	  for (int a = 0; a < 946; a++)
	  {
	    
	     B[a][b][a]=0.862;
	     B[a+2][b+5][a+4]=0.288;
	  }

    return 0;
}