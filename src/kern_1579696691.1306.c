#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(470, 910, 960, "random");

	for (int b = 3; b < 907; b++)
	  for (int a = 5; a < 465; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-3][a-5]+0.574;
	    
	     A[a][b][a]=A[a+5][b+1][a+3]-0.464;
	    
	     double var_a=A[a][b][a]+0.486;
	     double var_b=A[a+5][b+3][a+1]*0.901;
	  }

    return 0;
}