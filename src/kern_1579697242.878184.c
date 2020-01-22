#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(410, 430, 350, "zeros");
	int *A = create_one_dim_int(130, "zeros");
	int **B = create_two_dim_int(300, 830, "zeros");
	int **C = create_two_dim_int(910, 230, "zeros");

	for (int d = 0; d < 347; d++)
	  for (int c = 3; c < 226; c++)
	    for (int b = 4; b < 129; b++)
	      for (int a = 4; a < 129; a++)
	      {
	        
	       C[a][b]=C[a-4][b-3]+D[a][b][c]/A[a]-B[a][b];
	        
	       D[a][b][c]=D[a+4][b+5][c+3]/C[a][b];
	        
	       C[a][b]=12;
	        
	       int var_a=A[a]-31;
	       int var_b=A[a+1]/1;
	        
	       int var_c=A[a]+6;
	       int var_d=A[a-1]-3;
	      }

    return 0;
}