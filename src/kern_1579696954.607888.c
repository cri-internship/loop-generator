#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(120, "ones");
	int *B = create_one_dim_int(910, "ones");
	int *C = create_one_dim_int(300, "ones");

	for (int c = 4; c < 119; c++)
	  for (int b = 4; b < 119; b++)
	    for (int a = 4; a < 119; a++)
	    {
	      
	      C[a]=C[a-4]*A[a]/B[a];
	      
	      B[a]=B[a+4]-9;
	      
	      C[a]=C[a+5]+38;
	      
	      C[a]=C[a+2]/A[a]-B[a];
	      
	      int var_a=A[a]+4;
	      int var_b=A[a+1]*1;
	      
	      B[a]=C[a]+B[a]*A[a];
	      C[a]=C[a+4]+A[a]/B[a];
	    }

    return 0;
}