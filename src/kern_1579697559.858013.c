#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(170, 420, 430, "ones");
	int *A = create_one_dim_int(1000, "ones");

	for (int b = 4; b < 417; b++)
	  for (int a = 4; a < 169; a++)
	  {
	    
	     A[a]=A[a-1]/28;
	    
	     A[a]=A[a-3]+B[a][b][a];
	    
	     B[a][b][a]=B[a+1][b+3][a]+29;
	    
	     A[a]=A[a+1]/22;
	    
	     int var_a=B[a][b][a]/15;
	     int var_b=B[a-2][b-4][a-1]+20;
	    
	     A[a]=A[a]-B[a][b][a];
	     B[a][b][a]=A[a+4]-B[a][b][a];
	  }

    return 0;
}