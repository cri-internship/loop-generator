#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(720, "zeros");
	float ***B = create_three_dim_float(20, 700, 10, "zeros");
	float ***A = create_three_dim_float(990, 260, 740, "zeros");

	for (int c = 2; c < 720; c++)
	  for (int b = 2; b < 720; b++)
	    for (int a = 2; a < 720; a++)
	    {
	      
	      C[a]=0.165;
	      C[a-2]=0.185;
	    }

    return 0;
}