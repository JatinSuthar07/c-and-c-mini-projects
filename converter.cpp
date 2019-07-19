#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
FILE *fp;
void length();
void weight();
void temperature();
void area();
void volume();
//function of length.  
void mm_m();
void m_mm();
void cm_m();
void m_cm();
void km_cm();
void m_mile();
void mile_m();
void km_mile();
void mile_km();
void feet_m();
void m_feet();
void inch_m();
void m_inch();
void yard_m();
void m_yard();
//functions of temperature..
void cel_f();
void f_cel();
void cel_k();
void k_cel();
void f_k();
void k_f();
//function of weight...
void milligm_gm();
void gm_milligm();
void gm_kg();
void kg_gm();
void kg_mton();
void mton_kg();
void pound_kg();
void kg_pound();
void gm_pound();
void pound_gm();
//functions of area.
void mmSq_cmSq();
void cmSq_mmSq();
void cmSq_mSq();
void mSq_cmSq();
void mSq_kmSq();
void kmSq_mSq();
void feetSq_mSq();
void mSq_feetSq();
void yardSq_mSq();
void mSq_yardSq();
void mileSq_kmSq();
void kmSq_mileSq();
void acre_kmSq();
void kmSq_acre();
void acre_hect();
void hect_acre();
//funcyion of volume...
       void mL_L();
       void L_mL();
       void mmQ_cmQ();
       void cmQ_mmQ();
       void cmQ_mQ ();
       void mQ_cmQ ();
       void inchQ_mQ();
       void mQ_inchQ();
       void mQ_feetQ();
       void mQ_gallon();
       void gallon_mQ();
       void L_gallon();
       void gallon_L();


