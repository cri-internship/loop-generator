#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(940, "zeros");
	float **A = create_two_dim_float(830, 680, "zeros");
	float ***B = create_three_dim_float(180, 740, 290, "zeros");

	for (int b = 4; b < 677; b++)
	  for (int a = 4; a < 825; a++)
	  {
	    
	     A[a][b]=A[a+5][b+3]/0.208;
	    
	     A[a][b]=A[a][b+3]-0.222;
	  }

    return 0;
}