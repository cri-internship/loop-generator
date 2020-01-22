#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(240, 940, "zeros");
	float ***B = create_three_dim_float(690, 270, 290, "zeros");

	for (int b = 5; b < 270; b++)
	  for (int a = 3; a < 237; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b][a-3]-A[a][b];
	    
	     B[a][b][a]=B[a][b][a-2]-A[a][b];
	    
	     A[a][b]=A[a+3][b]*B[a][b][a];
	    
	     A[a][b]=A[a][b+2]/0.423;
	  }

    return 0;
}