#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(470, "zeros");
	int *C = create_one_dim_int(570, "zeros");
	int *B = create_one_dim_int(350, "zeros");
	int *A = create_one_dim_int(690, "zeros");
	int **E = create_two_dim_int(830, 480, "zeros");

	for (int d = 5; d < 480; d++)
	  for (int c = 5; c < 346; c++)
	    for (int b = 5; b < 346; b++)
	      for (int a = 5; a < 346; a++)
	      {
	        
	       E[a][b]=E[a-5][b-5]+26;
	        
	       B[a]=E[a][b]*D[a]/C[a];
	       B[a]=B[a]*A[a];
	        
	       D[a]=D[a+5]+B[a]*B[a]-E[a][b];
	        
	       B[a]=B[a+4]-33;
	        
	       A[a]=25;
	       A[a+2]=1;
	      }

    return 0;
}