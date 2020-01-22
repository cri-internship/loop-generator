#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(910, "random");
	int **B = create_two_dim_int(280, 370, "random");
	int **A = create_two_dim_int(780, 800, "random");

	for (int b = 0; b < 797; b++)
	  for (int a = 0; a < 779; a++)
	  {
	    
	     int var_a=C[a]+39;
	     C[a]=31;
	    
	     C[a]=C[a+2]/18;
	    
	     int var_b=A[a][b]*50;
	     int var_c=A[a+1][b+3]+20;
	  }

    return 0;
}