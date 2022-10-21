void permute(string &str, int l, int r) 
{ 
    if (l == r) 
        cout << str << " "; 
    else
    { 
        for (int i = l; i <= r; i++) 
        { 
            swap(str[l], str[i]); 
            permute(str, l+1, r); 
            swap(str[l], str[i]); 
        } 
    } 
} 
