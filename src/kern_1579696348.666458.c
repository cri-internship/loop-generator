#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(970, 590, 470, "zeros");
	int ***A = create_three_dim_int(50, 190, 430, "zeros");
	int **B = create_two_dim_int(90, 810, "zeros");

	for (int d = 5; d < 429; d++)
	  for (int c = 4; c < 190; c++)
	    for (int b = 5; b < 48; b++)
	      for (int a = 5; a < 48; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-2][c-4]*C[a][b][c]-B[a][b];
	        
	       A[a][b][c]=A[a+2][b][c+1]-B[a][b]/C[a][b][c];
	        
	       B[a][b]=A[a][b][c]-A[a][b][c];
	       B[a-3][b-2]=C[a][b][c];
	        
	       int var_a=A[a][b][c]/32;
	       int var_b=A[a][b-4][c-5]*14;
	        
	       A[a][b][c]=C[a][b][c]-B[a][b]/A[a][b][c];
	       B[a][b]=C[a-3][b-2][c-4]/A[a][b][c]*17;
	        
	       int var_c=C[a][b][c]*17;
	       int var_d=C[a-5][b][c-5]/35;
	      }

    return 0;
}