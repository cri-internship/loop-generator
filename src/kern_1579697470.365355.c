#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(460, 850, "random");
	int *A = create_one_dim_int(670, "random");
	int ***C = create_three_dim_int(360, 30, 690, "random");
	int ***D = create_three_dim_int(120, 650, 980, "random");
	int *B = create_one_dim_int(560, "random");

	for (int d = 0; d < 687; d++)
	  for (int c = 2; c < 26; c++)
	    for (int b = 3; b < 357; b++)
	      for (int a = 3; a < 357; a++)
	      {
	        
	       E[a][b]=E[a-3][b-2]+26;
	        
	       C[a][b][c]=C[a+3][b+4][c+3]*13;
	        
	       C[a][b][c]=35-D[a][b][c];
	        
	       B[a]=47;
	       B[a]=4;
	      }

    return 0;
}