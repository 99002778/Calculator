int main()
{
    int n;

    printf("\n1.Addition");
    printf("\n2.subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Modulos");
    printf("\n6.power");
    printf("\n7.exit");
    printf("\n Select Operation");
 scanf("\n%d",&n);
 switch(n)
 {
    case 1: addition();
                      break;

    case 2: subtraction();
                      break;

    case 3: multiplication();
                      break;

    case 4: division();
                      break;

    case 5: modulus();
                      break;

    case 6: power();
                      break;

    case 7: exit(0);
                      break;

     default : exit(0);
                break;

}
return 0;
}
