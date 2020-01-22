#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(60, 690, 170, "random");
	float ***B = create_three_dim_float(850, 120, 180, "random");

	for (int b = 3; b < 119; b++)
	  for (int a = 5; a < 55; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-1][a-2]+0.8;
	    
	     B[a][b][a]=B[a+4][b+1][a+3]*0.195;
	    
	     A[a][b][a]=0.39;
	     A[a+5][b+1][a+4]=B[a][b][a];
	  }

    return 0;
}