for(int i=0;i<str.length();i++){
        if(tolower(str[i])=='a' || tolower(str[i])=='o' ||  tolower(str[i])=='e' || tolower(str[i])=='u' || tolower(str[i])=='i')
        {
            str.erase(i,1);
            i--;
        }
    }
    cout<<str<<endl;