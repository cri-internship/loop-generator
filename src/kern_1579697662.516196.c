#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(830, 860, 870, "zeros");
	int ***B = create_three_dim_int(450, 890, 280, "zeros");

	for (int b = 1; b < 890; b++)
	  for (int a = 5; a < 450; a++)
	  {
	    
	     B[a][b][a]=A[a][b][a];
	     B[a][b-1][a-1]=21;
	    
	     B[a][b][a]=42;
	  }

    return 0;
}