#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(10, 290, 910, "random");

	for (int b = 2; b < 288; b++)
	  for (int a = 2; a < 9; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-2][a-1]+0.35;
	    
	     A[a][b][a]=A[a+1][b+2][a]*0.24;
	  }

    return 0;
}