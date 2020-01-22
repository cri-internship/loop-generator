#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(860, "zeros");
	int *A = create_one_dim_int(820, "zeros");

	for (int c = 4; c < 815; c++)
	  for (int b = 4; b < 815; b++)
	    for (int a = 4; a < 815; a++)
	    {
	      
	      A[a]=A[a-4]*B[a];
	      
	      A[a]=A[a+1]-23;
	      
	      B[a]=15;
	      B[a+4]=43;
	      
	      int var_a=A[a]+43;
	      int var_b=A[a+5]+23;
	      
	      int var_c=B[a]-17;
	      int var_d=B[a+5]/15;
	    }

    return 0;
}