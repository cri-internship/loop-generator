#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(270, 850, 910, "ones");
	double *B = create_one_dim_double(540, "ones");

	for (int b = 5; b < 848; b++)
	  for (int a = 5; a < 266; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-5][a]/B[a];
	    
	     B[a]=B[a+4]*0.95;
	    
	     B[a]=0.221;
	    
	     A[a][b][a]=1.0;
	    
	     A[a][b][a]=A[a][b][a]/0.959;
	     B[a]=A[a+4][b+2][a]-B[a];
	  }

    return 0;
}