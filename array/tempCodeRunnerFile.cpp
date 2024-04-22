for(int i=1; i<w.size()+v.size(); i++)
    {
        if(ans[i] < ans[i-1])
        {
            temp = ans[i-1];
            ans[i-1] = ans[i];
            ans[i] = temp;
        }
    }