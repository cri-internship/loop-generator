#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(340, 220, "random");
	int *C = create_one_dim_int(770, "random");
	int **A = create_two_dim_int(160, 960, "random");

	for (int b = 0; b < 220; b++)
	  for (int a = 3; a < 158; a++)
	  {
	    
	     B[a][b]=B[a-1][b]-A[a][b]*C[a];
	    
	     C[a]=C[a-3]-24;
	    
	     A[a][b]=A[a+2][b+2]/6;
	  }

    return 0;
}