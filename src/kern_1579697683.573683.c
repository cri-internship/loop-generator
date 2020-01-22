#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(890, 690, 670, "random");
	int *D = create_one_dim_int(750, "random");
	int *C = create_one_dim_int(460, "random");
	int *B = create_one_dim_int(500, "random");
	int **E = create_two_dim_int(540, 170, "random");

	for (int d = 5; d < 460; d++)
	  for (int c = 5; c < 460; c++)
	    for (int b = 5; b < 460; b++)
	      for (int a = 5; a < 460; a++)
	      {
	        
	       C[a]=C[a-1]+B[a]/D[a]*E[a][b]-A[a][b][c];
	        
	       D[a]=40;
	       D[a-5]=19;
	        
	       C[a]=B[a]+A[a][b][c]*E[a][b];
	        
	       int var_a=D[a]+42;
	       int var_b=D[a+4]+11;
	        
	       C[a]=D[a]/C[a];
	       A[a][b][c]=D[a+1]/B[a]-A[a][b][c];
	      }

    return 0;
}