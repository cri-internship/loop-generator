#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(370, 340, 470, "random");
	double *B = create_one_dim_double(480, "random");

	for (int b = 3; b < 479; b++)
	  for (int a = 3; a < 479; a++)
	  {
	    
	     B[a]=B[a-2]+0.113;
	    
	     B[a]=B[a+1]+0.343;
	    
	     B[a]=A[a][b][a];
	    
	     double var_a=B[a]*0.253;
	     double var_b=B[a]-0.505;
	  }

    return 0;
}