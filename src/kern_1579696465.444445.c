#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(940, "ones");
	int **B = create_two_dim_int(740, 870, "ones");

	for (int b = 0; b < 867; b++)
	  for (int a = 5; a < 736; a++)
	  {
	    
	     A[a]=A[a-2]+B[a][b];
	    
	     B[a][b]=A[a];
	     B[a+4][b+3]=4;
	    
	     A[a]=B[a][b];
	    
	     int var_a=A[a]-24;
	  }

    return 0;
}