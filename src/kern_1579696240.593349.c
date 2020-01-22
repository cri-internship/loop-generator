#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(140, 480, "zeros");
	int **B = create_two_dim_int(270, 130, "zeros");

	for (int b = 5; b < 129; b++)
	  for (int a = 5; a < 140; a++)
	  {
	    
	     A[a][b]=A[a-4][b-5]*B[a][b];
	    
	     A[a][b]=B[a][b];
	    
	     B[a][b]=14;
	     B[a+3][b+1]=47;
	    
	     A[a][b]=B[a][b]/A[a][b];
	     B[a][b]=B[a-5][b-1]-38;
	    
	     int var_a=B[a][b]*45;
	     int var_b=B[a-3][b-3]+20;
	  }

    return 0;
}