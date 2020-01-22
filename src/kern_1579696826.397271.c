#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(880, 370, 940, "random");
	float **B = create_two_dim_float(990, 560, "random");

	for (int b = 5; b < 365; b++)
	  for (int a = 5; a < 875; a++)
	  {
	    
	     B[a][b]=B[a-5][b-4]*0.063;
	    
	     A[a][b][a]=A[a][b+5][a+2]*0.16;
	    
	     A[a][b][a]=0.296;
	    
	     A[a][b][a]=A[a][b][a]/B[a][b];
	     B[a][b]=A[a-1][b-5][a-2]-B[a][b];
	  }

    return 0;
}