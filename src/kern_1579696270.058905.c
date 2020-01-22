#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(260, "ones");
	int *B = create_one_dim_int(660, "ones");

	for (int b = 1; b < 260; b++)
	  for (int a = 1; a < 260; a++)
	  {
	    
	     B[a]=B[a-1]*A[a];
	    
	     A[a]=A[a-1]*0;
	    
	     int var_a=A[a]-2;
	     int var_b=A[a]+12;
	  }

    return 0;
}