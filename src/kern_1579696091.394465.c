#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(490, 300, 670, "ones");
	float **B = create_two_dim_float(60, 550, "ones");

	for (int b = 3; b < 295; b++)
	  for (int a = 5; a < 59; a++)
	  {
	    
	     B[a][b]=B[a-1][b-2]/A[a][b][a];
	    
	     B[a][b]=B[a-5][b-2]/0.813;
	    
	     B[a][b]=B[a-1][b-3]/0.138;
	    
	     A[a][b][a]=A[a+1][b+5][a+2]-B[a][b];
	    
	     B[a][b]=B[a+1][b+1]+0.014;
	    
	     A[a][b][a]=0.831;
	  }

    return 0;
}