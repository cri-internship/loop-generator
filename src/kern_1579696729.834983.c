#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(630, "zeros");
	int **B = create_two_dim_int(410, 300, "zeros");

	for (int b = 0; b < 297; b++)
	  for (int a = 3; a < 410; a++)
	  {
	    
	     B[a][b]=14;
	     float  var_a=B[a][b]+39;
	    
	     A[a]=A[a+2]*40;
	    
	     B[a][b]=22;
	    
	     B[a][b]=A[a]+19;
	     A[a]=A[a-3]-2;
	    
	     int var_b=A[a]-1;
	  }

    return 0;
}