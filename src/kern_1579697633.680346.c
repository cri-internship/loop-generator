#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(280, "zeros");
	int *B = create_one_dim_int(420, "zeros");
	int *A = create_one_dim_int(100, "zeros");
	int **D = create_two_dim_int(840, 770, "zeros");

	for (int b = 3; b < 768; b++)
	  for (int a = 2; a < 420; a++)
	  {
	    
	     D[a][b]=D[a-2][b-3]*34;
	    
	     B[a]=27;
	     float  var_a=B[a]+34;
	    
	     D[a][b]=D[a][b+2]+2;
	  }

    return 0;
}