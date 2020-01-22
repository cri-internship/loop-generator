#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(460, 530, 260, "ones");
	int **A = create_two_dim_int(80, 550, "ones");
	int ***D = create_three_dim_int(400, 560, 690, "ones");
	int ***E = create_three_dim_int(210, 670, 70, "ones");
	int ***B = create_three_dim_int(590, 740, 770, "ones");

	for (int b = 2; b < 529; b++)
	  for (int a = 4; a < 79; a++)
	  {
	    
	     D[a][b][a]=D[a+3][b+5][a+3]/A[a][b];
	    
	     C[a][b][a]=C[a][b][a+4]+20;
	    
	     C[a][b][a]=B[a][b][a]/0;
	     B[a][b][a]=C[a][b][a];
	    
	     A[a][b]=A[a+1][b+2]+12;
	    
	     D[a][b][a]=47;
	    
	     A[a][b]=E[a][b][a]+B[a][b][a]*C[a][b][a]/B[a][b][a]-D[a][b][a];
	     B[a][b][a]=E[a-1][b-1][a]+16-A[a][b]/C[a][b][a]*D[a][b][a];
	    
	     D[a][b][a]=C[a][b][a]+E[a][b][a]/B[a][b][a];
	     E[a][b][a]=C[a][b+1][a+2]+13;
	  }

    return 0;
}