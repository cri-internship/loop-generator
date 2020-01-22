#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(540, "random");
	int *C = create_one_dim_int(440, "random");
	int **A = create_two_dim_int(730, 950, "random");

	for (int b = 5; b < 950; b++)
	  for (int a = 5; a < 437; a++)
	  {
	    
	     A[a][b]=A[a-5][b-5]+C[a];
	    
	     B[a]=B[a-1]/A[a][b]+C[a];
	    
	     B[a]=B[a+3]-A[a][b]/15;
	    
	     C[a]=C[a+1]+4;
	    
	     C[a]=C[a+3]*B[a]-B[a];
	    
	     int var_a=C[a]/27;
	     int var_b=C[a]+50;
	  }

    return 0;
}