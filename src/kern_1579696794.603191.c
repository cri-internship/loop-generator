#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(730, 380, 90, "ones");
	float ***B = create_three_dim_float(750, 650, 470, "ones");

	for (int b = 0; b < 646; b++)
	  for (int a = 0; a < 747; a++)
	  {
	    
	     B[a][b][a]=B[a+3][b+4][a+2]-0.408;
	  }

    return 0;
}