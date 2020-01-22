#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(530, 420, "ones");
	double ***A = create_three_dim_double(600, 800, 870, "ones");
	double **C = create_two_dim_double(970, 1000, "ones");

	for (int c = 0; c < 995; c++)
	  for (int b = 0; b < 967; b++)
	    for (int a = 0; a < 967; a++)
	    {
	      
	      C[a][b]=C[a+3][b+5]+0.902;
	    }

    return 0;
}