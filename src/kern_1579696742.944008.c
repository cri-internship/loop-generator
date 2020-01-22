#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(610, 230, 270, "ones");
	int **D = create_two_dim_int(570, 790, "ones");
	int **A = create_two_dim_int(660, 700, "ones");
	int *E = create_one_dim_int(680, "ones");
	int *C = create_one_dim_int(310, "ones");

	for (int d = 4; d < 270; d++)
	  for (int c = 5; c < 230; c++)
	    for (int b = 4; b < 610; b++)
	      for (int a = 4; a < 610; a++)
	      {
	        
	       E[a]=E[a-1]+B[a][b][c]/A[a][b];
	        
	       B[a][b][c]=B[a-4][b-5][c-3]+28;
	        
	       A[a][b]=A[a+4][b+3]-47;
	        
	       A[a][b]=A[a+5][b+4]*39;
	        
	       B[a][b][c]=E[a]-C[a]*D[a][b]/A[a][b];
	        
	       int var_a=E[a]+35;
	        
	       int var_c=A[a][b]+7;
	       int var_d=A[a+3][b+3]/18;
	      }

    return 0;
}