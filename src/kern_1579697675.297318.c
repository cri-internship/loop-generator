#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(620, "random");
	int *B = create_one_dim_int(490, "random");

	for (int d = 2; d < 487; d++)
	  for (int c = 2; c < 487; c++)
	    for (int b = 2; b < 487; b++)
	      for (int a = 2; a < 487; a++)
	      {
	        
	       B[a]=B[a+1]+46;
	        
	       A[a]=A[a+2]-47;
	        
	       B[a]=B[a+3]-21;
	        
	       int var_a=A[a]+10;
	       int var_b=A[a-2]-21;
	        
	       int var_c=B[a]+49;
	        
	       int var_e=B[a]+33;
	       int var_f=B[a-1]-26;
	      }

    return 0;
}