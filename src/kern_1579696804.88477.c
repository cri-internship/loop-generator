#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(1000, 450, 510, "random");

	for (int b = 4; b < 445; b++)
	  for (int a = 2; a < 998; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+5][a]+20;
	    
	     int var_a=A[a][b][a]+40;
	     int var_b=A[a-2][b-4][a-2]+23;
	  }

    return 0;
}