#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(560, 760, 40, "zeros");
	int **B = create_two_dim_int(680, 370, "zeros");
	int **D = create_two_dim_int(770, 60, "zeros");
	int *C = create_one_dim_int(80, "zeros");

	for (int d = 0; d < 38; d++)
	  for (int c = 3; c < 55; c++)
	    for (int b = 5; b < 80; b++)
	      for (int a = 5; a < 80; a++)
	      {
	        
	       D[a][b]=D[a-2][b-3]-12;
	        
	       A[a][b][c]=A[a-5][b-2][c]+37;
	        
	       D[a][b]=49;
	        
	       A[a][b][c]=C[a]*22;
	       D[a][b]=C[a]/A[a][b][c]*B[a][b];
	        
	       int var_a=D[a][b]/39;
	       int var_b=D[a+2][b+5]*33;
	        
	       int var_c=A[a][b][c]-38;
	       int var_d=A[a+1][b+2][c+2]/28;
	        
	       int var_e=B[a][b]*34;
	      }

    return 0;
}