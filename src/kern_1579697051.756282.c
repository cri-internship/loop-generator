#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(320, 10, 170, "ones");
	float **A = create_two_dim_float(790, 640, "ones");

	for (int b = 5; b < 638; b++)
	  for (int a = 4; a < 789; a++)
	  {
	    
	     A[a][b]=A[a+1][b+1]*0.174;
	    
	     A[a][b]=0.301;
	    
	     B[a][b][a]=A[a][b]*B[a][b][a];
	     A[a][b]=A[a-4][b-4]+B[a][b][a];
	    
	     B[a][b][a]=A[a][b]*B[a][b][a];
	     A[a][b]=A[a][b+2]/0.4;
	  }

    return 0;
}