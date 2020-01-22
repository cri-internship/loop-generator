#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(10, "zeros");
	int ***C = create_three_dim_int(600, 220, 740, "zeros");
	int **E = create_two_dim_int(300, 20, "zeros");
	int **B = create_two_dim_int(250, 860, "zeros");
	int *D = create_one_dim_int(850, "zeros");

	for (int d = 3; d < 736; d++)
	  for (int c = 5; c < 219; c++)
	    for (int b = 5; b < 10; b++)
	      for (int a = 5; a < 10; a++)
	      {
	        
	       B[a][b]=B[a-1][b-1]+A[a]*C[a][b][c]/D[a]-E[a][b];
	        
	       C[a][b][c]=C[a+2][b+1][c+4]-B[a][b];
	        
	       C[a][b][c]=D[a]/A[a];
	        
	       A[a]=E[a][b]/B[a][b]-D[a];
	       A[a]=C[a][b][c]-B[a][b]+8*E[a][b];
	        
	       B[a][b]=D[a];
	        
	       int var_a=B[a][b]+3;
	       int var_b=B[a-1][b-5]*22;
	        
	       E[a][b]=B[a][b]*E[a][b]/C[a][b][c]+D[a]-A[a];
	       D[a]=B[a+1][b+5]*49+D[a];
	      }

    return 0;
}