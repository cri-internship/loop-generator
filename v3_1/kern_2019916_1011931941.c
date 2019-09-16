#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 50, "random");
	int ***C = create_three_dim_int(50, 50, 50, "random");
	int *A = create_one_dim_int(100, "random");

	for (int b = 0; b < 48; b++)
	  for (int a = 3; a < 49; a++)
	  {
	    
	     A[a-3]=C[a][b][a]+B[a][b];
	     A[a]=A[a-3]+38;
	    
	     C[a][b][a]=C[a-1][b][a]+26-B[a][b];
	    
	     B[a][b]=A[a-3]-39/B[a][b];
	     A[a-3]=B[a][b];
	    
	     B[a][b]=B[a+1][b+2]/38;
	    
	     B[a-1][b+1]=C[a][b][a];
	     B[a-1][b+1]=A[a]*C[a][b][a];
	    
	     B[a][b]=C[a][b][a]+B[a][b];
	     A[a]=C[a+1][b][a]-B[a][b];
	    
	     int var_a=A[a+3]-10;
	     int var_b=A[a-1]+17;
	  }

    return 0;
}