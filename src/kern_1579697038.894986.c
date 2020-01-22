#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(250, 780, 700, "ones");
	int **B = create_two_dim_int(140, 180, "ones");
	int **D = create_two_dim_int(250, 300, "ones");
	int **E = create_two_dim_int(650, 680, "ones");
	int *A = create_one_dim_int(470, "ones");

	for (int d = 3; d < 700; d++)
	  for (int c = 4; c < 180; c++)
	    for (int b = 4; b < 140; b++)
	      for (int a = 4; a < 140; a++)
	      {
	        
	       B[a][b]=B[a-4][b-4]+28;
	        
	       A[a]=A[a-1]*43;
	        
	       D[a][b]=A[a]*E[a][b];
	       D[a+4][b+1]=B[a][b]*C[a][b][c]/E[a][b]-A[a];
	        
	       D[a][b]=17;
	        
	       int var_a=A[a]*4;
	       int var_b=A[a+3]-10;
	        
	       int var_c=C[a][b][c]*30;
	       int var_d=C[a-2][b-4][c-3]-24;
	      }

    return 0;
}