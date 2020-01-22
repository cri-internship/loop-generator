#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(580, 710, 340, "random");
	int ***E = create_three_dim_int(690, 140, 540, "random");
	int **C = create_two_dim_int(620, 940, "random");
	int ***B = create_three_dim_int(190, 700, 10, "random");
	int ***A = create_three_dim_int(880, 780, 480, "random");

	for (int b = 3; b < 140; b++)
	  for (int a = 5; a < 576; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-2][a-5]-40;
	    
	     C[a][b]=B[a][b][a]/A[a][b][a];
	     C[a-2][b]=D[a][b][a]/E[a][b][a]+B[a][b][a];
	    
	     B[a][b][a]=D[a][b][a]+C[a][b]*C[a][b]/38;
	     E[a][b][a]=D[a+4][b+1][a+4]+B[a][b][a];
	    
	     D[a][b][a]=E[a][b][a]/D[a][b][a];
	     A[a][b][a]=E[a-4][b-3][a]*D[a][b][a]-39/C[a][b];
	    
	     C[a][b]=E[a][b][a]-D[a][b][a]/C[a][b]+A[a][b][a];
	     C[a][b]=E[a-1][b-3][a-3]+D[a][b][a]/B[a][b][a]*C[a][b]-17;
	  }

    return 0;
}