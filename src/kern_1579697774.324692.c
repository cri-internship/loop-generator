#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(540, 780, 340, "zeros");
	float **A = create_two_dim_float(520, 130, "zeros");

	for (int b = 3; b < 127; b++)
	  for (int a = 5; a < 517; a++)
	  {
	    
	     A[a][b]=A[a-2][b-1]-B[a][b][a];
	    
	     A[a][b]=A[a+3][b+3]*0.834;
	    
	     B[a][b][a]=B[a][b+3][a+5]+A[a][b];
	    
	     A[a][b]=A[a+1][b]+0.527;
	    
	     B[a][b][a]=0.43;
	  }

    return 0;
}