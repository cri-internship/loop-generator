#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(710, 480, "random");
	int ***B = create_three_dim_int(350, 780, 420, "random");
	int *A = create_one_dim_int(520, "random");

	for (int d = 1; d < 420; d++)
	  for (int c = 3; c < 480; c++)
	    for (int b = 5; b < 346; b++)
	      for (int a = 5; a < 346; a++)
	      {
	        
	       C[a][b]=C[a-5][b]+B[a][b][c];
	        
	       B[a][b][c]=B[a-1][b][c-1]+A[a];
	        
	       A[a]=13;
	       float  var_a=A[a]+47;
	        
	       A[a]=A[a+2]-19+B[a][b][c];
	        
	       int var_b=C[a][b]+33;
	       int var_c=C[a-1][b-1]*24;
	        
	       int var_d=B[a][b][c]-7;
	       int var_e=B[a+4][b+1][c]-48;
	        
	       C[a][b]=B[a][b][c]+20;
	       A[a]=B[a-4][b-3][c]-A[a]*C[a][b];
	      }

    return 0;
}