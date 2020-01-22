#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(230, 850, "ones");
	int **A = create_two_dim_int(640, 400, "ones");

	for (int c = 0; c < 849; c++)
	  for (int b = 0; b < 230; b++)
	    for (int a = 0; a < 230; a++)
	    {
	      
	      B[a][b]=B[a][b+1]*15;
	    }

    return 0;
}