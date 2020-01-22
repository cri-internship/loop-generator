#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(490, "ones");
	int *D = create_one_dim_int(500, "ones");
	int *A = create_one_dim_int(270, "ones");
	int ***C = create_three_dim_int(990, 20, 740, "ones");

	for (int b = 4; b < 489; b++)
	  for (int a = 4; a < 489; a++)
	  {
	    
	     B[a]=B[a-2]*A[a]+D[a];
	    
	     B[a]=B[a+1]+23;
	    
	     D[a]=C[a][b][a];
	     D[a+5]=B[a]/27;
	    
	     int var_a=B[a]+5;
	     int var_b=B[a-4]+38;
	    
	     D[a]=D[a]*A[a];
	     B[a]=D[a]/C[a][b][a]*A[a];
	  }

    return 0;
}