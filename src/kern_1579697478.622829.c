#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(620, "ones");
	int ***A = create_three_dim_int(100, 450, 610, "ones");
	int *B = create_one_dim_int(750, "ones");

	for (int b = 2; b < 450; b++)
	  for (int a = 5; a < 100; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-2][a-5]-34;
	    
	     int var_a=B[a]/36;
	     int var_b=B[a+2]*1;
	  }

    return 0;
}