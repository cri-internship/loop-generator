#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(80, 980, 420, "random");
	int *D = create_one_dim_int(690, "random");
	int ***B = create_three_dim_int(840, 990, 70, "random");
	int ***C = create_three_dim_int(460, 770, 630, "random");

	for (int d = 5; d < 68; d++)
	  for (int c = 2; c < 767; c++)
	    for (int b = 5; b < 75; b++)
	      for (int a = 5; a < 75; a++)
	      {
	        
	       B[a][b][c]=B[a+5][b+2][c+2]-A[a][b][c]/C[a][b][c]*D[a];
	        
	       B[a][b][c]=49;
	        
	       C[a][b][c]=28;
	       C[a+3][b+3][c+4]=24;
	        
	       int var_a=A[a][b][c]*18;
	       int var_b=A[a+2][b+5][c]/45;
	        
	       A[a][b][c]=C[a][b][c]-B[a][b][c];
	       D[a]=C[a-5][b-2][c-5]-A[a][b][c];
	        
	       C[a][b][c]=A[a][b][c]*C[a][b][c]/D[a]+B[a][b][c];
	       B[a][b][c]=A[a+5][b+5][c+1]*B[a][b][c]-5;
	      }

    return 0;
}