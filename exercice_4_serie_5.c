#include <stdio.h>

int main()
{
    int n,m ;
    printf("donner la tailler de la matrice : "); 
    scanf("%d",&n);
   int A[n][n];
   
   //replisage de la matrice ; 
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d",&A[i][j]);
        }
    }
    //afficaheg de la matrice carrer avant transposition 
    
    printf("affiche de la matrice avant transposition ==>");
    printf("\n");
    
    for(int  i = 0 ; i< n ; i++ ){
        for(int j = 0 ; j<n;j++){
            
            printf("%d ",A[i][j]);
            
        }
        printf("\n");
    }
    
    // faire la transposition de la matrice 
    
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j<n;j++){
            if(i < j){
                m = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = m;
            }
        }
    }
    
    
    
    //affichege de la matrice apres transposition
    printf("\n");
    printf("affichege de la matrice apres transposition");
    printf("\n");
      for(int  i = 0 ; i< n ; i++ ){
        for(int j = 0 ; j<n;j++){
            printf("%d ",A[i][j]);
            
        }
        printf("\n");
    }
    
    
    
    
    
    
    return 0;
}
