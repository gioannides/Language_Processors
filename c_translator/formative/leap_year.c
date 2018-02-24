int main()
{
    int year;

    year = 3000;

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            
            if ( year%400 == 0){
                return year;
	   }
            else{
               return 0;
	   }
        }
        else{
            return year;
	}
    }
    else{
        return 0;
    }
    
}
