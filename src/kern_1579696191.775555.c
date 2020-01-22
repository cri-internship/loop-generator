#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(800, "random");
	int *A = create_one_dim_int(690, "random");

	for (int c = 3; c < 685; c++)
	  for (int b = 3; b < 685; b++)
	    for (int a = 3; a < 685; a++)
	    {
	      
	      A[a]=46;
	      float  var_a=A[a]/41;
	      
	      A[a]=A[a+5]-B[a];
	      
	      B[a]=23;
	      B[a-2]=A[a];
	      
	      int var_b=B[a]+40;
	      int var_c=B[a-3]-22;
	    }

    return 0;
}