#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(270, 600, "random");
	int *A = create_one_dim_int(470, "random");

	for (int b = 5; b < 466; b++)
	  for (int a = 5; a < 466; a++)
	  {
	    
	     A[a]=A[a-5]/B[a][b];
	    
	     float  var_a=A[a]+40;
	    
	     A[a]=19;
	  }

    return 0;
}