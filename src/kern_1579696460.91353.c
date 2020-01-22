#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(730, "zeros");
	int **D = create_two_dim_int(330, 950, "zeros");
	int ***A = create_three_dim_int(80, 640, 200, "zeros");
	int **C = create_two_dim_int(50, 780, "zeros");
	int ***B = create_three_dim_int(940, 900, 930, "zeros");

	for (int d = 5; d < 198; d++)
	  for (int c = 2; c < 636; c++)
	    for (int b = 5; b < 48; b++)
	      for (int a = 5; a < 48; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-1][c-5]/A[a][b][c];
	        
	       C[a][b]=C[a+2][b]/44;
	        
	       A[a][b][c]=E[a]+C[a][b]-D[a][b];
	       E[a]=B[a][b][c]+B[a][b][c]-A[a][b][c];
	        
	       A[a][b][c]=A[a+2][b+4][c+2]-E[a]*C[a][b]+B[a][b][c];
	        
	       D[a][b]=25;
	       D[a-5][b-2]=37;
	        
	       int var_a=E[a]/40;
	       int var_b=E[a-5]/42;
	        
	       B[a][b][c]=C[a][b]+A[a][b][c];
	       D[a][b]=C[a-4][b-2]-A[a][b][c]/D[a][b];
	      }

    return 0;
}