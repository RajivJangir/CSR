#include <stdio.h>

void add ();
void sub ();
void mul ();
void div ();
void sqr ();
void primeFactor ();
void factorial ();
void exit ();
void sel_func (int);

int main (void)
{
        int s;
    
        Input:
           printf("Enter a Operation:\n");
           printf("1. Addition:\n");
           printf("2. Subtraction:\n");
           printf("3. Multiplication:\n");
           printf("4. Division:\n");
           printf("5. Square:\n");
           printf("6. Prime Factorization:\n");
           printf("7. Factorial:\n");
           printf("8. Exit:\n");

           
           scanf("%d",&s);
         
           if (s > 8 | s < 1){
                  printf("Please input again\n");
                  goto Input;
           }
           sel_func (s);
    
           goto Input;
}

void sel_func (int s)
{
        void (*fptr)(void);
        switch (s){
        case 1:
                fptr = add;
                break;
        case 2:
                fptr = sub;
                break;
        case 3:
                fptr = mul;
                break;
        case 4:
                fptr = div;
                break;
        case 5:
                fptr = sqr;
                break;
        case 6:
                fptr = primeFactor;
                break;
        case 7:
                fptr = factorial;
                break;

        case 8:
                fptr = exit;
                break;
                        
        }
    
        fptr();
}

void add ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a + b);
}

void sub ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n" , a - b);
}

void mul ()
{
        int a, b;
      
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a * b);
}

void div ()
{
        int a, b;
        
        printf("Input two numbers : ");
        scanf("%d%d", &a,&b);
        printf("Result = %d\n", a / b);
}

void sqr (){
        int exp, base, i;
        int result = 1;
    
        printf("Input base : ");
        scanf("%d",&base);
        printf("Input exp : ");
        scanf("%d",&exp);
    
        for (i = 0; i < exp; ++i)
                result *= base;
            
        printf("%d^%d = %d\n",
                    base,exp,result);
}

void primeFactor ()
{
        int n; 
        while (1){ 
                printf("Input a number : "); 
                scanf("%d",&n); 
       
             if(n < 2)
                    return; 
        }
        
        int p = 2; 
        int primes[20]; 
        int index = 0; 
        int i; 
        
        while (1 != n){ 
                if (0 == (n%p)){ 
                        n = n/p; 
                        primes[index] = p; 
                        ++index; 
                        p = 2; 
                } else {
                    ++p;
                }
        } 
        
        if(1 == index){
                printf("Prime number\n"); 
        } else { 
                for (i = 0; i < index - 1; ++i)
                        printf("%d*", primes[i]);

                printf("%d\n", primes[i]);
          }  
        
          return;    
        
}

void factorial ()
{
        int a, b;
        int sum = 1;
    
        printf("Input a number : ");
        scanf("%d", &b);
    
        for (a = 1; a <= b; ++a)
                    sum *= a;
        
        printf("%d!=%d\n",b,sum);
}
void exit();