#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(700, 310, "random");
	int *A = create_one_dim_int(800, "random");
	int *C = create_one_dim_int(700, "random");

	for (int b = 0; b < 309; b++)
	  for (int a = 3; a < 698; a++)
	  {
	    
	     C[a]=C[a-3]*44;
	    
	     B[a][b]=B[a+2][b+1]-42;
	    
	     A[a]=A[a+2]+19;
	    
	     A[a]=A[a+1]-43;
	  }

    return 0;
}