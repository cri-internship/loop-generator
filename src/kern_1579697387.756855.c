#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(750, 530, 280, "ones");
	int **A = create_two_dim_int(100, 30, "ones");

	for (int b = 4; b < 28; b++)
	  for (int a = 4; a < 97; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-2][a-4]/A[a][b];
	    
	     B[a][b][a]=B[a-2][b-3][a]+6;
	    
	     A[a][b]=A[a][b-4]/B[a][b][a];
	    
	     A[a][b]=A[a+1][b]-46;
	    
	     A[a][b]=A[a+3][b+2]-B[a][b][a];
	    
	     B[a][b][a]=B[a][b][a]*A[a][b];
	     A[a][b]=B[a-4][b-3][a-1]+37;
	  }

    return 0;
}