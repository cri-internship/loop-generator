#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(840, 120, 810, "random");
	double ***A = create_three_dim_double(630, 780, 480, "random");

	for (int b = 4; b < 117; b++)
	  for (int a = 5; a < 625; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-3][a-5]*B[a][b][a];
	    
	     B[a][b][a]=B[a-4][b-3][a-3]+0.953;
	    
	     B[a][b][a]=B[a-3][b-4][a-4]-0.347;
	    
	     A[a][b][a]=A[a-5][b-4][a-1]*B[a][b][a];
	    
	     A[a][b][a]=A[a+5][b+2][a+1]-0.369;
	    
	     B[a][b][a]=B[a+2][b+3][a]+0.627;
	  }

    return 0;
}