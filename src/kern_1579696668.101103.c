#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(150, "ones");
	int *A = create_one_dim_int(550, "ones");

	for (int b = 4; b < 149; b++)
	  for (int a = 4; a < 149; a++)
	  {
	    
	     A[a]=A[a-1]*26;
	    
	     B[a]=B[a-1]/30;
	    
	     A[a]=A[a-4]+21;
	    
	     B[a]=B[a+1]+28;
	    
	     int var_a=A[a]/39;
	     int var_b=A[a+5]-47;
	    
	     int var_c=A[a]/34;
	    
	     B[a]=A[a]/B[a];
	  }

    return 0;
}