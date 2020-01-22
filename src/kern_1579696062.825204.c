#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(40, 810, "ones");
	int **A = create_two_dim_int(460, 550, "ones");

	for (int b = 5; b < 549; b++)
	  for (int a = 5; a < 37; a++)
	  {
	    
	     B[a][b]=B[a-5][b-5]/25;
	    
	     B[a][b]=B[a+3][b+2]*A[a][b];
	    
	     A[a][b]=A[a+2][b]*22;
	    
	     A[a][b]=A[a+3][b+1]/16;
	    
	     A[a][b]=A[a][b]+15;
	     B[a][b]=A[a][b-3]*B[a][b];
	  }

    return 0;
}