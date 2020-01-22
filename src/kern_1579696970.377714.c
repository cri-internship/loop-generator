#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(220, "zeros");
	int *C = create_one_dim_int(370, "zeros");
	int **D = create_two_dim_int(50, 430, "zeros");
	int **B = create_two_dim_int(20, 70, "zeros");

	for (int c = 4; c < 370; c++)
	  for (int b = 4; b < 370; b++)
	    for (int a = 4; a < 370; a++)
	    {
	      
	      C[a]=C[a-4]+11;
	      
	      C[a]=C[a-1]*A[a];
	    }

    return 0;
}