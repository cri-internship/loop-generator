#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(790, "zeros");
	int *B = create_one_dim_int(510, "zeros");

	for (int b = 0; b < 507; b++)
	  for (int a = 0; a < 507; a++)
	  {
	    
	     B[a]=B[a+2]*37;
	    
	     A[a]=18;
	     A[a]=B[a];
	    
	     B[a]=5;
	    
	     int var_a=B[a]-4;
	    
	     int var_c=B[a]+36;
	     int var_d=B[a+3]*49;
	  }

    return 0;
}