#include<stdio.h>
int main()
{
	int n,f;
	printf("Welcome to High speed Network");
	printf("\n Press 1 for English & 2 for Hindi");
	scanf("%d",&n);
	f=1;
	while(f)
	{
		switch(n)
		{
			case 1:printf("Hello and welcome to in JIO.\nWe know that there is a problem of using internet Service.\n if you have this problem then please wait for some time my team are work there to solve your problem.\n Press 1 for know your available balance \n Press 2 for set your jio tune\n Press 3 for call history \n Press 4 for to know about new offer\n Press 5 for to decrease your call rate,\n Press 6 for convert your sim to 4G,\n Press 7 to talk with coustmer executive\n Press 8 for Sim activate\n Press 9 for listen Abuse\nPress 10 for get a best lottery ");
			scanf("%d",&n);
			switch(n)
			{
				case 1:printf("________________________________________________\nIn your Account Balance=Rs-10");
				break;
				case 2:printf("________________________________________________\nYad hai tujhko tune kaha tha kabhhi nhi ruthenge nhi");
				break;
				case 3:printf("________________________________________________\nAbhishek     5min  12 2 2021\nRahul Gupta   7min  12 2 2021\nMohan        6min  13 2 2021");
				break;
				case 4:printf("________________________________________________\nRs-149  1GB/day  28din\nRs-199  1.5GB/day 28din\nRs-249  2GB/day  56din\nRs-299  1.5GB/day 56din\nRs-399  2GB/day  56din");
				break;
				case 5:printf("________________________________________________\nRs-49 1ps/sec\nRs-56 o.5ps/sec\nRs-12 2ps/sec\nRs-88 1ps/min");
				break;
				case 6:printf("________________________________________________\nThank you for converting your sim to 4G network");
				break;
				case 7:printf("________________________________________________\nAll persons are busy to this time try again next time");
				break;
				case 8:printf("________________________________________________\nYour sim is activate after 24hour Thankyou");
				break;
				case 9:printf("________________________________________________\nEdiot,Sillyfello");
				break;
				case 10:printf("________________________________________________\nCongratulation,You have a great lottery");
				f=0;
				break;
				default:printf("________________________________________________\nPlease call again");
			}	break;
			case 2:printf("\nNmastey aur swagat hai aapka JIO me.\nhm jante hai ki aapko internet seva use karne me diqqt aa rahi hogi ghabraeye nhi hmari worker team aapki is dqqt ko khatam karne me lagi hui hai ,Aap kuchh samay ke liye intezar kar le.\n apni bakaya rasi janne ke liye 1 dabaye\n apne mobile pr jio tune lagane ke liye 2 dabaye \n apne mobile ki call history janne ke liye 3 dabaye \n naye offer jannne ke liye 4 dabaye,\n call rate kam karane ke liye 5 dabaye,\n apne sim ko 4G me badlne ke liye 6 dabaye,\n coustmer executive se bat karne ke liye 7 dabaye\n Sim ko activate karane ke liye 8 dabaye\n Gali sunne ke liye 9 dabaye\nLottery me bhagidari ke liye 10 dabaye");
			scanf("%d",&n);
			switch(n)
			{
				case 1:printf("________________________________________________\nAapke khate me 12 rupaye hai ");
				break;
				case 2:printf("________________________________________________\nPyar kekro se na kari h");
				break;
				case 3:printf("________________________________________________\nAbhishek     5min  12 2 2021\nRahul Gupta   7min  12 2 2021\nMohan        6min  13 2 2021");
				break;
				case 4:printf("________________________________________________\nRs-149  1GB/day  28din\nRs-199  1.5GB/day 28din\nRs-249  2GB/day  56din\nRs-299  1.5GB/day 56din\nRs-399  2GB/day  56din");
				break;
				case 5:printf("________________________________________________\nRs-49 1ps/sec\nRs-56 o.5ps/sec\nRs-12 2ps/sec\nRs-88 1ps/min");
				break;
				case 6:printf("________________________________________________\nBhut khushi ki bat hai ki aapne apna sim 4G me badalwaya 4G ka ab Maja lijiye");
				break;
				case 7:printf("________________________________________________\nAapko bta de av coustmer care me koi aapse bat karna nhi chahta hai ");
				break;
				case 8:printf("________________________________________________\nAapka sim 24hour me chalu ho jayega dhanyabad");
				break;
				case 9:printf("________________________________________________\nKamine,Kutte mai tera khoon pi jaunga");
				break;
				case 10:printf("________________________________________________\nBadhai ho aapko ek lottry lagi hai");
				f=0;
				break;
				default:printf("________________________________________________\nKripya dobara try kare");
				break;
			}
		}
	}
	return 0;
}
