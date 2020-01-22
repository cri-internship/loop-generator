#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(910, 200, "zeros");
	int *B = create_one_dim_int(840, "zeros");

	for (int b = 0; b < 197; b++)
	  for (int a = 3; a < 837; a++)
	  {
	    
	     B[a]=B[a-3]/20;
	    
	     A[a][b]=A[a+1][b+1]+15;
	    
	     B[a]=A[a][b];
	    
	     A[a][b]=B[a];
	    
	     A[a][b]=B[a]*A[a][b];
	     B[a]=B[a+3]*A[a][b];
	    
	     A[a][b]=A[a][b]/B[a];
	     A[a][b]=A[a+4][b+3]/B[a];
	  }

    return 0;
}