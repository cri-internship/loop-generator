#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(140, "ones");
	int **A = create_two_dim_int(920, 210, "ones");
	int *C = create_one_dim_int(820, "ones");

	for (int b = 1; b < 210; b++)
	  for (int a = 5; a < 136; a++)
	  {
	    
	     A[a][b]=A[a-5][b-1]+B[a]-C[a];
	    
	     B[a]=B[a-2]/27;
	    
	     C[a]=C[a-4]-46;
	    
	     B[a]=B[a+4]-C[a];
	    
	     int var_a=C[a]-19;
	     C[a]=27;
	  }

    return 0;
}