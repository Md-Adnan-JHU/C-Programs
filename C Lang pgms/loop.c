main() {


    int x=1;

    while(x++<100) {
        printf("\n%d\n",x);
        x*=x;
         printf("\n%d\n",x);

        if (x<10) continue;

        if (x>50) break;


    }


}
