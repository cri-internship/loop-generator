#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(600, "ones");
	int ***A = create_three_dim_int(850, 770, 740, "ones");
	int *B = create_one_dim_int(490, "ones");
	int ***E = create_three_dim_int(40, 390, 60, "ones");
	int *C = create_one_dim_int(860, "ones");

	for (int d = 5; d < 740; d++)
	  for (int c = 4; c < 770; c++)
	    for (int b = 4; b < 490; b++)
	      for (int a = 4; a < 490; a++)
	      {
	        
	       B[a]=B[a-4]*36;
	        
	       B[a]=B[a-1]/A[a][b][c];
	        
	       C[a]=C[a+3]-D[a]/B[a]+E[a][b][c]*D[a];
	        
	       int var_a=B[a]-12;
	       B[a]=2;
	        
	       A[a][b][c]=24;
	       A[a][b-4][c-2]=15;
	        
	       A[a][b][c]=17;
	      }

    return 0;
}