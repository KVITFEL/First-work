
    int*pi, i =5;
    float*pf,f =2.1f;
    setlocale();
    pi = &i;
    pf = &f
    printf("ptr = %p, значение = %i, размер = %lu\n", pi, i,sizeof(pi));
    printf("ptr = %p, значение = %i, размер = %lu", pf, i,sizeof(pf));
