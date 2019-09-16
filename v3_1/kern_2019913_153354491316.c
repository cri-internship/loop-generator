#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(100, "random");
	int ***C = create_three_dim_int(50, 50, 50, "random");
	int **B = create_two_dim_int(50, 50, "random");

	for (int b = 0; b < 50; b++)
	  for (int a = 3; a < 49; a++)
	  {
	    
	     A[a-3]=B[a][b]+C[a][b][a];
	     B[a][b]=A[a-3]-C[a][b][a]+B[a][b];
	    
	     C[a][b][a]=C[a-1][b][a]+6*B[a][b];
	    
	     A[a]=A[a-3]+B[a][b];
	     A[a-3]=C[a][b][a];
	    
	     C[a][b][a]=C[a+1][b][a]*B[a][b]/A[a];
	    
	     int var_a=A[a-3]*42;
	     int var_b=A[a-1]-21;
	    
	     B[a][b]=C[a][b][a]*B[a][b]+A[a];
	    
	     int var_c=C[a][b][a]+14;
	  }

    return 0;
}