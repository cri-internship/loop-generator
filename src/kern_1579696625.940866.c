#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(720, "zeros");
	int **B = create_two_dim_int(500, 230, "zeros");

	for (int b = 0; b < 227; b++)
	  for (int a = 3; a < 495; a++)
	  {
	    
	     A[a]=20;
	     float  var_a=A[a]+46;
	    
	     A[a]=A[a+5]-27;
	    
	     B[a][b]=B[a+5][b+3]*7;
	    
	     int var_b=B[a][b]/42;
	     int var_c=B[a][b+1]-24;
	  }

    return 0;
}