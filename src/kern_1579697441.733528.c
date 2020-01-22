#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(120, 840, "random");
	int *C = create_one_dim_int(1000, "random");
	int ***A = create_three_dim_int(160, 970, 830, "random");
	int ***B = create_three_dim_int(160, 240, 970, "random");

	for (int d = 3; d < 830; d++)
	  for (int c = 3; c < 240; c++)
	    for (int b = 5; b < 155; b++)
	      for (int a = 5; a < 155; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-3][c-3]*44;
	        
	       B[a][b][c]=B[a][b-2][c-1]-D[a][b]/A[a][b][c];
	        
	       B[a][b][c]=B[a+5][b][c+2]+C[a];
	        
	       C[a]=B[a][b][c]-22/B[a][b][c];
	       C[a-5]=12;
	        
	       int var_a=C[a]/2;
	       int var_b=C[a+3]+28;
	        
	       int var_c=C[a]+34;
	       int var_d=C[a+4]-18;
	      }

    return 0;
}