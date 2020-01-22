#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(90, "ones");
	int **B = create_two_dim_int(140, 680, "ones");

	for (int b = 5; b < 676; b++)
	  for (int a = 3; a < 90; a++)
	  {
	    
	     A[a]=A[a-1]/B[a][b];
	    
	     A[a]=A[a-3]-20;
	    
	     B[a][b]=B[a+1][b]-A[a];
	    
	     B[a][b]=22;
	    
	     B[a][b]=B[a][b]*A[a];
	     A[a]=B[a-2][b-2]+A[a];
	    
	     int var_a=B[a][b]/15;
	     int var_b=B[a-1][b-5]-50;
	  }

    return 0;
}