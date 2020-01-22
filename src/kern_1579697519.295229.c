#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(260, 650, 550, "ones");
	float **A = create_two_dim_float(280, 370, "ones");

	for (int c = 0; c < 368; c++)
	  for (int b = 0; b < 276; b++)
	    for (int a = 0; a < 276; a++)
	    {
	      
	      A[a][b]=A[a+4][b+2]+0.0;
	    }

    return 0;
}