int main()
{
	int x;
	main:
	printf("\t\t\t\t      WELCOME TO UNIT CONVERTION\n" );
    printf("\n      TYPE \n     ------" );
	printf("\nPress 1 for Length\nPress 2 for Temparature\nPress 3 for Weight\nPress 4 for Area\nPress 5 for Volume");
    printf("\n\nPlease choose your Convertion Type:" ) ;
    scanf("%d",&x);
    switch(x)
    {
    	case 1 :length();
    	        system("cls");
    	    	goto main;
    			break;
    	case 2 : weight();
    			system("cls");
				goto main;
				break;
    	case 3:temperature();
    			system("cls");
				goto main;
				break;
    	case 4:area();
    			system("cls");
				goto main;
				break;
    	case 5: volume();
    			system("cls");
    			goto main;
				break;
    	default : break; 	  	
	}
}
 void mm_m()
         { float i,a;
         fp=fopen("convertor","w");
          printf("\n  please enter the length in  Millimeter= ");
          scanf("%f", &i);
          a=i*0.001;
          printf("\n   units converted in Meter= %f ",a );getch();
          
         fprintf(fp,"%f",a);
	   fclose(fp);
	    }
     void m_mm()
         { float i,a;
         fp=fopen("convertor","w");
		 printf("\n  please enter the length in Meter= ");
         scanf("%f", &i);
         a=i*1000;
         printf("\n  units converted in millimeter= %f",a);getch();
         fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void cm_m()
         {float i,a;
         fp=fopen("convertor","w");
		  printf("\n  please enter the length in Centimeter= ");
          scanf("%f", &i);
         a=i*.01;
		  printf("\n  units converted in Meter= %f",a);getch();
          fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void m_cm()
        {float i,a;
         
		 fp=fopen("convertor","w");
		 printf("\n  please enter the length in Meter= " );
         scanf("%f", &i);
         a=i*100;
		 printf("\n  units converted in Cm= %f", a);getch();
         fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void m_mile()
         {float i,a;
         fp=fopen("convertor","w");
		 printf("\n  please enter the length in Meter= " );
         scanf("%f", &i);
         a=i*.00062;
		 printf("\n  units converted in Mile= %f", a);getch();
         fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void mile_m()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n  please enter the length in Mile= " );
        scanf("%f", &i);
        a=i*1609.344;
		printf("\n  units converted in Meter= %f",&a );getch();
        fprintf(fp,"%f",&a);
	   fclose(fp);
		}
     void  mile_km()
        {float i,a;
        fp=fopen("convertor","w");
		 printf("\n  please enter the length in M = " );
         scanf("%f", &i);
         a=i*0.00001;
		 printf("\n  units converted in km= %f", &a);getch();
		fprintf(fp,"%f",&a);
	   fclose(fp);
        }

    void km_cm()
        {   float i,a;
			fp=fopen("convertor","w");
			printf("\n  please enter the length in km= " );
            scanf("%f", &i);
           a=i*100000;
		    printf("\n  units converted in Cm= %f" ,a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void feet_m()
        {float i,a;
          fp=fopen("convertor","w");
		  printf("\n  please enter the length in Feet= " );
        	scanf("%f", &i);
          a=i*.3048;
		  printf("\n  units converted in Meter= %f", a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void m_feet()
        {float i,a;
         fp=fopen("convertor","w");
		 printf("\n please enter the length in  Meter= " );
         scanf("%f", &i);
         a=i*3.28084;
		 printf("\n  units converted in Feet= %f ", a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void yard_m()
        {float i,a;
         fp=fopen("convertor","w");
		 printf("\n   please enter the length in Yard= " );
         scanf("%f" , &i);
       	a=i*0.9144;
	     printf("\n   units converted in Meter=  %f", a);getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	    }
    void m_yard()
        {float i,a;
         fp=fopen("convertor","w");
		 printf("\n  please enter the length in Meter= " );
         scanf("%f", &i);
         a=i*1.09361;
		 printf("\n  units converted in Yard= %f",a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void inch_m()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n  please enter the length in Inch=" );
        scanf("%f", &i);
         a=i*.0254;
		 printf("\n   units converted inMeter= %f", a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void m_inch()
        {float i,a;
        fp=fopen("convertor","w");
		 printf("\n  please enter the length in Meter=" );
        scanf("%f", &i);
        a=i*39.37008;
		printf("\n  units converted in Inch= %f", a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void km_mile()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n  please enter the length in kilometer=" );scanf("%f", &i);
        a=i*.6213712;
		printf("\n  units converted in Mile= %f", a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
void length()
{
					int x;
					a:
					printf("\n  press 1 : mm-m" );
                    printf("\n  press 2 : m-mm" );
                    printf("\n  press 3 : cm-m" );
                    printf("\n  press4 : m-cm" );
                    printf("\n  press 5 : km-cm" );
                    printf("\n  press 6 : m-mile" );
                    printf("\n  press 7 : mile-m" );
                    printf("\n  press 8 : km-mile" );
                    printf("\n  press 9 : mile-km" );
                    printf("\n  press 10 : feet-m" );
                    printf("\n  press 11 : m-feet" );
                    printf("\n  press 12 : inch-m" ); 
                    printf("\n  press 13 : m-inch" );
                    printf("\n  press 14 : yard-m" );
                    printf("\n  press 15 : m-yard" );
 					scanf("%d",&x);
 					system("cls");
					switch(x)
					{
						case 1: mm_m();
								system("cls");
								goto a;
								break;
          				case 2:m_mm();
          						system("cls");
          						goto a;
          						break;
						case 3:cm_m();
								system("cls");
								goto a;
								break;
						case 4:m_cm();
								system("cls");
								goto a;
								break;
						case 5:km_cm();
						
								system("cls");
								goto a;
								break;
						case 6:m_mile();
								system("cls");
								goto a;
								break;
						case 7:mile_m();
								system("cls");
								goto a;
								break;
						case 8:km_mile();
								system("cls");
								goto a;
								break;
			        	case 9:mile_km();system("cls");goto a;break;
						case 10:feet_m();system("cls");goto a;break;
						case 11:m_feet();system("cls");goto a;break;
						case 12:inch_m();system("cls");goto a;break;
						case 13:m_inch();system("cls");goto a;break;
						case 14:yard_m();system("cls");goto a;break;
						case 15:m_yard();system("cls");goto a;break;
						case 0:		system("cls");break;
						default :system("cls");goto a;break;
					}
}
void cel_f()
       {float i,a;
       fp=fopen("convertor","w");
	   printf("\n  Please enter Temperature in Celsius= " );
       scanf("%f", &i);
    a=(((9*i)/5)+32);
	printf("\n  TEMPERATURE converted in Fahrenheit= %f" ,a);getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void f_cel()
       {float i,a;
      fp=fopen("convertor","w");
	   printf("\n   Please enter Temperature in Fahrenheit= " );   scanf("%f", &i);
      a=(((i-32)/9)*5);
	   printf("\n TEMPERATURE converted in  Celsius= %f",a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void cel_k()
        {float i,a;
         fp=fopen("convertor","w");
		 printf("\n  Please enter Temperature in celsius= " );scanf("%f", &i);
        a=i+273;
		 printf("\n  TEMPERATURE converted in kelvin= %f", a);getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	    }
    void k_cel()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n  Please enter Temperature in kelvin= " );  scanf("%f", &i);
       a=i-273;
	    printf("\n  TEMPERATURE converted in celsius= %f", a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }

 
void temperature()
{
	int x;
	b:
	printf("\n  1: Celsius-Fahrenheit" );
    printf("\n  2: Fahrenheit-Celsius" );
    printf("\n  3: Celsius-Kelvin" );
    printf("\n  4: Kelvin-Celcius" ); 
    printf("\n  5: Back to The Main Menu" );
	scanf("%d",&x);
	system("cls");
	switch(x)
	{
		case 1:cel_f();system("cls");goto b;break;
		case 2:f_cel();system("cls");goto b;break;
		case 3:cel_k();system("cls");goto b;break;
		case 4:k_cel();system("cls");goto b;break;
		case 5:system("cls");break;
		default : system("cls");goto b;break;
	}
}
    void milligm_gm()
        { float i,a;
        fp=fopen("convertor","w");
		printf("\n  Please enter WEIGHT in milligramm= " );scanf("%f", &i);
        a=i*.001;
		printf("\n  Weight converted in gramm= %f",a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void gm_milligm()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n  Please enter WEIGHT in gram= " ); scanf("%f", &i);
        a=i*1000;
		printf("\n  Weight converted in milligramm= %f",a );getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void  pound_kg()
       {float i,a;
       fp=fopen("convertor","w");
	   printf("\n  Please enter WEIGHT in pound= " ); scanf("%f", &i);
       a=i*.45359;
	   printf("\n  Weight converted in kilogramm= %f", a);getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void  gm_kg()
        {float i,a;
		fp=fopen("convertor","w");
		 printf("\n Please enter WEIGHT in  Gramm= " );scanf("%f", &i);
        a=i*.001;
		  printf("\n  Weight converted in killogramm= %f",a );getch();
         fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void kg_gm()
    {
	    float a,i;fp=fopen("convertor","w");printf("\n  Please enter WEIGHT in killogramm= " );scanf("%f", &i);
         a=i*1000;
		 printf("\n Weight converted in  Gramm= %f", a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }


    void  kg_pound()
      {float i,a;
      fp=fopen("convertor","w");
	  printf("\n Please enter WEIGHT in  kilogramm= " );scanf("%f", &i);
      a=2.20462*i;
	  printf("\n  Weight converted in pound= %f", a);getch();
      fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void gm_pound()
      {float i,a ;
      fp=fopen("convertor","w");
	  printf("\n  Please enter WEIGHT in gramm= " );  scanf("%f", &i);
      a=i*.0022;
	  printf("\n  Weight converted in pound= %f", a);getch();
      fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void pound_gm()
      {float i,a;
      fp=fopen("convertor","w");
	    printf("\n Please enter WEIGHT in  pound= " ); scanf("%f", &i);
        a=i*453.59237;
		printf("\n  Weight converted in gramm= %f",a);getch();
      fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void kg_mton()
      {float i,a;
      fp=fopen("convertor","w");
	  printf("\n  Please enter WEIGHT in kilogramm= " );scanf("%f", &i);
      a=i*.001;
	  printf("\n  Weight converted in matric ton= %f",a);getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void mton_kg()
      {float i,a;
     fp=fopen("convertor","w");
	 printf("\n  Please enter WEIGHT in metric ton= " ); scanf("%f", &i);
     a=i*1000;
	 printf("\n  Weight converted in kilogramm= %f ",a);getch();
      fprintf(fp,"%f",a);
	   fclose(fp);
	   }
void weight()
{
	int x;
	c:
	printf("\n  1: Milligm-Gramm" );
    printf("\n  2: Gramm-milligm" );
    printf("\n  3: Gramm-killogram" );
    printf("\n  4: killoGramm-Gramm" );
    printf("\n  5: pound-killogramm" );
	printf("\n  6: killogramm-pound" );
             printf("\n  7: Gramm-Pound" );
             printf("\n  8: Pound-gramm" );
             printf("\n  9: killogramm-Metric ton" );
             printf("\n 10: Metric ton-Killogramm" );
             printf("\n 11: Back to The Main Menu" );
             scanf("%d",&x);
             system("cls");
             switch(x)
             {
             	case 1:milligm_gm();system("cls");goto c;break;
             	case 2:gm_milligm();system("cls");goto c;break;
             	case 3:gm_kg();system("cls");goto c;break;
             	case 4:kg_gm();system("cls");goto c;break;
             	case 5:pound_kg();system("cls");goto c;break;
             	case 6:kg_pound();system("cls");goto c;break;
             	case 7:gm_pound();system("cls");goto c;break;
             	case 8:pound_gm();system("cls");goto c;break;
             	case 9:kg_mton();system("cls");goto c;break;
             	case 10:mton_kg();system("cls");goto c;break;
				case 11:system("cls");break;
				default : system("cls");goto c;break;
			}
}
    void mmSq_cmSq()
        {float i,a;
        fp=fopen("convertor","w");   
		printf("\n  Please enter AREA in squqre mm= " );scanf("%f", &i);
       a=i*.01;
	    printf("\n  AREA converted in square cm= %f", a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void cmSq_mmSq()
        {float i,a;
        fp=fopen("convertor","w");
		 printf("\n  Please enter AREA in square cm= " );scanf("%f", &i);
         a=i*100;
		 printf("\n  Weight converted in square mm= %f",a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void cmSq_mSq()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n  Please enter AREA in square cm= ");scanf("%f", &i);
        a=i*.0001;
		printf("\n  Weight converted in square m= %f",a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void mSq_cmSq()
        {float i,a;
        fp=fopen("convertor","w");
		 printf("\n  Please enter AREA in square m= "); scanf("%f", &i);
         a=i*10000;
		 printf("\n  Weight converted in square cm= %f",a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void mSq_kmSq()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n  Please enter AREA in square m= " ); scanf("%f", &i);
        a=i*.000001;
		printf("\n  Weight converted in square km= %f",a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void kmSq_mSq()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n  Please enter AREA in square km= " );scanf("%f", &i);
        a=i*1000000;
		printf("\n  Weight converted in square m= %f", a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void feetSq_mSq()
      {float i,a;
      fp=fopen("convertor","w");
	  printf("\n  Please enter AREA in square feet= " );scanf("%f", &i);
      a=i*.0929;
	  printf("\n  Weight converted in square m= %f", a);getch();
      fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void mSq_feetSq()
      {float i,a;
      fp=fopen("convertor","w");
	  printf("\n  Please enter AREA in square m= " );  scanf("%f", &i);
      a=i*10.76391;
	  printf("\n  Weight converted in square feet= %f ",a );getch();
      fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    void yardSq_mSq()
      {float i,a;
      fp=fopen("convertor","w");
	  printf("\n  Please enter AREA in square yard= " );scanf("%f", &i);
      a=i*.83613;
	  printf("\n   Weight converted in square m= %f", a);getch();
      fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void mSq_yardSq()
       {float i,a;
        fp=fopen("convertor","w");
		printf("\n Please enter AREA in  square m= " ); scanf("%f", &i);
        a=i*1.19599;
		printf("\n  Weight converted in square yard= %f",a );getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void mileSq_kmSq()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n  Please enter AREA in square mile= " );scanf("%f", &i);
        a=i*2.5899;
		printf("\n  Weight converted in  square km= %f",a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void kmSq_mileSq()
        {float i,a;
        fp=fopen("convertor","w");
		 printf("\n  Please enter AREA in square km= "  );scanf("%f", &i);
        a=i*.3861;
		printf("\n  Weight converted in square mile= %f", a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void acre_hect()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n  Please enter AREA in Acre= " );  scanf("%f", &i);
        a=i*.40469;
		printf("\n  Weight converted in Hector= %f ",a);getch();
        fprintf(fp,"%f",a);
	   fclose(fp);
		}
     void hect_acre()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n Please enter AREA in  Hector= ");scanf("%f", &i);
        a=i*2.47105;
		printf("\n  Weight converted in Acre= %f " ,a);getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	    }
      void acre_kmSq()
        {float i,a;
		fp=fopen("convertor","w");
		 printf("\n  Please enter AREA in Acre= " );scanf("%f", &i);
        a=i*.00405;
		 printf("\n  Weight converted in Square km= %f",a);getch();
       	fprintf(fp,"%f",a);
	   fclose(fp);
	     }
      void kmSq_acre()
      {float i,a;
       fp=fopen("convertor","w");
	   printf("\n Please enter AREA in  Square km= ");scanf("%f", &i);
       a=i*247.10538;
	   printf("\n  Weight converted in Acre= %f",a);getch();
		fprintf(fp,"%f",a);
	   fclose(fp);
	   
      }

void area()
{
	int x;
	d:
	printf("\n   1: Square mm-Square cm" );
                   printf("\n   2: square cm-Square mm" );
                   printf("\n   3: square cm-square m" );
                   printf("\n   4: Square m-Square cm" );
                   printf("\n   5: Square m-Square km" );
                   printf("\n   6: Square km-Square m" );
                   printf("\n   7: Square feet-Square m" );
                   printf("\n   8: Square m-Square feet" );
                   printf("\n   9: Square Yard-Square m" );
                   printf("\n  10: Square m-Square yard" );
                   printf("\n  11: Square mile-Square km" );
                   printf("\n  12: Square km-Square mile" );
                   printf("\n  13: Acre-Hectare" );
                   printf("\n  14: Hectare-Acre" );
                   printf("\n  15: Square km-Acre " );
                   printf("\n  16: Acre-Square km" );
                   printf("\n  17: Back to The Main Menu" );
      scanf("%d",&x);
	  system("cls");
	  switch(x)
		{
			case 1: mmSq_cmSq();system("cls");goto d;break; 
			case 2:cmSq_mmSq();system("cls");goto d;break;
			case 3: cmSq_mSq();system("cls");goto d;break;
			case 4: mSq_cmSq();system("cls");goto d;break;
			case 5: mSq_kmSq();system("cls");goto d;break;
			case 6: kmSq_mSq();system("cls");goto d;break;
			case 7: feetSq_mSq();system("cls");goto d;break;
			case 8: mSq_feetSq();system("cls");goto d;break;
			case 9: yardSq_mSq();system("cls");goto d;break;
			case 10:  mSq_yardSq();system("cls");goto d;break;
			case 11 :mileSq_kmSq();system("cls");goto d;break;
			case 12:kmSq_mileSq();system("cls");goto d;break;
			case 13:acre_hect();system("cls");goto d;break;
			case 14:hect_acre();system("cls");goto d;break;
			case 15:acre_kmSq();system("cls");goto d;break;
			case 16:kmSq_acre();system("cls");goto d;break;
			case 17:system("cls");break;
			default :system("cls");goto d;break;
	    }             
}	
 void mL_L()
         {float a,i;
         	fp=fopen("convertor","w");
			 printf("\n Please enter VOLUME in  milli litre= " );scanf("%f", &i);
         a=i*.001;
		 	printf("\n  VOLUME converted in Litre= %f", a);getch();
        fprintf(fp,"%f",&a);
	   fclose(fp);
	    }
      void L_mL()
         {  float i,a;
			fp=fopen("convertor","w");
			printf("\n  Please enter VOLUME in Litre= " ); scanf("%f", &i);
           a=i*1000;
		printf("\n  VOLUME converted in milli Litre= %f ",a );getch();
        fprintf(fp,"%f",&a);
	   fclose(fp);
	    }
     void cmQ_mmQ()
         {float i,a;
          printf( "\n Please enter VOLUME in  cubic cm= " ); scanf("%f", &i);
          fp=fopen("convertor","w");
		  a=i*1000;
		  printf("\n  Volume converted in cubic mm= %f",a);getch();
          fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void mmQ_cmQ()
         {float i,a;
         fp=fopen("convertor","w");
		 printf("\n  Please enter Volume in cubic mm= " );   scanf("%f", &i);
         a=i*.001;
		 printf("\n  volume converted in cubic cm= %f",a);getch();
        
		 fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void cmQ_mQ()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n Please enter Volume in  cubic cm= ");  scanf("%f", &i);
        a=i*.000001;
		printf("\n  Volume converted in cubic meter= %f",a );getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	    }
     void mQ_cmQ()
        {float i,a;
        fp=fopen("convertor","w");
		printf("\n Please enter Volume in  cubic meter= "); scanf("%f", &i);
        a=i*1000000;
		printf("\n  Volume converted in cubic cm= %f", a);getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	    }
     void inchQ_mQ()
       {float i,a;
       fp=fopen("convertor","w");
	   printf("\n Please enter Volume in  cubic inch= ");  scanf("%f", &i);
       a=i*.00002;
	   printf("\n  Volume converted in cubic meter= %f ",a );getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void mQ_inchQ()
       {float i,a;
       fp=fopen("convertor","w");
	   printf("\n  Please enter VOLUME in cubic meter= ");scanf("%f", &i);
       a=i*61023.74409;
	   printf("\n  Volume converted in cubic inch= %f", a);getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	   }
    
     void mQ_feetQ()
       {float i,a;
       fp=fopen("convertor","w");
	   printf("\n Please enter VOLUME in  cubic meter= ");scanf("%f", &i) ;
       a=i*123;
	   printf("\n  Volume converted in cubic feet= %f ",a );getch();
       
	   fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void mQ_gallon()
       {float i,a;
       fp=fopen("convertor","w");
	   printf("\n Please enter VOLUME in  cubic meter= ");scanf("%f", &i);
       a=i*264.17205;
	   printf("\n  Volume converted in gallon= %f", a);getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void gallon_mQ()
       {float i,a;
       fp=fopen("convertor","w");
	   printf("\n  Please enter VOLUME in Gallon= "); scanf("%f", &i);
       a=i*.00379;
	   printf("\n  Volume converted in cubic meter= %f",a );getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	   }
     void L_gallon()
        { float i,a;
       fp=fopen("convertor","w");
	    printf("\n  Please enter VOLUME in Litre= ");scanf("%f", &i);
       a=i*.21997;
	    printf("\n  Volume converted in gallon= %f", a);getch();
         fprintf(fp,"%f",a);
	   fclose(fp);
		}
    void gallon_L()
        {float i,a;
       fp=fopen("convertor","w");
	    printf("\n   Please enter VOLUME in Gallon= ");scanf("%f", &i);
       a=i*4.54609;
	    printf("\n  Volume converted in Litre= %f" ,a );getch();
       fprintf(fp,"%f",a);
	   fclose(fp);
	    }
void volume()
{ 	int x;
	e:  
	printf("\n   1 : ml-Litre");
               printf("\n   2 : Litre-ml");
               printf("\n   3 : Cubic mm-Cubic cm");
               printf("\n   4 : Cubic cm-Cubic mm") ;
               printf("\n   5 : Cubic cm-Cubic m" );
               printf("\n   6 : Cubic m-Cubic cm" );
               printf("\n   7 : Cubic Inch-Cubic m" );
               printf("\n   8 : Cubic m-Cubic Inch" );
              
               printf("\n  9 : Cubic m-Cubic feet" );
               printf("\n  10 : Cubic m-Gallon (uk)" );
               printf("\n  11 : Gallon-Cubic m" );
               printf("\n  12 : Litre-Gallon" );
               printf("\n  13 : Gallon-Litre" );
               printf("\n  14 : Back to The Main Menu" );
	scanf("%d",&x);
	system("cls");
	switch(x)
	{
		case 1:mL_L();system("cls");goto e;break;
       	case 2:L_mL();system("cls");goto e;break;
       	case 3:mmQ_cmQ();system("cls");goto e;break;
       	case 4:cmQ_mmQ();system("cls");goto e;break;
       	case 5:cmQ_mQ ();system("cls");goto e;break;
       	case 6:mQ_cmQ ();system("cls");goto e;break;
       	case 7:inchQ_mQ();system("cls");goto e;break;
       	case 8:mQ_inchQ();system("cls");goto e;break;
       	case 9:mQ_feetQ();system("cls");goto e;break;
       	case 10:mQ_gallon();system("cls");goto e;break;
       	case 11:gallon_mQ();system("cls");goto e;break;
       	case 12:L_gallon();system("cls");goto e;break;
      	case 13:gallon_L();	system("cls");goto e;break;
		case 15:goto e;break;	
		default :system("cls");goto e;break;
	}
			
}

