#include<stdio.h>
#include<math.h>
int main()
{
   while(48) {
   printf("                           Welcome to the scientific calculator\n");
    printf("                        Press 1-11 number to select your operation :\n\n\n");

    int a;

    printf("\t1.Addition\n");
    printf("\t2.subtraction\n");
    printf("\t3.Multiplication\n");
    printf("\t4.Division\n");
    printf("\t5.Factorial of a number\n");
    printf("\t6.square of a number\n");
    printf("\t7.Quebe of a number\n");
    printf("\t8.Root of a number\n");
    printf("\t9.Trigonometric operation of a number\n");
    printf("\t10.The value of sin^-1,cos^-1,tan^-1\n");
    printf("\t11.The value of ln\n");
    scanf("%d",&a);
    if(a==1)
    {



        double add[1000],sum=0.0;
        int i,n;
        printf("Enter how many numbers you want to add\n");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lf",&add[i]);
        }
        for(i=0; i<n; i++)
        {
            sum=sum+add[i];
        }
        printf("Your sum of %d number is %lf\n",n,sum);
    }
    if(a==2)
    {
        double sub,sub1,sub2;
        printf("Enter the two numbers you want to subtract\n");
        scanf("%lf %lf",&sub1,&sub2);
        sub=sub1-sub2;
        printf("Your Substraction result is : %0.2lf\n",sub);

    }
    if(a==3)
    {



        double m[1000],mult=1.0;
        int i,n;
        printf("Enter how many numbers you want to multiply\n");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%lf",&m[i]);
        }
        for(i=0; i<n; i++)
        {
            mult=mult*m[i];
        }
        printf("Your multiplication of %d number is %lf\n",n,mult);


    }
    if(a==4)
    {
        double div,num1,num2;
        printf("Please enter two numbers you wanta to divide\n");
        scanf("%lf %lf",&num1,&num2);
        div=num1/num2;
        printf("Divided result is %lf\n",div);
    }
    if(a==5)
    {


        int fact=1,i,f;
        printf("Please enter the number \n");
        scanf("%d",&f);
        for(i=1; i<=f; i++)
        {
            fact=fact*i;
        }
        printf("The factorial of %d!=%d",f,fact);


    }
    if(a==6)
    {
        printf("Please Enter a number for square :");
        double sq,p;
        scanf("%lf",&p);
        sq=p*p;
        printf("Square of the given number is : %lf\n",sq);
    }
    if(a==7)
    {
        printf("Please Enter a number for square :");
        double qube,p1;
        scanf("%lf",&p1);
        qube=p1*p1*p1;
        printf("Quebe of the given number is : %lf\n",qube);
    }
    if(a==8)
    {
        double root;
        int r1;
        printf("Please enter a number for finding square root :  ");
        scanf("%d",&r1);
        root=sqrt(r1);
        printf("Square root of the number is : %lf \n",root);
    }
    if(a==9)
    {
        printf("Please enter the value to get the trigonometric value of sin,cos,tan in radiant\n\n");

        double t;
        scanf("%lf",&t);
        printf("Radian  value of  sin(%.1lf)= %lf\n\n",t,sin(t));
        printf("Radian  value of  Cos(%.1lf)= %lf\n\n",t,cos(t));
        printf("Radian  value of  tan(%.1lf)= %lf\n\n",t,tan(t));


    }
    if(a == 10){
        double t;
        scanf("%lf",&t);
        printf("sin^-1 is: %lf\n", asin(t));
        printf("cos^-1 is: %lf\n", acos(t));
        printf("tan^-1 is: %lf\n", atan(t));

    }
    if(a==11) {
            double t;
    scanf("%lf",&t);
        printf("ln (%.1lf): %lf\n",t, log(t));
    }
   }


}
