#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(650, 360, 150, "zeros");
	int *C = create_one_dim_int(930, "zeros");
	int **D = create_two_dim_int(700, 40, "zeros");
	int **A = create_two_dim_int(100, 730, "zeros");

	for (int d = 0; d < 145; d++)
	  for (int c = 5; c < 39; c++)
	    for (int b = 4; b < 97; b++)
	      for (int a = 4; a < 97; a++)
	      {
	        
	       A[a][b]=A[a+3][b+3]-15;
	        
	       B[a][b][c]=B[a+5][b+4][c+3]/D[a][b]-C[a];
	        
	       C[a]=26;
	       C[a-3]=39;
	        
	       D[a][b]=A[a][b]+B[a][b][c]-A[a][b];
	       D[a+4][b+1]=B[a][b][c]*A[a][b]-C[a];
	        
	       A[a][b]=A[a][b]*B[a][b][c]-D[a][b]/C[a];
	       D[a][b]=A[a-4][b-5]/C[a];
	        
	       int var_a=B[a][b][c]+49;
	       int var_b=B[a+1][b+3][c+5]*48;
	      }

    return 0;
}