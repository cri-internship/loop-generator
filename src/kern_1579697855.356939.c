#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(600, "ones");
	int ***C = create_three_dim_int(390, 290, 660, "ones");
	int *D = create_one_dim_int(330, "ones");
	int *A = create_one_dim_int(50, "ones");
	int **E = create_two_dim_int(90, 270, "ones");

	for (int d = 2; d < 660; d++)
	  for (int c = 5; c < 290; c++)
	    for (int b = 5; b < 50; b++)
	      for (int a = 5; a < 50; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-5][c-2]/D[a]*E[a][b]+B[a];
	        
	       int var_a=B[a]+39;
	       B[a]=32;
	        
	       A[a]=C[a][b][c]/D[a];
	       A[a-5]=C[a][b][c]-E[a][b]*B[a]/D[a];
	      }

    return 0;
}