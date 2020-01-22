#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(670, "zeros");
	int **B = create_two_dim_int(690, 510, "zeros");
	int *E = create_one_dim_int(140, "zeros");
	int **D = create_two_dim_int(480, 410, "zeros");
	int ***C = create_three_dim_int(850, 980, 470, "zeros");

	for (int d = 0; d < 470; d++)
	  for (int c = 3; c < 510; c++)
	    for (int b = 5; b < 136; b++)
	      for (int a = 5; a < 136; a++)
	      {
	        
	       B[a][b]=B[a-5][b-1]+C[a][b][c]*A[a]/D[a][b]-E[a];
	        
	       C[a][b][c]=C[a+5][b+3][c]-28;
	        
	       E[a]=E[a+4]-50;
	        
	       B[a][b]=A[a]*E[a];
	        
	       int var_a=A[a]-40;
	        
	       A[a]=E[a]+22;
	       E[a]=E[a+2]+C[a][b][c];
	      }

    return 0;
}