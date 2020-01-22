#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(290, 420, "ones");
	int **B = create_two_dim_int(320, 200, "ones");
	int ***D = create_three_dim_int(190, 680, 750, "ones");
	int **C = create_two_dim_int(300, 170, "ones");
	int **A = create_two_dim_int(860, 620, "ones");

	for (int b = 4; b < 169; b++)
	  for (int a = 4; a < 296; a++)
	  {
	    
	     A[a][b]=A[a-2][b-3]*D[a][b][a]+B[a][b]-E[a][b];
	    
	     C[a][b]=C[a-4][b-4]-A[a][b];
	    
	     C[a][b]=C[a+4][b+1]*43;
	    
	     C[a][b]=B[a][b]*C[a][b]+C[a][b];
	     D[a][b][a]=B[a-2][b-4]-C[a][b]*A[a][b]+E[a][b]/D[a][b][a];
	  }

    return 0;
}