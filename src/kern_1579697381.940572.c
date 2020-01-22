#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(960, 330, 330, "ones");

	for (int b = 0; b < 329; b++)
	  for (int a = 0; a < 955; a++)
	  {
	    
	     A[a][b][a]=0.148;
	     A[a+5][b+1][a+1]=0.469;
	  }

    return 0;
}