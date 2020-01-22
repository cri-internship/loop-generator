#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(650, 760, "ones");
	int *C = create_one_dim_int(30, "ones");
	int *A = create_one_dim_int(520, "ones");
	int *B = create_one_dim_int(100, "ones");
	int ***D = create_three_dim_int(800, 290, 280, "ones");

	for (int b = 3; b < 290; b++)
	  for (int a = 4; a < 26; a++)
	  {
	    
	     E[a][b]=E[a][b-3]*43;
	    
	     C[a]=C[a+4]-45;
	    
	     D[a][b][a]=50;
	     D[a+5][b][a]=18;
	    
	     C[a]=D[a][b][a]-C[a];
	     E[a][b]=D[a-3][b][a-4]/A[a]-B[a]+E[a][b]*A[a];
	    
	     int var_a=B[a]*13;
	     int var_b=B[a+3]/6;
	  }

    return 0;
}