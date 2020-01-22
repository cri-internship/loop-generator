#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(350, 640, "random");
	int **D = create_two_dim_int(760, 650, "random");
	int ***B = create_three_dim_int(690, 420, 480, "random");
	int *E = create_one_dim_int(820, "random");
	int *C = create_one_dim_int(300, "random");

	for (int d = 2; d < 480; d++)
	  for (int c = 1; c < 420; c++)
	    for (int b = 3; b < 300; b++)
	      for (int a = 3; a < 300; a++)
	      {
	        
	       D[a][b]=D[a+3][b+1]+C[a]/B[a][b][c]-12*A[a][b];
	        
	       int var_a=C[a]+13;
	       int var_b=C[a-2]*12;
	        
	       D[a][b]=B[a][b][c]-D[a][b]/C[a]+D[a][b];
	       B[a][b][c]=B[a-3][b-1][c-2]*A[a][b]-D[a][b]+E[a];
	      }

    return 0;
}