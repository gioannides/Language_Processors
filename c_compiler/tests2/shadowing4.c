int a = 90;                                                                     
int main()                                                                      {                                                                               
        int a=1,b=2;                                                            
        char c=3;                                                                       if(1)                                                                   
        {                                                                       
                int ifi=4;                                                      
                int a=10;                                                       
                {                                                               
                        int a=20;                                               
                        int newscope=5;                                         
                        {       int a=30;                                       
                                int the_other_newscope = 6;                     
                                a=b+ifi-newscope*the_other_newscope;            
                        }                                                       
                }                                                               
        }                                                                       
                                                                                
        return a;                                                               }       