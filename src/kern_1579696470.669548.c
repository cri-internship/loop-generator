#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(570, "ones");
	int *B = create_one_dim_int(910, "ones");
	int **D = create_two_dim_int(440, 710, "ones");
	int ***E = create_three_dim_int(30, 520, 390, "ones");
	int *C = create_one_dim_int(440, "ones");

	for (int d = 3; d < 390; d++)
	  for (int c = 3; c < 519; c++)
	    for (int b = 3; b < 27; b++)
	      for (int a = 3; a < 27; a++)
	      {
	        
	       A[a]=A[a-3]-8;
	        
	       D[a][b]=D[a][b-2]/20;
	        
	       A[a]=A[a+2]*6;
	        
	       D[a][b]=D[a+2][b+3]/E[a][b][c]+C[a]*A[a];
	        
	       E[a][b][c]=11;
	       E[a+3][b+1][c]=20;
	        
	       E[a][b][c]=37;
	        
	       int var_a=A[a]+37;
	      }

    return 0;
}