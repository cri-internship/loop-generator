#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(920, 570, "zeros");
	int *D = create_one_dim_int(170, "zeros");
	int *B = create_one_dim_int(110, "zeros");
	int *C = create_one_dim_int(580, "zeros");

	for (int b = 2; b < 570; b++)
	  for (int a = 5; a < 110; a++)
	  {
	    
	     A[a][b]=A[a-5][b-2]+43;
	    
	     C[a]=C[a-1]+4;
	    
	     B[a]=B[a-5]+A[a][b]-D[a]/C[a];
	  }

    return 0;
}