#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(40, 150, 80, "random");
	int **B = create_two_dim_int(50, 50, "random");
	int *A = create_one_dim_int(100, "random");

	for (int b = 0; b < 48; b++)
	  for (int a = 3; a < 39; a++)
	  {
	    
	     A[a-3]=41;
	     A[a]=A[a-3]*C[a][b][a]/C[a][b][a];
	    
	     C[a][b][a]=C[a-1][b][a]+1*A[a];
	    
	     B[a][b]=A[a-3]-B[a][b];
	     A[a-3]=C[a][b][a];
	    
	     B[a][b]=B[a+1][b+2]+32;
	    
	     B[a-1][b+1]=A[a];
	     B[a-1][b+1]=8;
	    
	     A[a]=C[a][b][a]*B[a][b]+A[a];
	     B[a][b]=C[a+1][b][a]-A[a]+B[a][b];
	    
	     int var_a=A[a+3]-14;
	     int var_b=A[a+7]+49;
	  }

    return 0;
}