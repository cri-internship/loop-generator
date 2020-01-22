#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(60, 700, "random");
	int *C = create_one_dim_int(380, "random");
	int **B = create_two_dim_int(800, 320, "random");
	int *D = create_one_dim_int(430, "random");

	for (int b = 0; b < 315; b++)
	  for (int a = 2; a < 380; a++)
	  {
	    
	     B[a][b]=42;
	     B[a+3][b+5]=12;
	    
	     B[a][b]=4;
	    
	     int var_a=C[a]*45;
	     int var_b=C[a-2]/12;
	  }

    return 0;
}