void Sieve(int n){
    vector<bool> prime(n+1 , true);

    for(int p=2;p*p<=n;p++){
        if(prime[p]==true){
            for(int i=2*p;i<=n;i+=p){
              prime[i] = false;
            }
        }
    }

    for(int p=2;p<=n;p++){

        if(prime[p]== true) {
            cout << p << " ";
        }
    }

}
