#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(690, "ones");
	int ***D = create_three_dim_int(960, 260, 450, "ones");
	int ***A = create_three_dim_int(470, 100, 50, "ones");
	int *C = create_one_dim_int(230, "ones");

	for (int d = 0; d < 45; d++)
	  for (int c = 0; c < 98; c++)
	    for (int b = 5; b < 226; b++)
	      for (int a = 5; a < 226; a++)
	      {
	        
	       B[a]=B[a-5]/25;
	        
	       C[a]=C[a-2]*18;
	        
	       C[a]=C[a+4]*A[a][b][c];
	        
	       int var_a=B[a]-4;
	       int var_b=B[a]/18;
	        
	       int var_c=A[a][b][c]-15;
	       int var_d=A[a+2][b+2][c+5]*2;
	        
	       C[a]=B[a]+6/D[a][b][c];
	       D[a][b][c]=B[a-1]/29;
	      }

    return 0;
}