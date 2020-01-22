#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(220, "random");
	int **B = create_two_dim_int(420, 700, "random");

	for (int b = 3; b < 700; b++)
	  for (int a = 4; a < 420; a++)
	  {
	    
	     B[a][b]=B[a-4][b-3]-19;
	  }

    return 0;
}