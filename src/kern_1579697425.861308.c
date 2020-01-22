#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(720, "random");
	int **A = create_two_dim_int(750, 100, "random");
	int ***B = create_three_dim_int(760, 230, 850, "random");

	for (int d = 2; d < 849; d++)
	  for (int c = 5; c < 95; c++)
	    for (int b = 1; b < 720; b++)
	      for (int a = 1; a < 720; a++)
	      {
	        
	       C[a]=46;
	       float  var_a=C[a]+49;
	        
	       B[a][b][c]=B[a+4][b+4][c+1]-21;
	        
	       A[a][b]=A[a][b+5]-B[a][b][c];
	        
	       B[a][b][c]=36;
	      }

    return 0;
}