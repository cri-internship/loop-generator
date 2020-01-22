#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(410, 570, 830, "random");
	double **B = create_two_dim_double(650, 200, "random");

	for (int b = 3; b < 197; b++)
	  for (int a = 5; a < 410; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-2][a-3]/0.452;
	    
	     B[a][b]=B[a-5][b-3]/A[a][b][a];
	    
	     A[a][b][a]=0.463;
	    
	     B[a][b]=0.202;
	    
	     double var_a=A[a][b][a]+0.483;
	     double var_b=A[a-4][b-2][a-5]*0.722;
	    
	     double var_c=B[a][b]+0.884;
	     double var_d=B[a][b+2]/0.529;
	  }

    return 0;
}