#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(740, "random");
	int ***C = create_three_dim_int(560, 430, 250, "random");
	int *E = create_one_dim_int(590, "random");
	int ***A = create_three_dim_int(130, 280, 960, "random");
	int *B = create_one_dim_int(620, "random");

	for (int d = 2; d < 585; d++)
	  for (int c = 2; c < 585; c++)
	    for (int b = 2; b < 585; b++)
	      for (int a = 2; a < 585; a++)
	      {
	        
	       B[a]=C[a][b][c]/A[a][b][c]+D[a]*E[a];
	       B[a-2]=D[a]+E[a]/A[a][b][c];
	        
	       E[a]=E[a]-B[a]/D[a]*C[a][b][c]+B[a];
	       B[a]=E[a+5]/A[a][b][c]*C[a][b][c];
	      }

    return 0;
}