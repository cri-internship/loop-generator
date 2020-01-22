#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(790, 790, 820, "ones");
	float **A = create_two_dim_float(380, 670, "ones");

	for (int b = 5; b < 670; b++)
	  for (int a = 2; a < 380; a++)
	  {
	    
	     A[a][b]=A[a-1][b]*0.199;
	    
	     A[a][b]=A[a-2][b-5]/0.949;
	  }

    return 0;
}