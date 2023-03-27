int recherche_dich(int T[50], int N, int x) //fonction princpal pour faire une recherche dichotomique
{
    //VARIABLES
    int  m, f=0, a=0, b=N;
    
    //DÉBUT DU PROGRAMME
    m = 0.5*N;
    while (b>=a && f==0)
    {
        if (T[m]==x)
        {
            f = 1;
        }
        else
        {
            if(T[m]<x)
            {
                a=m+1;
            }
            else
            {
                b = m-1;
            }
            m = 0.5*(b+a);
        }
    }
    return f;
    //FIN DU PROGRAMME
}
