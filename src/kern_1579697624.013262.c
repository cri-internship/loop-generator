#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(580, 340, 840, "ones");
	int ***B = create_three_dim_int(340, 800, 210, "ones");

	for (int b = 1; b < 340; b++)
	  for (int a = 2; a < 337; a++)
	  {
	    
	     A[a][b][a]=A[a+4][b][a+2]+18;
	    
	     B[a][b][a]=20;
	     B[a-2][b-1][a-2]=44;
	    
	     int var_a=B[a][b][a]*49;
	     int var_b=B[a+3][b+2][a+3]/26;
	  }

    return 0;
}