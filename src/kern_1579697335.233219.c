#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(940, "random");
	int ***B = create_three_dim_int(470, 30, 620, "random");

	for (int c = 0; c < 940; c++)
	  for (int b = 0; b < 940; b++)
	    for (int a = 0; a < 940; a++)
	    {
	      
	      int var_a=A[a]-25;
	      A[a]=17;
	    }

    return 0;
}