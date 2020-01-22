#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(700, 470, 160, "random");
	double ***A = create_three_dim_double(660, 420, 720, "random");
	double *D = create_one_dim_double(530, "random");
	double ***C = create_three_dim_double(220, 370, 390, "random");
	double *B = create_one_dim_double(850, "random");

	for (int b = 0; b < 367; b++)
	  for (int a = 5; a < 217; a++)
	  {
	    
	     D[a]=D[a-3]/0.32;
	    
	     C[a][b][a]=C[a-4][b][a-5]/0.615;
	    
	     C[a][b][a]=C[a+3][b+3][a+1]+D[a]*B[a]-A[a][b][a]/E[a][b][a];
	    
	     D[a]=D[a+1]-C[a][b][a]+B[a];
	    
	     A[a][b][a]=0.799;
	     A[a+1][b][a+3]=0.953;
	    
	     B[a]=C[a][b][a]/B[a]+A[a][b][a]-D[a]*E[a][b][a];
	     E[a][b][a]=C[a][b][a-5]-A[a][b][a]+E[a][b][a]/D[a]*B[a];
	  }

    return 0;
}