#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(1000, 630, 390, "zeros");
	float ***A = create_three_dim_float(700, 360, 220, "zeros");

	for (int b = 4; b < 358; b++)
	  for (int a = 5; a < 697; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-4][a-4]/B[a][b][a];
	    
	     B[a][b][a]=B[a+2][b+1][a+2]/0.346;
	    
	     A[a][b][a]=A[a+3][b+2][a+1]-0.593;
	    
	     B[a][b][a]=0.447;
	    
	     B[a][b][a]=A[a][b][a]*B[a][b][a];
	     A[a][b][a]=A[a-4][b][a-5]-0.691;
	  }

    return 0;
}