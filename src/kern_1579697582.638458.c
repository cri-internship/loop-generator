#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(620, 70, 230, "zeros");
	int **A = create_two_dim_int(570, 540, "zeros");
	int **B = create_two_dim_int(790, 380, "zeros");
	int ***D = create_three_dim_int(350, 580, 530, "zeros");

	for (int b = 2; b < 70; b++)
	  for (int a = 5; a < 350; a++)
	  {
	    
	     B[a][b]=B[a-5][b-2]-18;
	    
	     C[a][b][a]=50;
	     C[a-2][b-2][a-4]=13;
	    
	     D[a][b][a]=B[a][b]*28;
	     C[a][b][a]=B[a+3][b+5]+A[a][b];
	    
	     B[a][b]=D[a][b][a]+C[a][b][a];
	     A[a][b]=D[a-2][b-1][a-2]-B[a][b]+B[a][b];
	  }

    return 0;
}