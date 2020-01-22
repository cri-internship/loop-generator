#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(680, "random");
	int *C = create_one_dim_int(520, "random");
	int ***B = create_three_dim_int(710, 710, 160, "random");
	int *A = create_one_dim_int(120, "random");

	for (int b = 4; b < 118; b++)
	  for (int a = 4; a < 118; a++)
	  {
	    
	     C[a]=C[a-4]-36;
	    
	     A[a]=A[a+2]/10;
	    
	     D[a]=A[a]-C[a];
	     D[a+4]=A[a]/C[a]+10;
	    
	     A[a]=D[a]-C[a];
	  }

    return 0;
}