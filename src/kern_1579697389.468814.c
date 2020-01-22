#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(510, "zeros");
	int *A = create_one_dim_int(610, "zeros");
	int *C = create_one_dim_int(200, "zeros");

	for (int b = 3; b < 198; b++)
	  for (int a = 3; a < 198; a++)
	  {
	    
	     A[a]=A[a-1]-47;
	    
	     C[a]=C[a+1]-A[a]/A[a];
	    
	     C[a]=C[a+2]/17;
	    
	     B[a]=C[a];
	     B[a+3]=C[a]*A[a];
	    
	     B[a]=12;
	    
	     int var_a=C[a]/30;
	     int var_b=C[a-1]-38;
	  }

    return 0;
}