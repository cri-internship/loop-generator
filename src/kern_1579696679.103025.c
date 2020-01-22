#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(200, 590, 660, "ones");
	float **A = create_two_dim_float(630, 30, "ones");

	for (int b = 1; b < 26; b++)
	  for (int a = 4; a < 626; a++)
	  {
	    
	     A[a][b]=A[a+4][b+4]*0.958;
	    
	     A[a][b]=0.779;
	  }

    return 0;
}