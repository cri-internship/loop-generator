#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(740, "ones");
	int *A = create_one_dim_int(720, "ones");

	for (int c = 5; c < 720; c++)
	  for (int b = 5; b < 720; b++)
	    for (int a = 5; a < 720; a++)
	    {
	      
	      A[a]=A[a-5]-B[a];
	      
	      B[a]=B[a-1]-A[a];
	      
	      B[a]=18;
	    }

    return 0;
}