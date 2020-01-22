#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(210, "zeros");
	int *B = create_one_dim_int(440, "zeros");

	for (int c = 5; c < 209; c++)
	  for (int b = 5; b < 209; b++)
	    for (int a = 5; a < 209; a++)
	    {
	      
	      B[a]=B[a-4]*45;
	      
	      B[a]=B[a-5]*35;
	      
	      A[a]=A[a+1]-B[a];
	      
	      A[a]=19;
	      
	      int var_b=A[a]/47;
	      int var_c=A[a]-16;
	      
	      int var_d=A[a]-22;
	      int var_e=A[a-5]+17;
	    }

    return 0;
}