#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(990, 490, 130, "zeros");
	int **B = create_two_dim_int(150, 710, "zeros");
	int **C = create_two_dim_int(460, 980, "zeros");

	for (int d = 4; d < 129; d++)
	  for (int c = 4; c < 489; c++)
	    for (int b = 0; b < 460; b++)
	      for (int a = 0; a < 460; a++)
	      {
	        
	       A[a][b][c]=A[a][b-4][c-4]*C[a][b];
	        
	       C[a][b]=C[a][b+5]/6;
	        
	       C[a][b]=35;
	        
	       B[a][b]=A[a][b][c]/B[a][b];
	       A[a][b][c]=A[a][b][c-2]/B[a][b]*44;
	        
	       int var_a=A[a][b][c]+10;
	       int var_b=A[a+1][b+1][c+1]*44;
	      }

    return 0;
}