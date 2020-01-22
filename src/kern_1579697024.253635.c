#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(280, "ones");
	double *A = create_one_dim_double(620, "ones");

	for (int b = 5; b < 280; b++)
	  for (int a = 5; a < 280; a++)
	  {
	    
	     B[a]=B[a-5]+0.506;
	    
	     A[a]=A[a-1]+B[a];
	    
	     A[a]=A[a+3]-0.553;
	    
	     A[a]=A[a+1]-B[a];
	    
	     B[a]=0.457;
	  }

    return 0;
}