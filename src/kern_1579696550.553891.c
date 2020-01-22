#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(280, 420, 640, "ones");
	double **B = create_two_dim_double(900, 240, "ones");

	for (int b = 3; b < 240; b++)
	  for (int a = 2; a < 275; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-3][a-1]/0.966;
	    
	     B[a][b]=0.933;
	     float  var_a=B[a][b]*0.48;
	    
	     double var_b=A[a][b][a]-0.366;
	     double var_c=A[a+5][b][a+1]+0.444;
	  }

    return 0;
}