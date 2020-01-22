#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(520, "random");
	int ***D = create_three_dim_int(370, 190, 350, "random");
	int ***A = create_three_dim_int(300, 600, 420, "random");
	int **B = create_two_dim_int(640, 320, "random");

	for (int d = 3; d < 350; d++)
	  for (int c = 5; c < 190; c++)
	    for (int b = 4; b < 300; b++)
	      for (int a = 4; a < 300; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-5][c-1]/11;
	        
	       C[a]=C[a+5]/D[a][b][c];
	        
	       C[a]=C[a+1]*30;
	        
	       D[a][b][c]=32;
	       D[a-2][b-3][c-3]=28;
	        
	       B[a][b]=0;
	       B[a-1][b-3]=32;
	        
	       int var_a=C[a]-18;
	       int var_b=C[a-4]*14;
	      }

    return 0;
}