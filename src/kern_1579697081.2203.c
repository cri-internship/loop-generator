#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(630, "ones");
	int *A = create_one_dim_int(540, "ones");
	int *B = create_one_dim_int(960, "ones");

	for (int b = 4; b < 540; b++)
	  for (int a = 4; a < 540; a++)
	  {
	    
	     B[a]=B[a-2]+17;
	    
	     int var_a=A[a]/29;
	     int var_b=A[a-4]/41;
	    
	     int var_c=A[a]-6;
	    
	     A[a]=B[a]-C[a];
	     B[a]=B[a+4]/C[a]+A[a];
	    
	     int var_e=B[a]-24;
	  }

    return 0;
}