#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(400, 780, "zeros");
	int *B = create_one_dim_int(50, "zeros");

	for (int b = 0; b < 779; b++)
	  for (int a = 5; a < 46; a++)
	  {
	    
	     A[a][b]=A[a-1][b]*26;
	    
	     B[a]=A[a][b];
	     B[a]=B[a]+A[a][b];
	    
	     A[a][b]=B[a];
	    
	     int var_a=B[a]-7;
	     int var_b=B[a+4]*31;
	    
	     int var_c=B[a]+15;
	     int var_d=B[a+2]+31;
	  }

    return 0;
}