#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(750, "zeros");
	int **B = create_two_dim_int(990, 370, "zeros");
	int *A = create_one_dim_int(220, "zeros");

	for (int b = 1; b < 370; b++)
	  for (int a = 1; a < 215; a++)
	  {
	    
	     B[a][b]=B[a-1][b-1]/A[a];
	    
	     A[a]=C[a]*B[a][b];
	     B[a][b]=A[a]/C[a]+B[a][b];
	    
	     A[a]=A[a+3]+34;
	    
	     C[a]=C[a+2]+27;
	  }

    return 0;
}