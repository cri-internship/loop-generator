#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(50, "ones");
	int ***A = create_three_dim_int(480, 670, 450, "ones");

	for (int b = 4; b < 667; b++)
	  for (int a = 4; a < 46; a++)
	  {
	    
	     A[a][b][a]=A[a+1][b+3][a+3]-B[a];
	    
	     B[a]=A[a][b][a];
	     B[a+4]=38;
	    
	     A[a][b][a]=B[a];
	    
	     int var_a=B[a]+19;
	     int var_b=B[a-4]+37;
	  }

    return 0;
}