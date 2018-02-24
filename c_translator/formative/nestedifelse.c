int main()
{
   int var1, var2;
  
  var1 = 45;
  var2 = 67;
   if (var1 != var2)
   {
	var1=var2+1;
	var2 = 888;
	if (var1 > var2)
	{
		var2=45;
		var1 = 77;
	}
	else
	{
		var2=89;
		var1=90;
	}
   }
   else
   {
	var1=890;
	var2=7699;
   }
   return var1+var2;
}
