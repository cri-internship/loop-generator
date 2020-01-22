#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(120, 850, "random");
	int *A = create_one_dim_int(710, "random");
	int *D = create_one_dim_int(200, "random");
	int **B = create_two_dim_int(220, 360, "random");

	for (int b = 0; b < 850; b++)
	  for (int a = 0; a < 120; a++)
	  {
	    
	     C[a][b]=A[a]*0;
	     A[a]=C[a][b]/12-A[a]*D[a];
	    
	     D[a]=D[a+2]*38;
	    
	     D[a]=47;
	  }

    return 0;
}