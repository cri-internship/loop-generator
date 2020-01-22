#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(470, 500, 10, "zeros");
	int *A = create_one_dim_int(850, "zeros");
	int ***E = create_three_dim_int(710, 450, 260, "zeros");
	int ***B = create_three_dim_int(260, 220, 90, "zeros");
	int ***D = create_three_dim_int(120, 370, 180, "zeros");

	for (int d = 5; d < 5; d++)
	  for (int c = 4; c < 220; c++)
	    for (int b = 4; b < 120; b++)
	      for (int a = 4; a < 120; a++)
	      {
	        
	       E[a][b][c]=E[a-1][b-4][c-4]-43;
	        
	       D[a][b][c]=C[a][b][c]-E[a][b][c]+A[a]*B[a][b][c];
	       D[a][b-1][c-5]=A[a]-C[a][b][c];
	        
	       int var_a=B[a][b][c]-38;
	       int var_b=B[a-4][b][c-1]*33;
	        
	       int var_c=C[a][b][c]-25;
	       int var_d=C[a][b+2][c+5]/46;
	      }

    return 0;
}