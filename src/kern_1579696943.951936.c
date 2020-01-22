#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(990, 270, "ones");
	int ***B = create_three_dim_int(370, 310, 150, "ones");
	int *C = create_one_dim_int(210, "ones");
	int **A = create_two_dim_int(550, 150, "ones");

	for (int b = 0; b < 146; b++)
	  for (int a = 5; a < 210; a++)
	  {
	    
	     C[a]=C[a-5]/7;
	    
	     A[a][b]=A[a][b]*D[a][b]/C[a]-B[a][b][a];
	     B[a][b][a]=A[a+2][b+4]*D[a][b];
	    
	     C[a]=C[a]-A[a][b]*B[a][b][a]+D[a][b];
	     D[a][b]=C[a-1]-A[a][b];
	  }

    return 0;
}