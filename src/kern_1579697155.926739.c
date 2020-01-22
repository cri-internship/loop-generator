#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(450, "random");
	int *A = create_one_dim_int(260, "random");

	for (int b = 2; b < 257; b++)
	  for (int a = 2; a < 257; a++)
	  {
	    
	     A[a]=50;
	     A[a+3]=14;
	    
	     B[a]=19;
	     B[a-2]=A[a];
	  }

    return 0;
}