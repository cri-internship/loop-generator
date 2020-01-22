#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(650, 280, 90, "random");

	for (int b = 3; b < 280; b++)
	  for (int a = 3; a < 650; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-3][a-1]-19;
	    
	     int var_a=A[a][b][a]*42;
	     int var_b=A[a-3][b][a-2]+27;
	  }

    return 0;
}