#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(830, 820, 120, "ones");
	int *A = create_one_dim_int(500, "ones");
	int **E = create_two_dim_int(100, 840, "ones");
	int **D = create_two_dim_int(910, 460, "ones");
	int *C = create_one_dim_int(520, "ones");

	for (int c = 4; c < 520; c++)
	  for (int b = 4; b < 520; b++)
	    for (int a = 4; a < 520; a++)
	    {
	      
	      C[a]=C[a-4]-24;
	      
	      float  var_a=C[a]*10;
	    }

    return 0;
}