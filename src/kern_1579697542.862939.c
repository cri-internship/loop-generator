#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(310, 190, "zeros");
	int **B = create_two_dim_int(60, 530, "zeros");

	for (int b = 0; b < 527; b++)
	  for (int a = 0; a < 57; a++)
	  {
	    
	     B[a][b]=B[a+3][b+3]-5;
	    
	     B[a][b]=45;
	  }

    return 0;
}