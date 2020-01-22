#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(30, "random");
	int ***A = create_three_dim_int(590, 680, 960, "random");
	int *B = create_one_dim_int(760, "random");
	int ***C = create_three_dim_int(890, 600, 700, "random");
	int *E = create_one_dim_int(280, "random");

	for (int d = 4; d < 700; d++)
	  for (int c = 2; c < 600; c++)
	    for (int b = 5; b < 30; b++)
	      for (int a = 5; a < 30; a++)
	      {
	        
	       C[a][b][c]=C[a-5][b][c-2]/8;
	        
	       C[a][b][c]=C[a-1][b-1][c-1]*28;
	        
	       B[a]=B[a+2]+D[a]-A[a][b][c];
	        
	       A[a][b][c]=7;
	       A[a-2][b-2][c-4]=3;
	        
	       A[a][b][c]=31;
	        
	       D[a]=20;
	       D[a]=21;
	        
	       A[a][b][c]=E[a]+C[a][b][c]*B[a];
	       E[a]=E[a+1]-D[a]*B[a]/C[a][b][c];
	      }

    return 0;
}