#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(850, 520, 430, "zeros");
	int **B = create_two_dim_int(660, 540, "zeros");
	int *D = create_one_dim_int(660, "zeros");
	int **A = create_two_dim_int(130, 330, "zeros");
	int **C = create_two_dim_int(290, 850, "zeros");

	for (int d = 5; d < 330; d++)
	  for (int c = 4; c < 130; c++)
	    for (int b = 4; b < 130; b++)
	      for (int a = 4; a < 130; a++)
	      {
	        
	       C[a][b]=C[a][b-5]*6;
	        
	       A[a][b]=A[a-4][b-1]-E[a][b][c]*C[a][b]+B[a][b];
	        
	       C[a][b]=C[a-1][b-2]-25;
	        
	       A[a][b]=A[a-2][b]*37;
	        
	       B[a][b]=B[a+4][b+1]-11;
	        
	       B[a][b]=B[a+1][b+2]/28-D[a];
	      }

    return 0;
}