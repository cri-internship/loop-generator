#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(50, 670, 190, "ones");
	int *A = create_one_dim_int(370, "ones");
	int ***D = create_three_dim_int(740, 130, 400, "ones");
	int **C = create_two_dim_int(90, 60, "ones");

	for (int d = 2; d < 190; d++)
	  for (int c = 5; c < 58; c++)
	    for (int b = 5; b < 50; b++)
	      for (int a = 5; a < 50; a++)
	      {
	        
	       C[a][b]=B[a][b][c]/9-D[a][b][c];
	       C[a][b+2]=D[a][b][c];
	        
	       A[a]=46;
	       A[a+3]=20;
	        
	       C[a][b]=A[a]+C[a][b]/B[a][b][c]*C[a][b];
	       B[a][b][c]=A[a]*B[a][b][c]-C[a][b]+D[a][b][c];
	        
	       D[a][b][c]=B[a][b][c]+C[a][b];
	       A[a]=B[a-2][b-5][c-2]-C[a][b];
	        
	       int var_a=D[a][b][c]*44;
	       int var_b=D[a-5][b][c-1]-47;
	        
	       C[a][b]=C[a][b]-A[a]*B[a][b][c];
	       D[a][b][c]=C[a-4][b-5]/B[a][b][c]-A[a]*6;
	      }

    return 0;
}