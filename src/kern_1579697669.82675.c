#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(420, 960, 860, "ones");
	int *B = create_one_dim_int(960, "ones");
	int **D = create_two_dim_int(300, 490, "ones");
	int *A = create_one_dim_int(670, "ones");

	for (int d = 5; d < 860; d++)
	  for (int c = 5; c < 485; c++)
	    for (int b = 4; b < 295; b++)
	      for (int a = 4; a < 295; a++)
	      {
	        
	       B[a]=B[a-2]*D[a][b];
	        
	       A[a]=A[a+3]+C[a][b][c]/B[a]-C[a][b][c];
	        
	       C[a][b][c]=A[a];
	       C[a][b-3][c-5]=D[a][b]*A[a]/B[a];
	        
	       D[a][b]=6;
	       D[a-4][b]=7;
	        
	       C[a][b][c]=A[a]/D[a][b];
	        
	       int var_c=D[a][b]/37;
	       int var_d=D[a+5][b+5]/44;
	      }

    return 0;
}