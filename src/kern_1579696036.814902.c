#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(410, "random");

	for (int b = 4; b < 410; b++)
	  for (int a = 4; a < 410; a++)
	  {
	    
	     A[a]=26;
	     A[a-2]=1;
	    
	     A[a]=37;
	    
	     int var_a=A[a]+34;
	     int var_b=A[a]*33;
	  }

    return 0;
}