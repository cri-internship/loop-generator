#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(590, "random");
	int ***B = create_three_dim_int(280, 130, 240, "random");

	for (int b = 0; b < 126; b++)
	  for (int a = 5; a < 275; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b][a-4]-27;
	    
	     B[a][b][a]=B[a+3][b+1][a+3]-A[a];
	    
	     B[a][b][a]=B[a+5][b+4][a+3]/27;
	    
	     A[a]=41;
	     A[a-3]=B[a][b][a];
	    
	     A[a]=A[a]*34;
	     B[a][b][a]=A[a+1]+B[a][b][a];
	  }

    return 0;
}