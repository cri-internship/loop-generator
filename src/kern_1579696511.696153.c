#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(150, "zeros");
	int **D = create_two_dim_int(20, 200, "zeros");
	int ***B = create_three_dim_int(700, 400, 910, "zeros");
	int ***C = create_three_dim_int(770, 570, 600, "zeros");
	int **E = create_two_dim_int(240, 190, "zeros");

	for (int d = 0; d < 597; d++)
	  for (int c = 2; c < 186; c++)
	    for (int b = 2; b < 20; b++)
	      for (int a = 2; a < 20; a++)
	      {
	        
	       A[a]=A[a+1]/26;
	        
	       E[a][b]=E[a+2][b+4]*32;
	        
	       C[a][b][c]=47;
	       C[a][b+4][c+3]=50;
	        
	       A[a]=E[a][b]+D[a][b]-A[a]/B[a][b][c];
	       D[a][b]=E[a-2][b-2]*A[a]+B[a][b][c];
	        
	       C[a][b][c]=B[a][b][c]+E[a][b]*E[a][b]-D[a][b]/C[a][b][c];
	       B[a][b][c]=B[a][b+4][c+5]/A[a];
	        
	       int var_a=D[a][b]-36;
	       int var_b=D[a][b+5]*31;
	      }

    return 0;
}