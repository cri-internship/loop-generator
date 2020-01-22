#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(580, 490, "random");
	int ***A = create_three_dim_int(820, 880, 280, "random");
	int ***C = create_three_dim_int(550, 250, 930, "random");

	for (int d = 3; d < 280; d++)
	  for (int c = 5; c < 248; c++)
	    for (int b = 2; b < 549; b++)
	      for (int a = 2; a < 549; a++)
	      {
	        
	       B[a][b]=B[a-2][b-1]*16;
	        
	       A[a][b][c]=A[a-1][b-2][c-3]*8;
	        
	       C[a][b][c]=C[a+1][b+2][c+3]+B[a][b];
	        
	       int var_a=B[a][b]+38;
	       int var_b=B[a+1][b]+46;
	        
	       int var_c=B[a][b]*41;
	       int var_d=B[a][b-5]*36;
	        
	       int var_e=C[a][b][c]+24;
	       int var_f=C[a-2][b-4][c-1]/45;
	      }

    return 0;
}