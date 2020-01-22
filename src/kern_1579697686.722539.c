#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(710, 650, "ones");
	int ***E = create_three_dim_int(410, 360, 290, "ones");
	int **B = create_two_dim_int(800, 400, "ones");
	int **D = create_two_dim_int(310, 720, "ones");
	int ***A = create_three_dim_int(460, 210, 370, "ones");

	for (int d = 4; d < 288; d++)
	  for (int c = 5; c < 210; c++)
	    for (int b = 5; b < 310; b++)
	      for (int a = 5; a < 310; a++)
	      {
	        
	       E[a][b][c]=E[a-5][b-5][c-4]+A[a][b][c]/B[a][b]-D[a][b];
	        
	       E[a][b][c]=E[a+3][b+4][c+2]+32;
	        
	       int var_a=A[a][b][c]-45;
	       int var_b=A[a-4][b-2][c]+17;
	        
	       int var_c=D[a][b]+16;
	       int var_d=D[a-2][b-1]+47;
	        
	       int var_e=B[a][b]+47;
	       int var_f=B[a-1][b]/19;
	        
	       C[a][b]=E[a][b][c]-C[a][b]+A[a][b][c];
	       B[a][b]=E[a-2][b-2][c-4]*5;
	      }

    return 0;
}