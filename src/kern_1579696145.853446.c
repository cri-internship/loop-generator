#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(300, 780, 920, "ones");
	int ***B = create_three_dim_int(480, 110, 170, "ones");

	for (int b = 5; b < 108; b++)
	  for (int a = 4; a < 295; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-2][a-4]-A[a][b][a];
	    
	     B[a][b][a]=B[a+1][b+2][a+1]/A[a][b][a];
	    
	     A[a][b][a]=B[a][b][a];
	     A[a+2][b+3][a+3]=B[a][b][a];
	    
	     A[a][b][a]=B[a][b][a];
	  }

    return 0;
}