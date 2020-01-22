#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(530, 860, "random");
	int *C = create_one_dim_int(400, "random");
	int *A = create_one_dim_int(850, "random");

	for (int c = 3; c < 400; c++)
	  for (int b = 3; b < 400; b++)
	    for (int a = 3; a < 400; a++)
	    {
	      
	      C[a]=A[a];
	      C[a]=C[a]/B[a][b];
	      
	      int var_a=C[a]/26;
	      C[a]=42;
	      
	      A[a]=A[a+1]/29;
	      
	      A[a]=40;
	      
	      A[a]=A[a]-C[a];
	      B[a][b]=A[a-3]/B[a][b]-33;
	    }

    return 0;
}