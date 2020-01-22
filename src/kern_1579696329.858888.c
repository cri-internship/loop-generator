#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(960, 50, "zeros");
	float ***A = create_three_dim_float(110, 190, 120, "zeros");
	float ***B = create_three_dim_float(110, 700, 460, "zeros");
	float *D = create_one_dim_float(400, "zeros");

	for (int c = 3; c < 397; c++)
	  for (int b = 3; b < 397; b++)
	    for (int a = 3; a < 397; a++)
	    {
	      
	      D[a]=D[a-3]*0.954;
	      
	      D[a]=D[a+3]-0.846;
	    }

    return 0;
}