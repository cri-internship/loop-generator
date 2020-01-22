#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(540, 390, "random");
	int ***B = create_three_dim_int(430, 250, 870, "random");
	int **C = create_two_dim_int(310, 760, "random");

	for (int d = 0; d < 865; d++)
	  for (int c = 5; c < 245; c++)
	    for (int b = 4; b < 310; b++)
	      for (int a = 4; a < 310; a++)
	      {
	        
	       A[a][b]=A[a-1][b-1]+16;
	        
	       C[a][b]=C[a-1][b-5]+49;
	        
	       C[a][b]=C[a-4][b-2]/A[a][b]-B[a][b][c];
	        
	       B[a][b][c]=C[a][b]+A[a][b];
	       B[a+1][b+3][c+5]=C[a][b];
	        
	       int var_a=B[a][b][c]+42;
	       int var_b=B[a+1][b+5][c+5]/40;
	        
	       int var_c=A[a][b]/34;
	       int var_d=A[a-3][b-4]/42;
	        
	       A[a][b]=A[a][b]/B[a][b][c]-34;
	       C[a][b]=A[a-3][b-3]-B[a][b][c];
	      }

    return 0;
}