#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(40, "ones");
	double *A = create_one_dim_double(520, "ones");

	for (int b = 2; b < 36; b++)
	  for (int a = 2; a < 36; a++)
	  {
	    
	     A[a]=B[a];
	     B[a]=A[a]+B[a];
	    
	     B[a]=B[a+1]/A[a];
	    
	     B[a]=B[a+4]-A[a];
	    
	     A[a]=A[a+5]+0.698;
	    
	     A[a]=A[a+4]/B[a];
	    
	     A[a]=B[a]/A[a];
	     B[a]=B[a-2]+A[a];
	    
	     A[a]=A[a]+B[a];
	     B[a]=A[a-2]+B[a];
	  }

    return 0;
}