#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(870, 590, 810, "ones");
	int **D = create_two_dim_int(80, 310, "ones");
	int ***C = create_three_dim_int(390, 860, 960, "ones");
	int **B = create_two_dim_int(550, 670, "ones");

	for (int d = 5; d < 810; d++)
	  for (int c = 5; c < 310; c++)
	    for (int b = 5; b < 80; b++)
	      for (int a = 5; a < 80; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-2][c-5]-C[a][b][c]*D[a][b];
	        
	       D[a][b]=D[a][b-2]-B[a][b]+A[a][b][c];
	        
	       D[a][b]=D[a-2][b-3]/B[a][b]*C[a][b][c]-A[a][b][c];
	        
	       C[a][b][c]=20;
	       C[a][b-5][c-1]=33;
	        
	       C[a][b][c]=D[a][b]*B[a][b]+A[a][b][c];
	        
	       int var_a=B[a][b]+1;
	       int var_b=B[a+4][b+2]+39;
	        
	       int var_c=B[a][b]*12;
	       int var_d=B[a-3][b-3]/2;
	      }

    return 0;
}