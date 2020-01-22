#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(570, 280, 1000, "ones");
	int *C = create_one_dim_int(410, "ones");
	int **D = create_two_dim_int(990, 520, "ones");
	int ***B = create_three_dim_int(650, 500, 720, "ones");

	for (int d = 4; d < 716; d++)
	  for (int c = 5; c < 278; c++)
	    for (int b = 3; b < 568; b++)
	      for (int a = 3; a < 568; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-1][c-4]*C[a];
	        
	       A[a][b][c]=A[a+2][b+2][c+5]*47-B[a][b][c]/C[a];
	        
	       D[a][b]=D[a+5][b+4]+28;
	        
	       A[a][b][c]=32;
	        
	       A[a][b][c]=B[a][b][c]/A[a][b][c]-C[a]+11;
	       B[a][b][c]=B[a-3][b][c-3]/C[a];
	        
	       C[a]=B[a][b][c]*12;
	       D[a][b]=B[a+4][b+4][c+1]-12*D[a][b];
	        
	       A[a][b][c]=B[a][b][c]+C[a]-D[a][b]/A[a][b][c];
	       C[a]=B[a+2][b+4][c+4]/C[a]*D[a][b]-A[a][b][c];
	      }

    return 0;
}