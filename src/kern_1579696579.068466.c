#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(310, 230, 140, "ones");
	int *D = create_one_dim_int(540, "ones");
	int ***C = create_three_dim_int(960, 650, 430, "ones");
	int *B = create_one_dim_int(420, "ones");

	for (int d = 5; d < 140; d++)
	  for (int c = 5; c < 230; c++)
	    for (int b = 5; b < 310; b++)
	      for (int a = 5; a < 310; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-2][c-5]/29;
	        
	       D[a]=4;
	       D[a+3]=7;
	        
	       C[a][b][c]=18;
	       C[a][b+1][c+3]=D[a]+A[a][b][c];
	        
	       B[a]=C[a][b][c]/B[a]*A[a][b][c];
	       D[a]=C[a-3][b-5][c-4]-A[a][b][c]+B[a]*D[a];
	        
	       int var_a=A[a][b][c]/15;
	       int var_b=A[a-5][b-3][c-4]-40;
	      }

    return 0;
}