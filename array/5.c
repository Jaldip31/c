
{
	int i,a[5],b[5],c[5],t,x=0,y=0,z=0;
	char g;
	float p;
	for(i=1;i<3;i++)
	{
		printf("roll no [%d] enter marks of a,b and c : ",i);
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		x+=a[i];
		y+=b[i];
		z+=c[i];
	}

	printf("\n|_no_|_a__|_b__|_c__|__total__|percentage|__p/f__|_grade__|");
	for(i=1;i<3;i++)
	{t=a[i]+b[i]+c[i];
	 p=t/3;
	//(variable)     if             else if        else if      else
	        g   =  (p>=80)? 'A' :   p>70? 'B'  :   p>45? 'C'  :  'D';



    if(a[i]>33 && b[i]>33 && c[i]>33 && p>33)
	{
	 	printf("\n|__%d_|_%d_|_%d_|_ %d_|__ %d__|__%0.2f___|_pass__|___%c___|  ",i,a[i],b[i],c[i],t,p,g);
	}
	else
	{
	 	printf("\n|__%d_|_%d_|_%d_|_ %d_|__ %d__|__%0.2f___|_fail__|___E___|  ",i,a[i],b[i],c[i],t,p);
	}
	}
	printf("\n|total| %d | %d | %d |__ %d__|",x,y,z,x+y+z);

}

/*
|_no_|_a__|_b__|_c__|__total__|percentage|__p/f__|_grade__|
|__1_|_11_|_22_|_ 33_|__ 66__|__22.00___|_fail__|___E___|
|__2_|_10_|_20_|_ 30_|__ 60__|__20.00___|_fail__|___E___|
|total| 21 | 42 | 63 |__ 126__|
*/