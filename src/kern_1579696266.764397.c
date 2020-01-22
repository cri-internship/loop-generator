#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(720, "ones");
	int *C = create_one_dim_int(480, "ones");
	int *A = create_one_dim_int(80, "ones");
	int *D = create_one_dim_int(700, "ones");

	for (int b = 0; b < 717; b++)
	  for (int a = 0; a < 717; a++)
	  {
	    
	     B[a]=48;
	     B[a+3]=0;
	    
	     int var_a=B[a]*40;
	     int var_b=B[a+2]-36;
	  }

    return 0;
}