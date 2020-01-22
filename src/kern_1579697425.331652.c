#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(300, "ones");
	int **B = create_two_dim_int(870, 450, "ones");

	for (int b = 4; b < 449; b++)
	  for (int a = 2; a < 296; a++)
	  {
	    
	     B[a][b]=B[a-2][b-4]/32;
	    
	     A[a]=A[a-2]-24;
	    
	     A[a]=A[a+4]+B[a][b];
	    
	     B[a][b]=22;
	    
	     int var_a=A[a]+1;
	     int var_b=A[a-1]+32;
	  }

    return 0;
}