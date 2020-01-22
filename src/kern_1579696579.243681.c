#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(440, 30, "ones");
	int **D = create_two_dim_int(370, 800, "ones");
	int **B = create_two_dim_int(620, 320, "ones");
	int ***C = create_three_dim_int(580, 390, 600, "ones");

	for (int d = 0; d < 599; d++)
	  for (int c = 4; c < 316; c++)
	    for (int b = 2; b < 366; b++)
	      for (int a = 2; a < 366; a++)
	      {
	        
	       B[a][b]=B[a][b-4]/12;
	        
	       C[a][b][c]=C[a][b+5][c+1]*11+D[a][b];
	        
	       int var_a=D[a][b]-22;
	       int var_b=D[a+4][b+2]/43;
	        
	       int var_c=B[a][b]/45;
	       int var_d=B[a][b+4]-46;
	        
	       int var_e=B[a][b]/36;
	       int var_f=B[a][b+2]*43;
	        
	       B[a][b]=D[a][b]+C[a][b][c]/B[a][b];
	       D[a][b]=D[a-2][b-4]/C[a][b][c]-A[a][b]*B[a][b];
	      }

    return 0;
}