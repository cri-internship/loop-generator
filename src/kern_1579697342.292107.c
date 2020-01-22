#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(900, 630, 160, "ones");
	float ***A = create_three_dim_float(160, 380, 820, "ones");

	for (int b = 4; b < 376; b++)
	  for (int a = 5; a < 157; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-4][a-4]+A[a][b][a];
	    
	     A[a][b][a]=A[a-5][b-3][a-4]+B[a][b][a];
	    
	     A[a][b][a]=A[a+3][b+4][a]+0.949;
	  }

    return 0;
}