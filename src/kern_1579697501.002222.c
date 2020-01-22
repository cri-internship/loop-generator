#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(580, 90, 840, "zeros");
	float ***A = create_three_dim_float(550, 850, 910, "zeros");
	float *B = create_one_dim_float(880, "zeros");

	for (int c = 0; c < 879; c++)
	  for (int b = 0; b < 879; b++)
	    for (int a = 0; a < 879; a++)
	    {
	      
	      B[a]=0.369;
	      B[a+1]=0.014;
	    }

    return 0;
}