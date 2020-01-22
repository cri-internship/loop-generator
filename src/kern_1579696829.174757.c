#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(230, 700, "random");
	int **A = create_two_dim_int(390, 80, "random");
	int **C = create_two_dim_int(160, 530, "random");
	int **B = create_two_dim_int(150, 990, "random");
	int **D = create_two_dim_int(690, 490, "random");

	for (int d = 2; d < 76; d++)
	  for (int c = 4; c < 150; c++)
	    for (int b = 4; b < 150; b++)
	      for (int a = 4; a < 150; a++)
	      {
	        
	       A[a][b]=A[a-3][b-1]/11;
	        
	       E[a][b]=E[a+5][b]-D[a][b]/A[a][b]+B[a][b];
	        
	       int var_a=B[a][b]-36;
	       int var_b=B[a-2][b-2]+33;
	        
	       B[a][b]=C[a][b]-E[a][b]*A[a][b]+B[a][b]/D[a][b];
	       C[a][b]=C[a-4][b-2]+29;
	        
	       E[a][b]=A[a][b]/45;
	       D[a][b]=A[a+4][b+4]-C[a][b]+B[a][b];
	      }

    return 0;
}