#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(450, 490, 980, "zeros");
	int *C = create_one_dim_int(910, "zeros");
	int ***B = create_three_dim_int(320, 240, 560, "zeros");

	for (int b = 0; b < 238; b++)
	  for (int a = 0; a < 319; a++)
	  {
	    
	     B[a][b][a]=B[a][b+2][a+1]/C[a]+A[a][b][a];
	  }

    return 0;
}