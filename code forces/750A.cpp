    #include <iostream>
    using namespace std;

    int main() {
        // your code goes here
        int t;
        cin>>t;
        while(t--)
        {
            int a,b,flag=0,count=0;
            cin>>a>>b;
            int aa=a,bb=b;
            if(a%b>0)
                {
                    while(a>=1 && b>=1)
                    {
                        a++;
                        b--;
                        count++;
                        if(a%b==0)
                            {
                                flag=1;
                                break;
                            }
                    }
                    
                    if(flag)
                        cout<<count<<endl;
                        
                    else
                        {
                            a=aa;
                            b=bb;
                            while(a>=1 && b>=1)
                                {
                                    a--;
                                    b++;
                                    count++;
                                    if(a%b==0)
                                        {
                                            flag=1;
                                            break;
                                        }
                                }

                            cout<<count<<endl;
                        }
                }
            
            else
                cout<<"0"<<endl;
        }   
        return 0;
    }
