#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(220, 360, "random");
	float **C = create_two_dim_float(470, 580, "random");
	float ***B = create_three_dim_float(780, 770, 740, "random");

	for (int c = 0; c < 359; c++)
	  for (int b = 0; b < 219; b++)
	    for (int a = 0; a < 219; a++)
	    {
	      
	      A[a][b]=A[a+1][b+1]*0.96;
	      
	      A[a][b]=0.624;
	    }

    return 0;
}