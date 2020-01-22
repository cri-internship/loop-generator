#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(680, "ones");
	int *A = create_one_dim_int(830, "ones");
	int ***D = create_three_dim_int(880, 40, 780, "ones");
	int *E = create_one_dim_int(850, "ones");
	int ***C = create_three_dim_int(700, 640, 870, "ones");

	for (int d = 0; d < 780; d++)
	  for (int c = 0; c < 40; c++)
	    for (int b = 1; b < 830; b++)
	      for (int a = 1; a < 830; a++)
	      {
	        
	       A[a]=A[a-1]+20;
	        
	       C[a][b][c]=D[a][b][c]+B[a]-A[a]/48*C[a][b][c];
	       B[a]=D[a+3][b][c]+A[a]*C[a][b][c]/B[a]-E[a];
	      }

    return 0;
}