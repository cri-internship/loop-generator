#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(50, 20, 620, "ones");
	int ***D = create_three_dim_int(620, 700, 100, "ones");
	int *B = create_one_dim_int(210, "ones");
	int *C = create_one_dim_int(940, "ones");

	for (int d = 5; d < 95; d++)
	  for (int c = 3; c < 699; c++)
	    for (int b = 4; b < 208; b++)
	      for (int a = 4; a < 208; a++)
	      {
	        
	       D[a][b][c]=D[a-2][b-3][c-1]/46;
	        
	       C[a]=C[a+5]/A[a][b][c]-B[a];
	        
	       B[a]=41;
	       B[a-4]=0;
	        
	       D[a][b][c]=45;
	        
	       int var_a=D[a][b][c]-7;
	       int var_b=D[a+2][b+1][c+5]/8;
	        
	       int var_c=C[a]*44;
	       int var_d=C[a-2]*46;
	        
	       C[a]=B[a]+C[a]/2;
	       A[a][b][c]=B[a+2]*A[a][b][c]+D[a][b][c]-C[a];
	      }

    return 0;
}